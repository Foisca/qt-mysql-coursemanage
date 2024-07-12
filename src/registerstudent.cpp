//
// Created by Yjy09 on 2024/7/11.
//

// You may need to build the project (run Qt uic code generator) to get "ui_RegisterStudent.h" resolved

#include "../include/registerstudent.h"
#include "ui_RegisterStudent.h"


RegisterStudent::RegisterStudent(const QString &username, QWidget *parent) : studentID(username),
                                                                             QWidget(parent),
                                                                             ui(new Ui::RegisterStudent) {
    ui->setupUi(this);
    ui->LabelID->setText(username);
}

RegisterStudent::~RegisterStudent() {
    delete ui;
}

void RegisterStudent::on_ButtonOK_clicked() {
    qDebug() << "ButtonOK clicked";
    data["ID"] = ui->LabelID->text();
    data["name"] = ui->lineEditName->text();
    data["gender"] = ui->comboBoxGender->currentText() == "男（Male）" ? "M" : "F";
    data["class"] = ui->comboBoxClass->currentText();
    data["major"] = ui->comboBoxMajor->currentText();
    data["department"] = ui->lineEditDepartment->text();
    data["birth"] = ui->dateEditBirth->date().toString("yyyy-MM-dd");
    data["residence"] = ui->lineEditResidence->text();

    qDebug() << data;
    if (checkData(data)) {
        insertData(data);
    }
}


void RegisterStudent::insertData(const QMap<QString, QString> &data) {
    QSqlQuery query;
    query.prepare(
        "INSERT INTO Student (studentID, studentName, studentGender, studentClass,"
        " studentMajor, studentDepartment, studentBirthday, studentResidence) "
        "VALUES (:ID, :name, :gender, :class, :major, :department, :birth, :residence)");

    query.bindValue(":ID", data["ID"]);
    query.bindValue(":name", data["name"]);
    query.bindValue(":gender", data["gender"]);
    query.bindValue(":class", data["class"]);
    query.bindValue(":major", data["major"]);
    query.bindValue(":department", data["department"]);
    query.bindValue(":birth", data["birth"]);
    query.bindValue(":residence", data["residence"]);

    if (!query.exec()) {
        qDebug() << "Insert failed:" << query.lastError().text();
        QMessageBox::critical(this, "Insert Error", query.lastError().text());
    } else {
        qDebug() << "Insert successful";
        QMessageBox::information(this, "Success", "Data inserted successfully");
    }
}


bool RegisterStudent::checkData(const QMap<QString, QString> &data) {
    if (data["name"].isEmpty()) {
        QMessageBox::critical(this, "数据不能为空", "请添加姓名");
        return false;
    }
    if (data["residence"].isEmpty()) {
        QMessageBox::critical(this, "数据不能为空", "请添加户籍");
        return false;
    }
    return true;
}

void RegisterStudent::on_ButtonCancel_clicked() {
    qDebug() << "ButtonCancel clicked";
    emit return_to_RegisterWindow();
}


void RegisterStudent::closeEvent(QCloseEvent *event)  {
    emit return_to_RegisterWindow();

}

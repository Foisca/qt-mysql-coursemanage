//
// Created by Yjy09 on 2024/7/11.
//

// You may need to build the project (run Qt uic code generator) to get "ui_StudentInformation.h" resolved

#include "../include/studentinformation.h"
#include "ui_StudentInformation.h"


StudentInformation::StudentInformation(const QString &username, QWidget *parent) : studentID(username), QWidget(parent),
    ui(new Ui::StudentInformation) {
    ui->setupUi(this);

    ui->ButtonOK->setShortcut(Qt::Key_Return);
    ui->ButtonCancel->setShortcut(Qt::Key_Escape);

    QSqlDatabase db = DBManager::instance().database();
    QSqlQuery query;
    QString queryString = QString("CALL GetStudentInfo('%1');").arg(studentID);
    query.exec(queryString);
    if (query.next()) {
        qDebug() << "query result = " << query.value(1);
        ui->labelID->setText(studentID);
        ui->lineEdiName->setText(query.value("studentName").toString());
        ui->lineEditGender->setText(query.value("studentGender").toString());
        ui->lineEditClass->setText(query.value("studentClass").toString());
        ui->lineEditMajor->setText(query.value("studentMajor").toString());
        ui->lineEditDepartment->setText(query.value("studentDepartment").toString());
        ui->dateEditBirth->setDate(query.value("studentBirthday").toDate());
        ui->lineEditResidence->setText(query.value("studentResidence").toString());
        ui->lineEditPassword->setText(query.value("password").toString());
    }
}

StudentInformation::~StudentInformation() {
    delete ui;
}


void StudentInformation::closeEvent(QCloseEvent *event) {
    emit return_to_StudentWindow();
}

void StudentInformation::on_ButtonOK_clicked() {
    qDebug() << "Button OK Clicked";
    QSqlDatabase db = DBManager::instance().database();
    QSqlQuery query;
    QString queryString = QString("CALL UpdateStudentInfo('%1', '%2', '%3', '%4', '%5', '%6', '%7', '%8', '%9');").
            arg(studentID).
            arg(ui->lineEdiName->text()).
            arg(ui->lineEditGender->text()).
            arg(ui->lineEditClass->text()).
            arg(ui->lineEditMajor->text()).
            arg(ui->lineEditDepartment->text()).
            arg(ui->dateEditBirth->text()).
            arg(ui->lineEditResidence->text()).
            arg(ui->lineEditPassword->text());
    qDebug() << "QueryString = " << queryString;
    // 判断是否成功执行SQL语句
    if (!query.exec(queryString)) {
        QMessageBox::critical(this, "Database Update Error", query.lastError().text());
    } else {
        QMessageBox::information(this, "修改成功", "Student information updated successfully.");
    }
}

void StudentInformation::on_ButtonCancel_clicked() {
    qDebug() << "Button Cancel Clicked";
    emit return_to_StudentWindow();
}

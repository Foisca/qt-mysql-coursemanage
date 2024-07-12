//
// Created by Yjy09 on 2024/7/11.
//

// You may need to build the project (run Qt uic code generator) to get "ui_TeacherInfomation.h" resolved

#include "teacherinfomation.h"
#include "ui_TeacherInfomation.h"


TeacherInfomation::TeacherInfomation(const QString &username, QWidget *parent) : teacherID(username),
    QWidget(parent),
    ui(new Ui::TeacherInfomation) {
    ui->setupUi(this);
    QSqlDatabase db = DBManager::instance().database();
    QSqlQuery query;
    QString queryString = QString("CALL GetTeacherInfo('%1');").arg(teacherID);
    query.exec(queryString);
    if (query.next()) {
        ui->labelID->setText(teacherID);
        ui->lineEdiName->setText(query.value("teacherName").toString());
        ui->lineEditGender->setText(query.value("teacherGender").toString());
        ui->lineEditDepartment->setText(query.value("teacherDept").toString());
        ui->lineEditTitle->setText(query.value("teacherTitle").toString());
        ui->lineEditPhone->setText(query.value("teacherPhone").toString());
        ui->lineEditPassword->setText(query.value("password").toString());
    }
}

TeacherInfomation::~TeacherInfomation() {
    delete ui;
}

void TeacherInfomation::on_ButtonOK_clicked() {
    qDebug() << "TeacherInfomation: ButtonOK clicked";
    QSqlDatabase db = DBManager::instance().database();
    QSqlQuery query;
    QString queryString = QString("CALL UpdateTeacherInfo('%1', '%2', '%3', '%4', '%5', '%6', '%7');").
            arg(teacherID).
            arg(ui->lineEdiName->text()).
            arg(ui->lineEditGender->text()).
            arg(ui->lineEditDepartment->text()).
            arg(ui->lineEditTitle->text()).
            arg(ui->lineEditPhone->text()).
            arg(ui->lineEditPassword->text());
    qDebug() << "QueryString = " << queryString;
    // 判断是否成功执行SQL语句
    if (!query.exec(queryString)) {
        QMessageBox::critical(this, "Database Update Error", query.lastError().text());
    } else {
        QMessageBox::information(this, "修改成功", "Teacher information updated successfully.");
    }
}

void TeacherInfomation::on_ButtonCancel_clicked() {
    qDebug() << "TeacherInfomation: ButtonCancel clicked";
    emit return_to_TeacherWindow();
}

void TeacherInfomation::closeEvent(QCloseEvent *event) {
    emit return_to_TeacherWindow();
}
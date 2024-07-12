//
// Created by Yjy09 on 2024/7/11.
//

// You may need to build the project (run Qt uic code generator) to get "ui_RegisterWindow.h" resolved

#include "../include/registerwindow.h"
#include "ui_RegisterWindow.h"


RegisterWindow::RegisterWindow(QWidget *parent) : QWidget(parent), ui(new Ui::RegisterWindow) {
    ui->setupUi(this);

    QSqlDatabase teacherDB = DBManager::instance().database();
    // 确保数据库连接有效
    if (!teacherDB.isOpen()) {
        qDebug() << "Database is not open";
        return;
    }
    QString queryStudentString = QString("SELECT GetNewStudentID() AS newStudentID;");
    QString queryTeacherString = QString("SELECT GetNewTeacherID() AS newTeacherID;");

    qDebug() << "QueryStudentString:" << queryStudentString;
    qDebug() << "QueryTeacherString:" << queryTeacherString;

    QSqlQuery queryStudent, queryTeacher;

    queryStudent.exec(queryStudentString);
    queryTeacher.exec(queryTeacherString);
    if (!queryStudent.next()) {
        qDebug() << "Student Query Empty";
    }
    if (!queryTeacher.next()) {
        qDebug() << "Teacher Query Empty";
    }
    qDebug() << "Student Result = " << queryStudent.value(0).toString();
    qDebug() << "Teacher Result = " << queryTeacher.value(0).toString();
    ui->LabelStudent->setText(queryStudent.value(0).toString());
    ui->LabelTeacher->setText(queryTeacher.value(0).toString());
}

RegisterWindow::~RegisterWindow() {
    delete ui;
}

// 添加返回按钮的功能
void RegisterWindow::on_ButtonStudent_clicked() {
    qDebug() << "Student Register";
    if (!rs) {
        rs = new RegisterStudent(ui->LabelStudent->text());
        // 连接注册窗口的返回信号到槽函数
        connect(rs, &RegisterStudent::return_to_RegisterWindow, this, &RegisterWindow::on_return_to_RegisterWindow);
    }

    this->hide();
    rs->show();
}

void RegisterWindow::on_ButtonTeacher_clicked() {
    qDebug() << "Teacher Register";
}

void RegisterWindow::on_ButtonCancel_clicked() {
    qDebug() << "Cancel";
    emit return_to_LoginWindow();
}


void RegisterWindow::on_return_to_RegisterWindow() {
    this->show();
    rs->hide();
}


void RegisterWindow::closeEvent(QCloseEvent *event) {
    emit return_to_LoginWindow();
}

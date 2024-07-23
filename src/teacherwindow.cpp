//
// Created by Yjy09 on 2024/7/10.
//

// You may need to build the project (run Qt uic code generator) to get "ui_TeacherWindow.h" resolved

#include "../include/teacherwindow.h"

#include <utility>
#include "ui_TeacherWindow.h"


TeacherWindow::TeacherWindow(QString username, QWidget *parent) : QWidget(parent),
                                                                  ui(new Ui::TeacherWindow),
                                                                  username(std::move(username)) {
    ui->setupUi(this);
    setModel();

    qDebug() << "TeacherWindow: setModel finished";
}

TeacherWindow::~TeacherWindow() {
    delete ui;

    delete model;
}

void TeacherWindow::setModel() {
    qDebug() << "enter setModel";
    QSqlDatabase teacherDB = DBManager::instance().database();

    // 确保数据库连接有效
    if (!teacherDB.isOpen()) {
        qDebug() << "Database is not open";
        return;
    }
    model = new QSqlQueryModel;
    QString queryString = QString("CALL GetTeacherCourse('%1');").arg(username);
    qDebug() << "QueryString:" << queryString;
    model->setQuery(queryString, teacherDB);

    if (model->lastError().isValid()) {
        qDebug() << "Model error:" << model->lastError();
    } else {
        ui->tableViewTC->setModel(model); // 设置模型
        ui->tableViewTC->resizeColumnsToContents(); // 调整列宽
    }

    queryString = QString("SELECT GetTeacherName('%1') AS teacherName;").arg(username);
    QSqlQuery nameQuery;
    bool success = nameQuery.exec(queryString);
    QString name;

    if (success && nameQuery.next()) {
        name = nameQuery.value(0).toString();
    } else {
        qDebug() << "查询失败:" << nameQuery.lastError();
    }

    qDebug() << "name = " << name;
    ui->LabelName->setText("您好！" + name + "老师");
    this->setWindowTitle("教师课程信息," + name + "," + "工号：" + username);
    qDebug() << "setModel completed";
}

void TeacherWindow::on_tableViewTC_clicked(const QModelIndex &index) {
    int row = index.row();
    QStringList rowData;
    for (int col = 0; col < model->columnCount(); col++) {
        QModelIndex cellIndex = model->index(row, col);
        QString cellData = model->data(cellIndex).toString();
        rowData << cellData;
    }
    qDebug() << "rowData = " << rowData;
    ui->LabelCourseID->setText(rowData[0]);
    ui->LabelCourseName->setText(rowData[1]);
}

void TeacherWindow::on_ButtonReturn_clicked() {
    emit return_to_LoginWindow();
}

void TeacherWindow::closeEvent(QCloseEvent *event) {
    emit return_to_LoginWindow();
}

void TeacherWindow::on_ButtonInfo_clicked() {
    qDebug() << "ButtonInfo clicked";
    if (!teacherInfo) {
        teacherInfo = new TeacherInfomation(username);
        connect(teacherInfo, &TeacherInfomation::return_to_TeacherWindow, this,
                &TeacherWindow::on_return_to_TeacherWindow);
    }
    teacherInfo->show();
    this->hide();
}

void TeacherWindow::on_return_to_TeacherWindow() {
    if (teacherInfo)
        teacherInfo->hide();
    if (teacherNewCourse)
        teacherNewCourse->hide();
    this->show();
}


void TeacherWindow::on_ButtonCourseApply_clicked() {
    // 点击这个按钮，就打开teachernewcourse这个窗口
    qDebug() << "ButtonCourseApply clicked";
    if (!teacherNewCourse) {
        teacherNewCourse = new TeacherAddNewCourse(username);
        connect(teacherNewCourse, &TeacherAddNewCourse::return_to_TeacherWindow, this,
                &TeacherWindow::on_return_to_TeacherWindow);
    }
    teacherNewCourse->show();
    this->hide();
}

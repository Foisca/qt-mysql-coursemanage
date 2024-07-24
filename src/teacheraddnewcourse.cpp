//
// Created by Yjy09 on 2024/7/15.
//

// You may need to build the project (run Qt uic code generator) to get "ui_TeacherAddNewCourse.h" resolved

#include "../include/teacheraddnewcourse.h"
#include "ui_TeacherAddNewCourse.h"

TeacherAddNewCourse::TeacherAddNewCourse(const QString &username, QWidget *parent) : teacherID(username),
    QWidget(parent),
    ui(new Ui::TeacherAddNewCourse) {
    ui->setupUi(this);
    setModel();
}

TeacherAddNewCourse::~TeacherAddNewCourse() {
    delete ui;
}

void TeacherAddNewCourse::closeEvent(QCloseEvent *event) {
    emit return_to_TeacherWindow();
}

void TeacherAddNewCourse::on_ButtonReturn_clicked() {
    emit return_to_TeacherWindow();
}

void TeacherAddNewCourse::setModel() {
    qDebug() << "enter setModel";
    QSqlDatabase teacherDB = DBManager::instance().database();

    // 确保数据库连接有效
    if (!teacherDB.isOpen()) {
        qDebug() << "Database is not open";
        return;
    }
    model = new QSqlQueryModel;
    QString queryString = QString("CALL GetTeacherAvailableBaseCourse('%1');").arg(teacherID);
    qDebug() << "QueryString:" << queryString;
    model->setQuery(queryString, teacherDB);

    if (model->lastError().isValid()) {
        qDebug() << "Model error:" << model->lastError();
    } else {
        ui->tableViewAC->setModel(model); // 设置模型
        ui->tableViewAC->resizeColumnsToContents(); // 调整列宽
    }

    queryString = QString("SELECT GetTeacherName('%1') AS teacherName;").arg(teacherID);
    QSqlQuery nameQuery;
    bool success = nameQuery.exec(queryString);

    if (success && nameQuery.next()) {
        qDebug() << "查询成功:" << nameQuery.lastError();
    } else {
        qDebug() << "查询失败:" << nameQuery.lastError();
    }
}

void TeacherAddNewCourse::on_return_to_TeacherAddNewCourseWindow() {
    this->show();
    if (infoWindow) {
        infoWindow->hide();
    }
}

void TeacherAddNewCourse::on_tableViewAC_doubleClicked(const QModelIndex &index) {
    // 返回当前行的所有信息
    int row = index.row();
    QString courseID = model->data(model->index(row, 0)).toString();
    qDebug() << courseID;
    if (!infoWindow) {
        infoWindow = new TeacherAddNewCourseInfo(teacherID, courseID);
        connect(infoWindow, &TeacherAddNewCourseInfo::return_to_TeacherAddNewCourse, this,
                &TeacherAddNewCourse::on_return_to_TeacherAddNewCourseWindow);
    }
    infoWindow->show();
    this->hide();
}

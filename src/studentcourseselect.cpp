//
// Created by Yjy09 on 2024/7/16.
//

// You may need to build the project (run Qt uic code generator) to get "ui_StudentCourseSelect.h" resolved

#include "../include/studentcourseselect.h"
#include "ui_StudentCourseSelect.h"


StudentCourseSelect::StudentCourseSelect(const QString &username, QWidget *parent) : studentID(username),
    QWidget(parent), ui(new Ui::StudentCourseSelect) {
    ui->setupUi(this);
    setModel();
}

StudentCourseSelect::~StudentCourseSelect() {
    delete ui;
}

void StudentCourseSelect::closeEvent(QCloseEvent *event) {
    emit return_to_StudentWindow();
}


void StudentCourseSelect::setModel() {
    QSqlDatabase stuDB = DBManager::instance().database();
    if (!stuDB.isOpen()) {
        qDebug() << "Database is not open";
        return;
    }
    model = new QSqlQueryModel;
    QString queryString = QString("CALL GetStudentAvailableCourses('%1');").arg(studentID);
    model->setQuery(queryString, DBManager::instance().database());

    if (model->lastError().isValid()) {
        qDebug() << "Model error:" << model->lastError();
    } else {
        ui->tableViewSCA->setModel(model);
        ui->tableViewSCA->resizeColumnsToContents();
    }
}

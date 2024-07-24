//
// Created by Yjy09 on 2024/7/17.
//

// You may need to build the project (run Qt uic code generator) to get "ui_TeacherAddNewCourseInfo.h" resolved

#include "../include/teacheraddnewcourseinfo.h"
#include "ui_TeacherAddNewCourseInfo.h"

TeacherAddNewCourseInfo::TeacherAddNewCourseInfo(const QString &username, const QString &courseID,
                                                 QWidget *parent) : teacherID(username),
                                                                    courseBaseID(courseID),
                                                                    QWidget(parent),
                                                                    ui(new Ui::TeacherAddNewCourseInfo) {
    ui->setupUi(this);
}

TeacherAddNewCourseInfo::~TeacherAddNewCourseInfo() {
    delete ui;
}

void TeacherAddNewCourseInfo::closeEvent(QCloseEvent *event) {
    emit return_to_TeacherAddNewCourse();
}

void TeacherAddNewCourseInfo::on_ButtonReturn_clicked() {
    emit return_to_TeacherAddNewCourse();
}

void TeacherAddNewCourseInfo::on_ButtonOK_clicked() {
    qDebug() << "ButtonOK clicked";
}

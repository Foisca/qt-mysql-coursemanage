//
// Created by Yjy09 on 2024/7/10.
//

// You may need to build the project (run Qt uic code generator) to get "ui_StudentWindow.h" resolved

#include "../include/studentwindow.h"
#include "ui_StudentWindow.h"


StudentWindow::StudentWindow(const QString &username, QWidget *parent) : QMainWindow(parent),
                                                                         ui(new Ui::StudentWindow),
                                                                         username((username)) {
    ui->setupUi(this);
    setModel();
    qDebug() << "StudentWindow: setModel finished";
}

StudentWindow::~StudentWindow() {
    delete ui;
}


void StudentWindow::setModel() {
    qDebug() << "enter setModel";
    QSqlDatabase stuDB = DBManager::instance().database();
    // qDebug() << "Database connection name:" << stuDB.connectionName();
    // qDebug() << "Database driver:" << stuDB.driverName();
    // qDebug() << "Database is open:" << stuDB.isOpen();
    // qDebug() << "Database tables:" << stuDB.tables();

    // 确保数据库连接有效
    if (!stuDB.isOpen()) {
        qDebug() << "Database is not open";
        return;
    }
    model = new QSqlQueryModel;
    QString queryString = QString("CALL GetStudentCourseInfo('%1');").arg(username);
    qDebug() << "QueryString:" << queryString;
    model->setQuery(queryString, DBManager::instance().database());

    if (model->lastError().isValid()) {
        qDebug() << "Model error:" << model->lastError();
    } else {
        ui->tableViewSC->setModel(model); // 设置模型
        ui->tableViewSC->resizeColumnsToContents(); // 调整列宽
    }

    ui->LabelID->setText(username);
    queryString = QString("SELECT GetStudentName('%1') AS studentName;").arg(username);
    QSqlQuery nameQuery;
    bool success = nameQuery.exec(queryString);
    QString name;

    if (success && nameQuery.next()) {
        name = nameQuery.value(0).toString();
    } else {
        qDebug() << "查询失败:" << nameQuery.lastError();
    }


    qDebug() << "name = " << name;

    qDebug() << "name = " << name;
    ui->LabelName->setText("你好！" + name + "同学");
    qDebug() << "setModel completed";
}


void StudentWindow::on_ButtonReturn_clicked() {
    emit return_to_LoginWindow();
}

void StudentWindow::closeEvent(QCloseEvent *event) {
    emit return_to_LoginWindow();
}

void StudentWindow::on_ButtonStudentInfo_clicked() {
    if (!studentInfo) {
        studentInfo = new StudentInformation(username);
        connect(studentInfo, &StudentInformation::return_to_StudentWindow, this,
                &StudentWindow::on_return_to_StudentWindow);
    }
    this->hide();
    studentInfo->show();
}

void StudentWindow::on_return_to_StudentWindow() {
    if (studentInfo)
        studentInfo->hide();
    this->show();
}


void StudentWindow::on_ButtonSelect_clicked() {
    if (!studentCourseSelect) {
        studentCourseSelect = new StudentCourseSelect(username);
        connect(studentCourseSelect, &StudentCourseSelect::return_to_StudentWindow, this,
                &StudentWindow::on_return_to_StudentWindow);
    }
    this->hide();
    studentCourseSelect->show();
}

void StudentWindow::on_tableViewSC_doubleClicked(const QModelIndex &index) {
    // 显示点击的一行的数据
    int row = index.row();
    QString courseID = model->data(model->index(row, 0)).toString();
    QString courseName = model->data(model->index(row, 1)).toString();
    QString courseTeacher = model->data(model->index(row, 2)).toString();
    QString courseCredit = model->data(model->index(row, 3)).toString();
    QString courseSelected = model->data(model->index(row, 4)).toString();
    QString courseGrade = model->data(model->index(row, 5)).toString();
    //用qdebug打印
    qDebug() << "课程编号 = " << courseID;
    qDebug() << "课程名称 = " << courseName;
    qDebug() << "授课老师 = " << courseTeacher;
    qDebug() << "课程学分 = " << courseCredit;
    qDebug() << "选课人数 = " << courseSelected;
    qDebug() << "成  绩  = " << courseGrade;
    //将数据显示在label上
}

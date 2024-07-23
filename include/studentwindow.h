//
// Created by Yjy09 on 2024/7/10.
//

#ifndef STUDENTWINDOW_H
#define STUDENTWINDOW_H

#include <QMainWindow>
#include "dbmanager.h"
#include "studentinformation.h"
#include "studentcourseselect.h"

QT_BEGIN_NAMESPACE

namespace Ui {
    class StudentWindow;
}

QT_END_NAMESPACE

class StudentWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit StudentWindow(const QString &username, QWidget *parent = nullptr);

    ~StudentWindow() override;

signals:
    void return_to_LoginWindow();

protected:
    void closeEvent(QCloseEvent *event) override;

private slots:
    void on_ButtonReturn_clicked();

    void on_ButtonStudentInfo_clicked();

    void on_return_to_StudentWindow();

    void on_ButtonSelect_clicked();

    //添加一个槽函数，用于处理点击tableview的事件
    // void on_tableViewSC_clicked(const QModelIndex &index);
    //添加一个槽函数，用于处理双击tableview的事件
    void on_tableViewSC_doubleClicked(const QModelIndex &index);

private:
    QString username;
    Ui::StudentWindow *ui;
    QSqlQueryModel *model;
    StudentInformation *studentInfo{};
    StudentCourseSelect *studentCourseSelect{};

    void setModel();
};


#endif //STUDENTWINDOW_H

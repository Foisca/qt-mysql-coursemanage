//
// Created by Yjy09 on 2024/7/15.
//

#ifndef TEACHERADDNEWCOURSE_H
#define TEACHERADDNEWCOURSE_H

#include <QWidget>
#include "dbmanager.h"
#include "teacheraddnewcourseinfo.h"

QT_BEGIN_NAMESPACE

namespace Ui {
    class TeacherAddNewCourse;
}

QT_END_NAMESPACE

class TeacherAddNewCourse : public QWidget {
    Q_OBJECT

public:
    explicit TeacherAddNewCourse(const QString &username, QWidget *parent = nullptr);

    ~TeacherAddNewCourse() override;


signals:
    void return_to_TeacherWindow();

protected:
    void closeEvent(QCloseEvent *event) override;

private slots:
    void on_ButtonReturn_clicked();

    // 双击tableview的时候，会触发这个函数
    void on_tableViewAC_doubleClicked(const QModelIndex &index);

    void on_return_to_TeacherAddNewCourseWindow();

private:
    Ui::TeacherAddNewCourse *ui;
    QString teacherID;
    QSqlQueryModel *model{};
    TeacherAddNewCourseInfo *infoWindow{};

    void setModel();
};


#endif //TEACHERADDNEWCOURSE_H

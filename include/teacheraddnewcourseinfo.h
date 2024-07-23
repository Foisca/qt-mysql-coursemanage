//
// Created by Yjy09 on 2024/7/17.
//

#ifndef TEACHERADDNEWCOURSEINFO_H
#define TEACHERADDNEWCOURSEINFO_H

#include <QWidget>
#include "dbmanager.h"

QT_BEGIN_NAMESPACE

namespace Ui {
    class TeacherAddNewCourseInfo;
}

QT_END_NAMESPACE

class TeacherAddNewCourseInfo : public QWidget {
    Q_OBJECT

public:
    explicit TeacherAddNewCourseInfo(const QString &username, const QString &courseID, QWidget *parent = nullptr);

    ~TeacherAddNewCourseInfo() override;

private slots:
    void on_ButtonOK_clicked();

    void on_ButtonReturn_clicked();

protected:
    void closeEvent(QCloseEvent *event) override;

signals:
    void return_to_TeacherAddNewCourse();

private:
    Ui::TeacherAddNewCourseInfo *ui;
    QString teacherID, courseBaseID;
};


#endif //TEACHERADDNEWCOURSEINFO_H

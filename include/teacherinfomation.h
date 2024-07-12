//
// Created by Yjy09 on 2024/7/11.
//

#ifndef TEACHERINFOMATION_H
#define TEACHERINFOMATION_H

#include <QWidget>
#include "dbmanager.h"
#include <QMessageBox>

QT_BEGIN_NAMESPACE

namespace Ui {
    class TeacherInfomation;
}

QT_END_NAMESPACE

class TeacherInfomation : public QWidget {
    Q_OBJECT

public:
    explicit TeacherInfomation(const QString &username, QWidget *parent = nullptr);

    ~TeacherInfomation() override;

signals:
    void return_to_TeacherWindow();

protected:
    void closeEvent(QCloseEvent *event) override;

private slots:
    void on_ButtonOK_clicked();

    void on_ButtonCancel_clicked();

private:
    Ui::TeacherInfomation *ui;
    QString teacherID;
};


#endif //TEACHERINFOMATION_H

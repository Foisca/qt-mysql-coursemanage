//
// Created by Yjy09 on 2024/7/10.
//

#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QWidget>
#include <ui_TeacherWindow.h>
#include "studentwindow.h"
#include "teacherwindow.h"
#include "registerwindow.h"
#include "utils.h"
#include "dbmanager.h"

QT_BEGIN_NAMESPACE

namespace Ui {
    class LoginWindow;
}

QT_END_NAMESPACE

class LoginWindow : public QWidget {
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);

    ~LoginWindow() override;

private slots:
    void on_ButtonLogin_clicked();

    void on_ButtonRegister_clicked();

    void on_ButtonForget_clicked();

    void on_return_to_LoginWindow();

private:
    Ui::LoginWindow *ui;

    StudentWindow *studentWindow;

    TeacherWindow *teacherWindow;

    RegisterWindow *registerWindow{};
};


#endif //LOGINWINDOW_H

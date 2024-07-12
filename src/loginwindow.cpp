//
// Created by Yjy09 on 2024/7/10.
//

// You may need to build the project (run Qt uic code generator) to get "ui_LoginWindow.h" resolved

#include "../include/loginwindow.h"
#include "ui_LoginWindow.h"


LoginWindow::LoginWindow(QWidget *parent) : QWidget(parent), ui(new Ui::LoginWindow) {
    ui->setupUi(this);

    ui->ButtonLogin->setShortcut(Qt::Key_Return);
    this->setWindowIcon(QIcon(":res/icon.ico"));
}

LoginWindow::~LoginWindow() {
    delete ui;
    delete sw;
    DBManager::instance().database().close();
}

void LoginWindow::on_ButtonLogin_clicked() {
    qDebug() << "LoginWindow: Login Try";
    // 3. 数据库的查询操作
    QSqlQuery query(DBManager::instance().database());
    query.exec("select * from user;");
    bool isOK = false;

    while (query.next()) {
        QString username = query.value(0).toString();
        QString password = query.value(1).toString();
        if (ui->LineEditUsername->text() == username && ui->LineEditPassword->text() == password) {
            qDebug() << "Username:" << query.value(0);
            qDebug() << "Password:" << query.value((1));
            qDebug() << "LoginWindow:Login Success!!";
            isOK = true;
            break;
        }
    }

    if (isOK) {
        // if (sw) {
        //     delete sw; // 清除旧的窗口实例
        // }
        int userType = query.value(2).toInt();
        qDebug() << QString("userType = %1").arg(userType);
        switch (userType) {
            case 1: {
                if (!sw) {
                    sw = new StudentWindow(ui->LineEditUsername->text());
                    connect(sw, &StudentWindow::return_to_LoginWindow, this, &LoginWindow::on_return_to_LoginWindow);
                }
                this->hide();
                sw->show();

                break;
            }
            case 2: {
                if (!tw) {
                    tw = new TeacherWindow(ui->LineEditUsername->text());
                    connect(tw, &TeacherWindow::return_to_LoginWindow, this, &LoginWindow::on_return_to_LoginWindow);
                }
                this->hide();
                tw->show();
            }
            case 3: {
                break;
            }
            default: {
                qDebug() << "userType Error";
            }
        }
    } else {
        qDebug() << "LoginWindow: Login Failed, username or password not found";
    }
}

void LoginWindow::on_ButtonRegister_clicked() {
    qDebug() << "LoginWindow: Register Try";
    if (!rw) {
        rw = new RegisterWindow();
        connect(rw, &RegisterWindow::return_to_LoginWindow, this, &LoginWindow::on_return_to_LoginWindow);
    }
    this->hide();
    rw->show();
}

void LoginWindow::on_ButtonForget_clicked() {
    qDebug() << "LoginWindow: Forget Try";
}

void LoginWindow::on_return_to_LoginWindow() {
    this->show();
    if (rw)
        rw->hide();
    if (tw)
        tw->hide();
    if (sw)
        sw->hide();
}

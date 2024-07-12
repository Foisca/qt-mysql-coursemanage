//
// Created by Yjy09 on 2024/7/11.
//

#ifndef REGISTERWINDOW_H
#define REGISTERWINDOW_H

#include <QWidget>
#include "dbmanager.h"
#include "registerstudent.h"
QT_BEGIN_NAMESPACE

namespace Ui {
    class RegisterWindow;
}

QT_END_NAMESPACE

class RegisterWindow : public QWidget {
    Q_OBJECT

public:
    explicit RegisterWindow(QWidget *parent = nullptr);

    ~RegisterWindow() override;

signals:
    void return_to_LoginWindow();

protected:
    void closeEvent(QCloseEvent *event) override;

private slots:
    void on_ButtonStudent_clicked();

    void on_ButtonTeacher_clicked();

    void on_ButtonCancel_clicked();

    void on_return_to_RegisterWindow();

private:
    Ui::RegisterWindow *ui;
    RegisterStudent *rs{};
};


#endif //REGISTERWINDOW_H

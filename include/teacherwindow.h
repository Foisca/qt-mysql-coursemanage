//
// Created by Yjy09 on 2024/7/10.
//

#ifndef TEACHERWINDOW_H
#define TEACHERWINDOW_H

#include <QWidget>
#include "dbmanager.h"
#include "teacherinfomation.h"
#include <QStandardItem>
QT_BEGIN_NAMESPACE

namespace Ui {
    class TeacherWindow;
}

QT_END_NAMESPACE

class TeacherWindow : public QWidget {
    Q_OBJECT

public:
    explicit TeacherWindow(QString username, QWidget *parent = nullptr);

    ~TeacherWindow() override;

signals:
    void return_to_LoginWindow();

protected:
    void closeEvent(QCloseEvent *event) override;

private slots:
    void on_tableViewTC_clicked(const QModelIndex &index);

    void on_ButtonReturn_clicked();

    void on_ButtonInfo_clicked();

    void on_return_to_TeacherWindow();

private:
    Ui::TeacherWindow *ui;
    QString username;
    QSqlQueryModel *model{};
    TeacherInfomation *teacherInfo{};

    void setModel();
};


#endif //TEACHERWINDOW_H

//
// Created by Yjy09 on 2024/7/11.
//

#ifndef REGISTERSTUDENT_H
#define REGISTERSTUDENT_H

#include <QWidget>
#include "dbmanager.h"
#include <QMessageBox>

QT_BEGIN_NAMESPACE

namespace Ui {
    class RegisterStudent;
}

QT_END_NAMESPACE

class RegisterStudent : public QWidget {
    Q_OBJECT

public:
    explicit RegisterStudent(const QString &username, QWidget *parent = nullptr);

    ~RegisterStudent() override;

protected:
    void closeEvent(QCloseEvent *event) override;

signals:
    void return_to_RegisterWindow();

private slots:
    void on_ButtonOK_clicked();

    void on_ButtonCancel_clicked();

    void insertData(const QMap<QString, QString> &data);

    bool checkData(const QMap<QString, QString> &data);

private:
    Ui::RegisterStudent *ui;
    QString studentID;
    QMap<QString, QString> data;
};


#endif //REGISTERSTUDENT_H

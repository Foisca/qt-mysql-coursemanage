//
// Created by Yjy09 on 2024/7/11.
//

#ifndef STUDENTINFORMATION_H
#define STUDENTINFORMATION_H

#include <QWidget>
#include "dbmanager.h"
#include <QMessageBox>

QT_BEGIN_NAMESPACE

namespace Ui {
    class StudentInformation;
}

QT_END_NAMESPACE

class StudentInformation : public QWidget {
    Q_OBJECT

public:
    explicit StudentInformation(const QString &username, QWidget *parent = nullptr);

    ~StudentInformation() override;

protected:
    void closeEvent(QCloseEvent *event) override;

signals:
    void return_to_StudentWindow();

private slots:
    void on_ButtonOK_clicked();

    void on_ButtonCancel_clicked();

private:
    Ui::StudentInformation *ui;
    QString studentID;
};


#endif //STUDENTINFORMATION_H

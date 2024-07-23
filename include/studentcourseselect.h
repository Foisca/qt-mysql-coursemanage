//
// Created by Yjy09 on 2024/7/16.
//

#ifndef STUDENTCOURSESELECT_H
#define STUDENTCOURSESELECT_H

#include <QWidget>
#include "dbmanager.h"

QT_BEGIN_NAMESPACE

namespace Ui {
    class StudentCourseSelect;
}

QT_END_NAMESPACE

class StudentCourseSelect : public QWidget {
    Q_OBJECT

public:
    explicit StudentCourseSelect(const QString &username, QWidget *parent = nullptr);

    ~StudentCourseSelect() override;

signals:
    void return_to_StudentWindow();

protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::StudentCourseSelect *ui;
    QString studentID;
    QSqlQueryModel *model{};

    void setModel();
};


#endif //STUDENTCOURSESELECT_H

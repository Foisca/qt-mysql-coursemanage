/********************************************************************************
** Form generated from reading UI file 'studentcourseselect.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTCOURSESELECT_H
#define UI_STUDENTCOURSESELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentCourseSelect
{
public:
    QTableView *tableViewSCA;
    QPushButton *ButtonSelect;
    QPushButton *ButtonReturn;

    void setupUi(QWidget *StudentCourseSelect)
    {
        if (StudentCourseSelect->objectName().isEmpty())
            StudentCourseSelect->setObjectName("StudentCourseSelect");
        StudentCourseSelect->resize(768, 500);
        tableViewSCA = new QTableView(StudentCourseSelect);
        tableViewSCA->setObjectName("tableViewSCA");
        tableViewSCA->setGeometry(QRect(120, 20, 611, 441));
        ButtonSelect = new QPushButton(StudentCourseSelect);
        ButtonSelect->setObjectName("ButtonSelect");
        ButtonSelect->setGeometry(QRect(20, 70, 81, 41));
        ButtonReturn = new QPushButton(StudentCourseSelect);
        ButtonReturn->setObjectName("ButtonReturn");
        ButtonReturn->setGeometry(QRect(20, 130, 81, 41));

        retranslateUi(StudentCourseSelect);

        QMetaObject::connectSlotsByName(StudentCourseSelect);
    } // setupUi

    void retranslateUi(QWidget *StudentCourseSelect)
    {
        StudentCourseSelect->setWindowTitle(QCoreApplication::translate("StudentCourseSelect", "StudentCourseSelect", nullptr));
        ButtonSelect->setText(QCoreApplication::translate("StudentCourseSelect", "\351\200\211\350\257\276", nullptr));
        ButtonReturn->setText(QCoreApplication::translate("StudentCourseSelect", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentCourseSelect: public Ui_StudentCourseSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTCOURSESELECT_H

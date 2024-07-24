/********************************************************************************
** Form generated from reading UI file 'teacheraddnewcourse.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERADDNEWCOURSE_H
#define UI_TEACHERADDNEWCOURSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeacherAddNewCourse
{
public:
    QTableView *tableViewAC;
    QPushButton *ButtonOK;
    QPushButton *ButtonReturn;

    void setupUi(QWidget *TeacherAddNewCourse)
    {
        if (TeacherAddNewCourse->objectName().isEmpty())
            TeacherAddNewCourse->setObjectName("TeacherAddNewCourse");
        TeacherAddNewCourse->resize(551, 338);
        tableViewAC = new QTableView(TeacherAddNewCourse);
        tableViewAC->setObjectName("tableViewAC");
        tableViewAC->setGeometry(QRect(10, 30, 411, 271));
        ButtonOK = new QPushButton(TeacherAddNewCourse);
        ButtonOK->setObjectName("ButtonOK");
        ButtonOK->setGeometry(QRect(440, 100, 81, 41));
        ButtonReturn = new QPushButton(TeacherAddNewCourse);
        ButtonReturn->setObjectName("ButtonReturn");
        ButtonReturn->setGeometry(QRect(440, 170, 81, 41));

        retranslateUi(TeacherAddNewCourse);

        QMetaObject::connectSlotsByName(TeacherAddNewCourse);
    } // setupUi

    void retranslateUi(QWidget *TeacherAddNewCourse)
    {
        TeacherAddNewCourse->setWindowTitle(QCoreApplication::translate("TeacherAddNewCourse", "TeacherAddNewCourse", nullptr));
        ButtonOK->setText(QCoreApplication::translate("TeacherAddNewCourse", "\346\216\210\350\257\276", nullptr));
        ButtonReturn->setText(QCoreApplication::translate("TeacherAddNewCourse", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeacherAddNewCourse: public Ui_TeacherAddNewCourse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERADDNEWCOURSE_H

/********************************************************************************
** Form generated from reading UI file 'studentwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTWINDOW_H
#define UI_STUDENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentWindow
{
public:
    QWidget *centralwidget;
    QTableView *tableViewSC;
    QPushButton *ButtonSelect;
    QPushButton *ButtonQuery;
    QLabel *LabelName;
    QLabel *LabelID;
    QPushButton *ButtonReturn;
    QPushButton *ButtonStudentInfo;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *StudentWindow)
    {
        if (StudentWindow->objectName().isEmpty())
            StudentWindow->setObjectName("StudentWindow");
        StudentWindow->resize(594, 675);
        centralwidget = new QWidget(StudentWindow);
        centralwidget->setObjectName("centralwidget");
        tableViewSC = new QTableView(centralwidget);
        tableViewSC->setObjectName("tableViewSC");
        tableViewSC->setGeometry(QRect(130, 50, 451, 581));
        ButtonSelect = new QPushButton(centralwidget);
        ButtonSelect->setObjectName("ButtonSelect");
        ButtonSelect->setGeometry(QRect(10, 160, 91, 41));
        ButtonQuery = new QPushButton(centralwidget);
        ButtonQuery->setObjectName("ButtonQuery");
        ButtonQuery->setGeometry(QRect(10, 110, 91, 41));
        LabelName = new QLabel(centralwidget);
        LabelName->setObjectName("LabelName");
        LabelName->setGeometry(QRect(20, 10, 201, 31));
        LabelID = new QLabel(centralwidget);
        LabelID->setObjectName("LabelID");
        LabelID->setGeometry(QRect(240, 10, 201, 31));
        ButtonReturn = new QPushButton(centralwidget);
        ButtonReturn->setObjectName("ButtonReturn");
        ButtonReturn->setGeometry(QRect(10, 210, 91, 41));
        ButtonStudentInfo = new QPushButton(centralwidget);
        ButtonStudentInfo->setObjectName("ButtonStudentInfo");
        ButtonStudentInfo->setGeometry(QRect(10, 60, 91, 41));
        StudentWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(StudentWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 594, 22));
        StudentWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(StudentWindow);
        statusbar->setObjectName("statusbar");
        StudentWindow->setStatusBar(statusbar);

        retranslateUi(StudentWindow);

        QMetaObject::connectSlotsByName(StudentWindow);
    } // setupUi

    void retranslateUi(QMainWindow *StudentWindow)
    {
        StudentWindow->setWindowTitle(QCoreApplication::translate("StudentWindow", "\351\200\211\350\257\276\344\277\241\346\201\257", nullptr));
        ButtonSelect->setText(QCoreApplication::translate("StudentWindow", "\351\200\211\350\257\276", nullptr));
        ButtonQuery->setText(QCoreApplication::translate("StudentWindow", "\346\237\245\350\257\242\350\257\276\347\250\213\344\277\241\346\201\257", nullptr));
        LabelName->setText(QCoreApplication::translate("StudentWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700;\">\345\220\214\345\255\246\344\275\240\345\245\275\357\274\201</span></p></body></html>", nullptr));
        LabelID->setText(QCoreApplication::translate("StudentWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">\345\255\246\345\217\267</span></p></body></html>", nullptr));
        ButtonReturn->setText(QCoreApplication::translate("StudentWindow", "\350\277\224\345\233\236\347\231\273\351\231\206\347\225\214\351\235\242", nullptr));
        ButtonStudentInfo->setText(QCoreApplication::translate("StudentWindow", "\344\270\252\344\272\272\350\265\204\346\226\231", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentWindow: public Ui_StudentWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTWINDOW_H

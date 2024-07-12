/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *LabelTeacher;
    QLabel *LabelStudent;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *ButtonStudent;
    QPushButton *ButtonTeacher;
    QPushButton *ButtonCancel;

    void setupUi(QWidget *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName("RegisterWindow");
        RegisterWindow->resize(400, 300);
        widget = new QWidget(RegisterWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(60, 40, 271, 130));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(130, 30));
        label->setMaximumSize(QSize(130, 30));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(130, 30));
        label_2->setMaximumSize(QSize(130, 30));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        LabelTeacher = new QLabel(widget);
        LabelTeacher->setObjectName("LabelTeacher");
        LabelTeacher->setMinimumSize(QSize(130, 30));
        LabelTeacher->setMaximumSize(QSize(130, 30));
        QFont font;
        font.setPointSize(12);
        LabelTeacher->setFont(font);

        gridLayout->addWidget(LabelTeacher, 1, 1, 1, 1);

        LabelStudent = new QLabel(widget);
        LabelStudent->setObjectName("LabelStudent");
        LabelStudent->setMinimumSize(QSize(130, 30));
        LabelStudent->setMaximumSize(QSize(130, 30));
        LabelStudent->setFont(font);

        gridLayout->addWidget(LabelStudent, 0, 1, 1, 1);

        widget1 = new QWidget(RegisterWindow);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(70, 200, 261, 61));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ButtonStudent = new QPushButton(widget1);
        ButtonStudent->setObjectName("ButtonStudent");
        ButtonStudent->setMinimumSize(QSize(80, 30));
        ButtonStudent->setMaximumSize(QSize(80, 30));

        horizontalLayout->addWidget(ButtonStudent);

        ButtonTeacher = new QPushButton(widget1);
        ButtonTeacher->setObjectName("ButtonTeacher");
        ButtonTeacher->setMinimumSize(QSize(80, 30));
        ButtonTeacher->setMaximumSize(QSize(80, 30));

        horizontalLayout->addWidget(ButtonTeacher);

        ButtonCancel = new QPushButton(widget1);
        ButtonCancel->setObjectName("ButtonCancel");
        ButtonCancel->setMinimumSize(QSize(80, 30));
        ButtonCancel->setMaximumSize(QSize(80, 30));

        horizontalLayout->addWidget(ButtonCancel);


        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QWidget *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QCoreApplication::translate("RegisterWindow", "\347\224\250\346\210\267\346\263\250\345\206\214", nullptr));
        label->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\275\223\345\211\215\345\217\257\347\224\250\345\255\246\347\224\237ID\357\274\232</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\275\223\345\211\215\345\217\257\347\224\250\346\225\231\345\270\210ID\357\274\232</span></p></body></html>", nullptr));
        LabelTeacher->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\346\225\231\345\270\210ID</span></p></body></html>", nullptr));
        LabelStudent->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\255\246\347\224\237ID</span></p></body></html>", nullptr));
        ButtonStudent->setText(QCoreApplication::translate("RegisterWindow", "\345\255\246\347\224\237ID\346\263\250\345\206\214", nullptr));
        ButtonTeacher->setText(QCoreApplication::translate("RegisterWindow", "\346\225\231\345\270\210ID\346\263\250\345\206\214", nullptr));
        ButtonCancel->setText(QCoreApplication::translate("RegisterWindow", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H

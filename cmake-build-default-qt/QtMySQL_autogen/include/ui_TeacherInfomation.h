/********************************************************************************
** Form generated from reading UI file 'teacherinfomation.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERINFOMATION_H
#define UI_TEACHERINFOMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeacherInfomation
{
public:
    QPushButton *ButtonOK;
    QPushButton *ButtonCancel;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *labelID;
    QLabel *label_3;
    QLineEdit *lineEdiName;
    QLabel *label_4;
    QLineEdit *lineEditGender;
    QLabel *label_5;
    QLineEdit *lineEditDepartment;
    QLabel *label_6;
    QLineEdit *lineEditTitle;
    QLabel *label_7;
    QLineEdit *lineEditPhone;
    QLabel *label_8;
    QLineEdit *lineEditPassword;

    void setupUi(QWidget *TeacherInfomation)
    {
        if (TeacherInfomation->objectName().isEmpty())
            TeacherInfomation->setObjectName("TeacherInfomation");
        TeacherInfomation->resize(379, 426);
        ButtonOK = new QPushButton(TeacherInfomation);
        ButtonOK->setObjectName("ButtonOK");
        ButtonOK->setGeometry(QRect(70, 320, 91, 31));
        ButtonCancel = new QPushButton(TeacherInfomation);
        ButtonCancel->setObjectName("ButtonCancel");
        ButtonCancel->setGeometry(QRect(210, 320, 91, 31));
        widget = new QWidget(TeacherInfomation);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 30, 278, 248));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(120, 30));
        label_2->setMaximumSize(QSize(120, 30));
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        labelID = new QLabel(widget);
        labelID->setObjectName("labelID");
        labelID->setMinimumSize(QSize(150, 30));
        labelID->setMaximumSize(QSize(150, 30));
        labelID->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, labelID);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(120, 30));
        label_3->setMaximumSize(QSize(120, 30));
        label_3->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        lineEdiName = new QLineEdit(widget);
        lineEdiName->setObjectName("lineEdiName");
        lineEdiName->setMinimumSize(QSize(150, 30));
        lineEdiName->setMaximumSize(QSize(150, 30));
        lineEdiName->setFont(font);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdiName);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(120, 30));
        label_4->setMaximumSize(QSize(120, 30));
        label_4->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        lineEditGender = new QLineEdit(widget);
        lineEditGender->setObjectName("lineEditGender");
        lineEditGender->setMinimumSize(QSize(150, 30));
        lineEditGender->setMaximumSize(QSize(150, 30));
        lineEditGender->setFont(font);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditGender);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(120, 30));
        label_5->setMaximumSize(QSize(120, 30));
        label_5->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        lineEditDepartment = new QLineEdit(widget);
        lineEditDepartment->setObjectName("lineEditDepartment");
        lineEditDepartment->setMinimumSize(QSize(150, 30));
        lineEditDepartment->setMaximumSize(QSize(150, 30));
        lineEditDepartment->setFont(font);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEditDepartment);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(120, 30));
        label_6->setMaximumSize(QSize(120, 30));
        label_6->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        lineEditTitle = new QLineEdit(widget);
        lineEditTitle->setObjectName("lineEditTitle");
        lineEditTitle->setMinimumSize(QSize(150, 30));
        lineEditTitle->setMaximumSize(QSize(150, 30));
        lineEditTitle->setFont(font);

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEditTitle);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(120, 30));
        label_7->setMaximumSize(QSize(120, 30));
        label_7->setFont(font);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        lineEditPhone = new QLineEdit(widget);
        lineEditPhone->setObjectName("lineEditPhone");
        lineEditPhone->setMinimumSize(QSize(150, 30));
        lineEditPhone->setMaximumSize(QSize(150, 30));
        lineEditPhone->setFont(font);

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEditPhone);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(120, 30));
        label_8->setMaximumSize(QSize(120, 30));
        label_8->setFont(font);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_8);

        lineEditPassword = new QLineEdit(widget);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setMinimumSize(QSize(150, 30));
        lineEditPassword->setMaximumSize(QSize(150, 30));
        lineEditPassword->setFont(font);

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEditPassword);


        retranslateUi(TeacherInfomation);

        QMetaObject::connectSlotsByName(TeacherInfomation);
    } // setupUi

    void retranslateUi(QWidget *TeacherInfomation)
    {
        TeacherInfomation->setWindowTitle(QCoreApplication::translate("TeacherInfomation", "TeacherInfomation", nullptr));
        ButtonOK->setText(QCoreApplication::translate("TeacherInfomation", "\347\241\256\350\256\244", nullptr));
        ButtonCancel->setText(QCoreApplication::translate("TeacherInfomation", "\350\277\224\345\233\236", nullptr));
        label_2->setText(QCoreApplication::translate("TeacherInfomation", "<html><head/><body><p align=\"center\">\346\225\231\345\270\210\347\224\250\346\210\267\345\220\215\357\274\232</p></body></html>", nullptr));
        labelID->setText(QCoreApplication::translate("TeacherInfomation", "<html><head/><body><p align=\"center\">\346\225\231\345\270\210\347\274\226\345\217\267</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("TeacherInfomation", "<html><head/><body><p align=\"center\">\345\247\223\345\220\215\357\274\232</p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("TeacherInfomation", "<html><head/><body><p align=\"center\">\346\200\247\345\210\253\357\274\232</p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("TeacherInfomation", "<html><head/><body><p align=\"center\">\346\211\200\345\234\250\345\255\246\351\231\242\357\274\232</p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("TeacherInfomation", "<html><head/><body><p align=\"center\">\350\201\214\347\247\260\357\274\232</p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("TeacherInfomation", "<html><head/><body><p align=\"center\">\347\224\265\350\257\235\357\274\232</p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("TeacherInfomation", "<html><head/><body><p align=\"center\">\347\231\273\351\231\206\345\257\206\347\240\201\357\274\232</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeacherInfomation: public Ui_TeacherInfomation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERINFOMATION_H

/********************************************************************************
** Form generated from reading UI file 'studentinformation.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTINFORMATION_H
#define UI_STUDENTINFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentInformation
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
    QLabel *label_9;
    QLineEdit *lineEditClass;
    QLabel *label_10;
    QLineEdit *lineEditMajor;
    QLabel *label_5;
    QLineEdit *lineEditDepartment;
    QLabel *label_6;
    QDateEdit *dateEditBirth;
    QLabel *label_7;
    QLineEdit *lineEditResidence;
    QLabel *label_8;
    QLineEdit *lineEditPassword;

    void setupUi(QWidget *StudentInformation)
    {
        if (StudentInformation->objectName().isEmpty())
            StudentInformation->setObjectName("StudentInformation");
        StudentInformation->resize(365, 450);
        ButtonOK = new QPushButton(StudentInformation);
        ButtonOK->setObjectName("ButtonOK");
        ButtonOK->setGeometry(QRect(70, 370, 81, 41));
        ButtonCancel = new QPushButton(StudentInformation);
        ButtonCancel->setObjectName("ButtonCancel");
        ButtonCancel->setGeometry(QRect(190, 370, 81, 41));
        widget = new QWidget(StudentInformation);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 21, 278, 320));
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

        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");
        label_9->setMinimumSize(QSize(120, 30));
        label_9->setMaximumSize(QSize(120, 30));
        label_9->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_9);

        lineEditClass = new QLineEdit(widget);
        lineEditClass->setObjectName("lineEditClass");
        lineEditClass->setMinimumSize(QSize(150, 30));
        lineEditClass->setMaximumSize(QSize(150, 30));
        lineEditClass->setFont(font);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEditClass);

        label_10 = new QLabel(widget);
        label_10->setObjectName("label_10");
        label_10->setMinimumSize(QSize(120, 30));
        label_10->setMaximumSize(QSize(120, 30));
        label_10->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_10);

        lineEditMajor = new QLineEdit(widget);
        lineEditMajor->setObjectName("lineEditMajor");
        lineEditMajor->setMinimumSize(QSize(150, 30));
        lineEditMajor->setMaximumSize(QSize(150, 30));
        lineEditMajor->setFont(font);

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEditMajor);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(120, 30));
        label_5->setMaximumSize(QSize(120, 30));
        label_5->setFont(font);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        lineEditDepartment = new QLineEdit(widget);
        lineEditDepartment->setObjectName("lineEditDepartment");
        lineEditDepartment->setMinimumSize(QSize(150, 30));
        lineEditDepartment->setMaximumSize(QSize(150, 30));
        lineEditDepartment->setFont(font);

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEditDepartment);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(120, 30));
        label_6->setMaximumSize(QSize(120, 30));
        label_6->setFont(font);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        dateEditBirth = new QDateEdit(widget);
        dateEditBirth->setObjectName("dateEditBirth");
        dateEditBirth->setMinimumSize(QSize(150, 30));
        dateEditBirth->setMaximumSize(QSize(150, 30));
        dateEditBirth->setFont(font);

        formLayout->setWidget(6, QFormLayout::FieldRole, dateEditBirth);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(120, 30));
        label_7->setMaximumSize(QSize(120, 30));
        label_7->setFont(font);

        formLayout->setWidget(7, QFormLayout::LabelRole, label_7);

        lineEditResidence = new QLineEdit(widget);
        lineEditResidence->setObjectName("lineEditResidence");
        lineEditResidence->setMinimumSize(QSize(150, 30));
        lineEditResidence->setMaximumSize(QSize(150, 30));
        lineEditResidence->setFont(font);

        formLayout->setWidget(7, QFormLayout::FieldRole, lineEditResidence);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(120, 30));
        label_8->setMaximumSize(QSize(120, 30));
        label_8->setFont(font);

        formLayout->setWidget(8, QFormLayout::LabelRole, label_8);

        lineEditPassword = new QLineEdit(widget);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setMinimumSize(QSize(150, 30));
        lineEditPassword->setMaximumSize(QSize(150, 30));
        lineEditPassword->setFont(font);

        formLayout->setWidget(8, QFormLayout::FieldRole, lineEditPassword);


        retranslateUi(StudentInformation);

        QMetaObject::connectSlotsByName(StudentInformation);
    } // setupUi

    void retranslateUi(QWidget *StudentInformation)
    {
        StudentInformation->setWindowTitle(QCoreApplication::translate("StudentInformation", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        ButtonOK->setText(QCoreApplication::translate("StudentInformation", "\347\241\256\345\256\232(&Enter)", nullptr));
        ButtonCancel->setText(QCoreApplication::translate("StudentInformation", "\350\277\224\345\233\236(&ESC)", nullptr));
        label_2->setText(QCoreApplication::translate("StudentInformation", "<html><head/><body><p align=\"center\">\345\255\246\347\224\237\347\224\250\346\210\267\345\220\215\357\274\232</p></body></html>", nullptr));
        labelID->setText(QCoreApplication::translate("StudentInformation", "<html><head/><body><p align=\"center\">\345\255\246\347\224\237\345\255\246\345\217\267</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("StudentInformation", "<html><head/><body><p align=\"center\">\345\247\223\345\220\215\357\274\232</p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("StudentInformation", "<html><head/><body><p align=\"center\">\346\200\247\345\210\253\357\274\232</p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("StudentInformation", "<html><head/><body><p align=\"center\">\347\217\255\347\272\247\357\274\232</p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("StudentInformation", "<html><head/><body><p align=\"center\">\344\270\223\344\270\232\357\274\232</p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("StudentInformation", "<html><head/><body><p align=\"center\">\346\211\200\345\234\250\345\255\246\351\231\242\357\274\232</p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("StudentInformation", "<html><head/><body><p align=\"center\">\347\224\237\346\227\245\357\274\232</p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("StudentInformation", "<html><head/><body><p align=\"center\">\347\261\215\350\264\257\357\274\232</p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("StudentInformation", "<html><head/><body><p align=\"center\">\347\231\273\351\231\206\345\257\206\347\240\201\357\274\232</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentInformation: public Ui_StudentInformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTINFORMATION_H

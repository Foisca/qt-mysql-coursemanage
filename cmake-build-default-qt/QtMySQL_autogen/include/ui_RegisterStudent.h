/********************************************************************************
** Form generated from reading UI file 'registerstudent.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERSTUDENT_H
#define UI_REGISTERSTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterStudent
{
public:
    QPushButton *ButtonOK;
    QPushButton *ButtonCancel;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_6;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_2;
    QLabel *LabelID;
    QLineEdit *lineEditName;
    QComboBox *comboBoxGender;
    QComboBox *comboBoxClass;
    QComboBox *comboBoxMajor;
    QLineEdit *lineEditDepartment;
    QDateEdit *dateEditBirth;
    QLineEdit *lineEditResidence;

    void setupUi(QWidget *RegisterStudent)
    {
        if (RegisterStudent->objectName().isEmpty())
            RegisterStudent->setObjectName("RegisterStudent");
        RegisterStudent->resize(403, 337);
        ButtonOK = new QPushButton(RegisterStudent);
        ButtonOK->setObjectName("ButtonOK");
        ButtonOK->setGeometry(QRect(80, 280, 91, 41));
        ButtonCancel = new QPushButton(RegisterStudent);
        ButtonCancel->setObjectName("ButtonCancel");
        ButtonCancel->setGeometry(QRect(200, 280, 91, 41));
        layoutWidget = new QWidget(RegisterStudent);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 10, 246, 258));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        verticalLayout->addWidget(label_8);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        verticalLayout->addWidget(label_7);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        LabelID = new QLabel(layoutWidget);
        LabelID->setObjectName("LabelID");
        LabelID->setFont(font);

        verticalLayout_2->addWidget(LabelID);

        lineEditName = new QLineEdit(layoutWidget);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setFont(font);

        verticalLayout_2->addWidget(lineEditName);

        comboBoxGender = new QComboBox(layoutWidget);
        comboBoxGender->addItem(QString());
        comboBoxGender->addItem(QString());
        comboBoxGender->setObjectName("comboBoxGender");
        comboBoxGender->setFont(font);

        verticalLayout_2->addWidget(comboBoxGender);

        comboBoxClass = new QComboBox(layoutWidget);
        comboBoxClass->addItem(QString());
        comboBoxClass->addItem(QString());
        comboBoxClass->addItem(QString());
        comboBoxClass->addItem(QString());
        comboBoxClass->setObjectName("comboBoxClass");
        comboBoxClass->setFont(font);

        verticalLayout_2->addWidget(comboBoxClass);

        comboBoxMajor = new QComboBox(layoutWidget);
        comboBoxMajor->addItem(QString());
        comboBoxMajor->addItem(QString());
        comboBoxMajor->addItem(QString());
        comboBoxMajor->addItem(QString());
        comboBoxMajor->setObjectName("comboBoxMajor");
        comboBoxMajor->setFont(font);

        verticalLayout_2->addWidget(comboBoxMajor);

        lineEditDepartment = new QLineEdit(layoutWidget);
        lineEditDepartment->setObjectName("lineEditDepartment");
        lineEditDepartment->setFont(font);

        verticalLayout_2->addWidget(lineEditDepartment);

        dateEditBirth = new QDateEdit(layoutWidget);
        dateEditBirth->setObjectName("dateEditBirth");
        dateEditBirth->setFont(font);

        verticalLayout_2->addWidget(dateEditBirth);

        lineEditResidence = new QLineEdit(layoutWidget);
        lineEditResidence->setObjectName("lineEditResidence");
        lineEditResidence->setFont(font);

        verticalLayout_2->addWidget(lineEditResidence);


        formLayout->setLayout(0, QFormLayout::FieldRole, verticalLayout_2);


        retranslateUi(RegisterStudent);

        QMetaObject::connectSlotsByName(RegisterStudent);
    } // setupUi

    void retranslateUi(QWidget *RegisterStudent)
    {
        RegisterStudent->setWindowTitle(QCoreApplication::translate("RegisterStudent", "\345\255\246\347\224\237\346\263\250\345\206\214", nullptr));
        ButtonOK->setText(QCoreApplication::translate("RegisterStudent", "\347\241\256\345\256\232", nullptr));
        ButtonCancel->setText(QCoreApplication::translate("RegisterStudent", "\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("RegisterStudent", "<html><head/><body><p align=\"center\">ID\357\274\232</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterStudent", "<html><head/><body><p align=\"center\">\345\247\223\345\220\215\357\274\232</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterStudent", "<html><head/><body><p align=\"center\">\346\200\247\345\210\253\357\274\232</p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterStudent", "<html><head/><body><p align=\"center\">\347\217\255\347\272\247\357\274\232</p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("RegisterStudent", "<html><head/><body><p align=\"center\">\344\270\223\344\270\232\357\274\232</p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("RegisterStudent", "<html><head/><body><p align=\"center\">\345\255\246\351\231\242\357\274\232</p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("RegisterStudent", "<html><head/><body><p align=\"center\">\347\224\237\346\227\245\357\274\232</p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("RegisterStudent", "<html><head/><body><p align=\"center\">\346\210\267\347\261\215\357\274\232</p></body></html>", nullptr));
        LabelID->setText(QCoreApplication::translate("RegisterStudent", "<html><head/><body><p align=\"center\">\345\255\246\345\217\267</p></body></html>", nullptr));
        comboBoxGender->setItemText(0, QCoreApplication::translate("RegisterStudent", "\347\224\267\357\274\210Male\357\274\211", nullptr));
        comboBoxGender->setItemText(1, QCoreApplication::translate("RegisterStudent", "\345\245\263\357\274\210Female\357\274\211", nullptr));

        comboBoxClass->setItemText(0, QCoreApplication::translate("RegisterStudent", "231", nullptr));
        comboBoxClass->setItemText(1, QCoreApplication::translate("RegisterStudent", "232", nullptr));
        comboBoxClass->setItemText(2, QCoreApplication::translate("RegisterStudent", "233", nullptr));
        comboBoxClass->setItemText(3, QCoreApplication::translate("RegisterStudent", "234", nullptr));

        comboBoxMajor->setItemText(0, QCoreApplication::translate("RegisterStudent", "\350\256\241\347\256\227\346\234\272\347\247\221\345\255\246\344\270\216\346\212\200\346\234\257", nullptr));
        comboBoxMajor->setItemText(1, QCoreApplication::translate("RegisterStudent", "\350\275\257\344\273\266\345\267\245\347\250\213", nullptr));
        comboBoxMajor->setItemText(2, QCoreApplication::translate("RegisterStudent", "\346\225\260\346\215\256\347\247\221\345\255\246\344\270\216\345\244\247\346\225\260\346\215\256\346\212\200\346\234\257", nullptr));
        comboBoxMajor->setItemText(3, QCoreApplication::translate("RegisterStudent", "\344\272\272\345\267\245\346\231\272\350\203\275", nullptr));

        lineEditDepartment->setText(QCoreApplication::translate("RegisterStudent", "\344\277\241\346\201\257\344\270\216\347\224\265\346\260\224\345\267\245\347\250\213\345\255\246\351\231\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterStudent: public Ui_RegisterStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERSTUDENT_H

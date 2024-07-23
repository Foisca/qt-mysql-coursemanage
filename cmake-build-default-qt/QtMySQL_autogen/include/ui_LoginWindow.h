/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *LineEditUsername;
    QLineEdit *LineEditPassword;
    QLabel *label;
    QSpacerItem *verticalSpacer_5;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *ButtonLogin;
    QSpacerItem *horizontalSpacer;
    QPushButton *ButtonRegister;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *ButtonForget;

    void setupUi(QWidget *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(400, 300);
        LoginWindow->setMinimumSize(QSize(400, 300));
        LoginWindow->setMaximumSize(QSize(400, 300));
        layoutWidget = new QWidget(LoginWindow);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 70, 241, 80));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 2, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 4, 0, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 2, 1, 1);

        LineEditUsername = new QLineEdit(layoutWidget);
        LineEditUsername->setObjectName("LineEditUsername");
        LineEditUsername->setMinimumSize(QSize(0, 24));
        LineEditUsername->setMaximumSize(QSize(16777215, 24));

        gridLayout->addWidget(LineEditUsername, 0, 2, 1, 1);

        LineEditPassword = new QLineEdit(layoutWidget);
        LineEditPassword->setObjectName("LineEditPassword");
        LineEditPassword->setMinimumSize(QSize(0, 24));
        LineEditPassword->setMaximumSize(QSize(16777215, 24));

        gridLayout->addWidget(LineEditPassword, 4, 2, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 3, 0, 1, 1);

        layoutWidget1 = new QWidget(LoginWindow);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(70, 170, 251, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ButtonLogin = new QPushButton(layoutWidget1);
        ButtonLogin->setObjectName("ButtonLogin");

        horizontalLayout->addWidget(ButtonLogin);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ButtonRegister = new QPushButton(layoutWidget1);
        ButtonRegister->setObjectName("ButtonRegister");

        horizontalLayout->addWidget(ButtonRegister);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        ButtonForget = new QPushButton(layoutWidget1);
        ButtonForget->setObjectName("ButtonForget");

        horizontalLayout->addWidget(ButtonForget);


        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QWidget *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "\347\231\273\351\231\206", nullptr));
        label_2->setText(QCoreApplication::translate("LoginWindow", "<html><head/><body><p align=\"justify\"><span style=\" font-size:12pt; font-weight:700;\">\345\257\206 \347\240\201</span></p></body></html>", nullptr));
        LineEditUsername->setText(QCoreApplication::translate("LoginWindow", "T001", nullptr));
        LineEditPassword->setText(QCoreApplication::translate("LoginWindow", "13800138000", nullptr));
        label->setText(QCoreApplication::translate("LoginWindow", "<html><head/><body><p align=\"right\"><span style=\" font-size:12pt; font-weight:700;\">\347\224\250\346\210\267\345\220\215</span></p></body></html>", nullptr));
        ButtonLogin->setText(QCoreApplication::translate("LoginWindow", "\347\231\273\351\231\206(&Enter)", nullptr));
        ButtonRegister->setText(QCoreApplication::translate("LoginWindow", "\346\263\250\345\206\214", nullptr));
        ButtonForget->setText(QCoreApplication::translate("LoginWindow", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H

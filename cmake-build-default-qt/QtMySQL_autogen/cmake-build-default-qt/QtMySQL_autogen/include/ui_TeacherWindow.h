/********************************************************************************
** Form generated from reading UI file 'teacherwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERWINDOW_H
#define UI_TEACHERWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeacherWindow
{
public:
    QTableView *tableViewTC;
    QLabel *LabelName;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *LabelName_2;
    QLabel *LabelCourseID;
    QLabel *LabelCourseID_2;
    QLabel *LabelCourseName;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButton_3;
    QPushButton *ButtonReturn;

    void setupUi(QWidget *TeacherWindow)
    {
        if (TeacherWindow->objectName().isEmpty())
            TeacherWindow->setObjectName("TeacherWindow");
        TeacherWindow->resize(948, 658);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::DocumentNew));
        TeacherWindow->setWindowIcon(icon);
        tableViewTC = new QTableView(TeacherWindow);
        tableViewTC->setObjectName("tableViewTC");
        tableViewTC->setGeometry(QRect(10, 50, 691, 571));
        LabelName = new QLabel(TeacherWindow);
        LabelName->setObjectName("LabelName");
        LabelName->setGeometry(QRect(710, 30, 161, 31));
        QFont font;
        font.setPointSize(14);
        LabelName->setFont(font);
        layoutWidget = new QWidget(TeacherWindow);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(60, 10, 628, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        LabelName_2 = new QLabel(layoutWidget);
        LabelName_2->setObjectName("LabelName_2");
        LabelName_2->setFont(font);

        horizontalLayout->addWidget(LabelName_2);

        LabelCourseID = new QLabel(layoutWidget);
        LabelCourseID->setObjectName("LabelCourseID");
        LabelCourseID->setFont(font);

        horizontalLayout->addWidget(LabelCourseID);

        LabelCourseID_2 = new QLabel(layoutWidget);
        LabelCourseID_2->setObjectName("LabelCourseID_2");
        LabelCourseID_2->setFont(font);

        horizontalLayout->addWidget(LabelCourseID_2);

        LabelCourseName = new QLabel(layoutWidget);
        LabelCourseName->setObjectName("LabelCourseName");
        LabelCourseName->setFont(font);

        horizontalLayout->addWidget(LabelCourseName);

        layoutWidget1 = new QWidget(TeacherWindow);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(720, 90, 132, 262));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(layoutWidget1);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(130, 40));
        pushButton_4->setMaximumSize(QSize(130, 40));

        verticalLayout->addWidget(pushButton_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(130, 40));
        pushButton->setMaximumSize(QSize(130, 40));

        verticalLayout->addWidget(pushButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(130, 40));
        pushButton_2->setMaximumSize(QSize(130, 40));

        verticalLayout->addWidget(pushButton_2);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(130, 40));
        pushButton_3->setMaximumSize(QSize(130, 40));

        verticalLayout->addWidget(pushButton_3);

        ButtonReturn = new QPushButton(layoutWidget1);
        ButtonReturn->setObjectName("ButtonReturn");
        ButtonReturn->setMinimumSize(QSize(130, 40));
        ButtonReturn->setMaximumSize(QSize(130, 40));

        verticalLayout->addWidget(ButtonReturn);


        retranslateUi(TeacherWindow);

        QMetaObject::connectSlotsByName(TeacherWindow);
    } // setupUi

    void retranslateUi(QWidget *TeacherWindow)
    {
        TeacherWindow->setWindowTitle(QCoreApplication::translate("TeacherWindow", "\346\225\231\345\270\210\350\257\276\347\250\213\344\277\241\346\201\257", nullptr));
        LabelName->setText(QCoreApplication::translate("TeacherWindow", "<html><head/><body><p align=\"center\">\350\200\201\345\270\210\345\247\223\345\220\215</p></body></html>", nullptr));
        LabelName_2->setText(QCoreApplication::translate("TeacherWindow", "\345\275\223\345\211\215\351\200\211\344\270\255\350\257\276\347\250\213\347\274\226\345\217\267\357\274\232", nullptr));
        LabelCourseID->setText(QCoreApplication::translate("TeacherWindow", "\350\257\276\347\250\213\347\274\226\345\217\267", nullptr));
        LabelCourseID_2->setText(QCoreApplication::translate("TeacherWindow", "\345\275\223\345\211\215\351\200\211\344\270\255\350\257\276\347\250\213\345\220\215\347\247\260\357\274\232", nullptr));
        LabelCourseName->setText(QCoreApplication::translate("TeacherWindow", "\350\257\276\347\250\213\345\220\215\347\247\260", nullptr));
        pushButton_4->setText(QCoreApplication::translate("TeacherWindow", "\346\237\245\347\234\213/\344\277\256\346\224\271\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        pushButton->setText(QCoreApplication::translate("TeacherWindow", "\346\237\245\347\234\213\350\257\276\347\250\213\350\257\246\347\273\206\344\277\241\346\201\257", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TeacherWindow", "\347\224\263\350\257\267\346\225\231\345\255\246\346\226\260\350\257\276\347\250\213", nullptr));
        pushButton_3->setText(QCoreApplication::translate("TeacherWindow", "\347\224\263\350\257\267\345\217\226\346\266\210\346\225\231\345\255\246", nullptr));
        ButtonReturn->setText(QCoreApplication::translate("TeacherWindow", "\350\277\224\345\233\236\347\231\273\351\231\206\347\225\214\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeacherWindow: public Ui_TeacherWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'teacheraddnewcourseinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERADDNEWCOURSEINFO_H
#define UI_TEACHERADDNEWCOURSEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeacherAddNewCourseInfo
{
public:
    QLabel *label_3;
    QPlainTextEdit *plainTextEditCourseTime;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *LabelCourseID;
    QLabel *label_5;
    QLabel *LabelCourseName;
    QLabel *label_2;
    QLineEdit *lineEditClassroom;
    QLabel *label_4;
    QComboBox *comboBoxSemester;
    QPushButton *ButtonOK;
    QPushButton *ButtonReturn;

    void setupUi(QWidget *TeacherAddNewCourseInfo)
    {
        if (TeacherAddNewCourseInfo->objectName().isEmpty())
            TeacherAddNewCourseInfo->setObjectName("TeacherAddNewCourseInfo");
        TeacherAddNewCourseInfo->resize(401, 382);
        label_3 = new QLabel(TeacherAddNewCourseInfo);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 180, 81, 90));
        label_3->setMinimumSize(QSize(0, 90));
        label_3->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setPointSize(12);
        label_3->setFont(font);
        plainTextEditCourseTime = new QPlainTextEdit(TeacherAddNewCourseInfo);
        plainTextEditCourseTime->setObjectName("plainTextEditCourseTime");
        plainTextEditCourseTime->setGeometry(QRect(140, 180, 200, 90));
        plainTextEditCourseTime->setMinimumSize(QSize(200, 90));
        plainTextEditCourseTime->setMaximumSize(QSize(200, 30));
        layoutWidget = new QWidget(TeacherAddNewCourseInfo);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 30, 288, 140));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 30));
        label->setMaximumSize(QSize(16777215, 30));
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        LabelCourseID = new QLabel(layoutWidget);
        LabelCourseID->setObjectName("LabelCourseID");
        LabelCourseID->setMinimumSize(QSize(200, 30));
        LabelCourseID->setMaximumSize(QSize(200, 30));
        LabelCourseID->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, LabelCourseID);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(0, 30));
        label_5->setMaximumSize(QSize(16777215, 30));
        label_5->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        LabelCourseName = new QLabel(layoutWidget);
        LabelCourseName->setObjectName("LabelCourseName");
        LabelCourseName->setMinimumSize(QSize(200, 30));
        LabelCourseName->setMaximumSize(QSize(200, 30));
        LabelCourseName->setFont(font);

        formLayout->setWidget(1, QFormLayout::FieldRole, LabelCourseName);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(0, 30));
        label_2->setMaximumSize(QSize(16777215, 30));
        label_2->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        lineEditClassroom = new QLineEdit(layoutWidget);
        lineEditClassroom->setObjectName("lineEditClassroom");
        lineEditClassroom->setMinimumSize(QSize(200, 30));
        lineEditClassroom->setMaximumSize(QSize(200, 30));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditClassroom);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(0, 30));
        label_4->setMaximumSize(QSize(16777215, 30));
        label_4->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        comboBoxSemester = new QComboBox(layoutWidget);
        comboBoxSemester->addItem(QString());
        comboBoxSemester->addItem(QString());
        comboBoxSemester->addItem(QString());
        comboBoxSemester->addItem(QString());
        comboBoxSemester->addItem(QString());
        comboBoxSemester->addItem(QString());
        comboBoxSemester->addItem(QString());
        comboBoxSemester->addItem(QString());
        comboBoxSemester->setObjectName("comboBoxSemester");
        comboBoxSemester->setMinimumSize(QSize(200, 30));
        comboBoxSemester->setMaximumSize(QSize(200, 30));
        comboBoxSemester->setFont(font);

        formLayout->setWidget(3, QFormLayout::FieldRole, comboBoxSemester);

        ButtonOK = new QPushButton(TeacherAddNewCourseInfo);
        ButtonOK->setObjectName("ButtonOK");
        ButtonOK->setGeometry(QRect(70, 310, 91, 31));
        ButtonReturn = new QPushButton(TeacherAddNewCourseInfo);
        ButtonReturn->setObjectName("ButtonReturn");
        ButtonReturn->setGeometry(QRect(240, 310, 91, 31));
#if QT_CONFIG(shortcut)
        label_3->setBuddy(plainTextEditCourseTime);
        label_2->setBuddy(lineEditClassroom);
        label_4->setBuddy(comboBoxSemester);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(lineEditClassroom, comboBoxSemester);
        QWidget::setTabOrder(comboBoxSemester, plainTextEditCourseTime);
        QWidget::setTabOrder(plainTextEditCourseTime, ButtonOK);
        QWidget::setTabOrder(ButtonOK, ButtonReturn);

        retranslateUi(TeacherAddNewCourseInfo);

        QMetaObject::connectSlotsByName(TeacherAddNewCourseInfo);
    } // setupUi

    void retranslateUi(QWidget *TeacherAddNewCourseInfo)
    {
        TeacherAddNewCourseInfo->setWindowTitle(QCoreApplication::translate("TeacherAddNewCourseInfo", "\346\225\231\345\270\210\351\200\211\346\213\251\346\216\210\350\257\276\351\235\242\346\235\277", nullptr));
        label_3->setText(QCoreApplication::translate("TeacherAddNewCourseInfo", "\346\216\210\350\257\276\346\227\266\351\227\264\357\274\232", nullptr));
        plainTextEditCourseTime->setPlainText(QCoreApplication::translate("TeacherAddNewCourseInfo", "\350\257\267\346\214\211\346\240\274\345\274\217\345\241\253\345\206\231\357\274\214\344\270\200\350\241\214\344\270\200\346\254\241\350\257\276\357\274\232\n"
"\345\221\250\345\207\240\357\274\232\345\274\200\345\247\213\346\227\266\351\227\264 - \347\273\223\346\235\237\346\227\266\351\227\264\n"
"\345\221\250\345\207\240\357\274\232\345\274\200\345\247\213\346\227\266\351\227\264 - \347\273\223\346\235\237\346\227\266\351\227\264\n"
".....", nullptr));
        label->setText(QCoreApplication::translate("TeacherAddNewCourseInfo", "\350\257\276\347\250\213ID\357\274\232", nullptr));
        LabelCourseID->setText(QCoreApplication::translate("TeacherAddNewCourseInfo", "<html><head/><body><p align=\"center\">TextLabel</p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("TeacherAddNewCourseInfo", "\350\257\276\347\250\213\345\220\215\357\274\232", nullptr));
        LabelCourseName->setText(QCoreApplication::translate("TeacherAddNewCourseInfo", "<html><head/><body><p align=\"center\">TextLabel</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("TeacherAddNewCourseInfo", "\346\216\210\350\257\276\346\225\231\345\256\244\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("TeacherAddNewCourseInfo", "\346\216\210\350\257\276\345\255\246\346\234\237\357\274\232", nullptr));
        comboBoxSemester->setItemText(0, QCoreApplication::translate("TeacherAddNewCourseInfo", "\345\244\247\344\270\200\357\274\210\344\270\212\357\274\211", nullptr));
        comboBoxSemester->setItemText(1, QCoreApplication::translate("TeacherAddNewCourseInfo", "\345\244\247\344\270\200\357\274\210\344\270\213\357\274\211", nullptr));
        comboBoxSemester->setItemText(2, QCoreApplication::translate("TeacherAddNewCourseInfo", "\345\244\247\344\272\214\357\274\210\344\270\212\357\274\211", nullptr));
        comboBoxSemester->setItemText(3, QCoreApplication::translate("TeacherAddNewCourseInfo", "\345\244\247\344\272\214\357\274\210\344\270\213\357\274\211", nullptr));
        comboBoxSemester->setItemText(4, QCoreApplication::translate("TeacherAddNewCourseInfo", "\345\244\247\344\270\211\357\274\210\344\270\212\357\274\211", nullptr));
        comboBoxSemester->setItemText(5, QCoreApplication::translate("TeacherAddNewCourseInfo", "\345\244\247\344\270\211\357\274\210\344\270\213)", nullptr));
        comboBoxSemester->setItemText(6, QCoreApplication::translate("TeacherAddNewCourseInfo", "\345\244\247\345\233\233\357\274\210\344\270\212\357\274\211", nullptr));
        comboBoxSemester->setItemText(7, QCoreApplication::translate("TeacherAddNewCourseInfo", "\345\244\247\345\233\233\357\274\210\344\270\213\357\274\211", nullptr));

        ButtonOK->setText(QCoreApplication::translate("TeacherAddNewCourseInfo", "\347\241\256\350\256\244\351\200\211\350\257\276", nullptr));
        ButtonReturn->setText(QCoreApplication::translate("TeacherAddNewCourseInfo", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeacherAddNewCourseInfo: public Ui_TeacherAddNewCourseInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERADDNEWCOURSEINFO_H

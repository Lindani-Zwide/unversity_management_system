/********************************************************************************
** Form generated from reading UI file 'search_stu_box.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_STU_BOX_H
#define UI_SEARCH_STU_BOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_search_stu_box
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QPushButton *pushButton_2;

    void setupUi(QDialog *search_stu_box)
    {
        if (search_stu_box->objectName().isEmpty())
            search_stu_box->setObjectName("search_stu_box");
        search_stu_box->resize(667, 353);
        search_stu_box->setMinimumSize(QSize(667, 353));
        search_stu_box->setMaximumSize(QSize(667, 353));
        search_stu_box->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background:#1F2937;\n"
"	color:white;\n"
"	font-weight:700;\n"
"}"));
        label = new QLabel(search_stu_box);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 30, 551, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"        font-size:35px;\n"
"        font-family:Arial, sans-serif;\n"
"  color:#ccc;\n"
"}"));
        lineEdit = new QLineEdit(search_stu_box);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(250, 150, 351, 51));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"		font-size:20px;\n"
"		background:#bbb;\n"
"		color:#1F2937;\n"
"        border-radius:12px;\n"
"		font-family:Arial, sans-serif;\n"
"}"));
        label_3 = new QLabel(search_stu_box);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 160, 171, 31));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   	  font-size:22px;\n"
"     font-family:Arial, sans-serif;\n"
"}"));
        pushButton_2 = new QPushButton(search_stu_box);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(470, 250, 131, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"		font-family:Arial, sans-serif;\n"
"		font-size:16px;\n"
"background:#0C4A6E;\n"
"border-radius:13px;\n"
"        \n"
"}\n"
""));

        retranslateUi(search_stu_box);

        QMetaObject::connectSlotsByName(search_stu_box);
    } // setupUi

    void retranslateUi(QDialog *search_stu_box)
    {
        search_stu_box->setWindowTitle(QCoreApplication::translate("search_stu_box", "Search student", nullptr));
        label->setText(QCoreApplication::translate("search_stu_box", "ENTER STUDENT INFORMATION", nullptr));
        lineEdit->setText(QString());
        label_3->setText(QCoreApplication::translate("search_stu_box", "Student number", nullptr));
        pushButton_2->setText(QCoreApplication::translate("search_stu_box", "SEARCH", nullptr));
    } // retranslateUi

};

namespace Ui {
    class search_stu_box: public Ui_search_stu_box {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_STU_BOX_H

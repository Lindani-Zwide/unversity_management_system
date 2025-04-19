/********************************************************************************
** Form generated from reading UI file 'register_box.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_BOX_H
#define UI_REGISTER_BOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_register_box
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_2;

    void setupUi(QDialog *register_box)
    {
        if (register_box->objectName().isEmpty())
            register_box->setObjectName("register_box");
        register_box->resize(674, 591);
        register_box->setMinimumSize(QSize(674, 591));
        register_box->setMaximumSize(QSize(674, 591));
        register_box->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background:#1F2937;\n"
"	color:white;\n"
"   font-weight:700;\n"
"}"));
        label = new QLabel(register_box);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 30, 521, 51));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"        font-size:35px;\n"
"        font-family:Arial, sans-serif; \n"
"        color:#ccc;\n"
"}"));
        label_2 = new QLabel(register_box);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(270, 130, 161, 41));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"        font-size:28px;\n"
"        font-family:Arial, sans-serif;\n"
"		font-style:italic;\n"
"        color:#0284C7;\n"
"}"));
        label_3 = new QLabel(register_box);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 210, 121, 31));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   	  font-size:20px;\n"
"     font-family:Arial, sans-serif;\n"
"}"));
        lineEdit = new QLineEdit(register_box);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(240, 200, 391, 51));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"		font-size:20px;\n"
"		background:#bbb;\n"
"		color:#1F2937;\n"
"        border-radius:12px;\n"
"		font-family:Arial, sans-serif;\n"
"}"));
        label_4 = new QLabel(register_box);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 290, 221, 31));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   	  font-size:20px;\n"
"     font-family:Arial, sans-serif;\n"
"}"));
        lineEdit_2 = new QLineEdit(register_box);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(240, 280, 391, 51));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"		font-size:20px;\n"
"		background:#bbb;\n"
"		color:#1F2937;\n"
"        border-radius:12px;\n"
"		font-family:Arial, sans-serif;\n"
"}"));
        label_5 = new QLabel(register_box);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 370, 221, 31));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   	  font-size:20px;\n"
"     font-family:Arial, sans-serif;\n"
"}"));
        lineEdit_3 = new QLineEdit(register_box);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(240, 360, 391, 51));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"		font-size:20px;\n"
"		background:#bbb;\n"
"		color:#1F2937;\n"
"        border-radius:12px;\n"
"		font-family:Arial, sans-serif;\n"
"}"));
        pushButton_2 = new QPushButton(register_box);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(500, 440, 131, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"		font-family:Arial, sans-serif;\n"
"		font-size:16px;\n"
"background:#0C4A6E;\n"
"border-radius:13px;\n"
"font-weight:900;\n"
"        \n"
"}\n"
""));

        retranslateUi(register_box);

        QMetaObject::connectSlotsByName(register_box);
    } // setupUi

    void retranslateUi(QDialog *register_box)
    {
        register_box->setWindowTitle(QCoreApplication::translate("register_box", "Register user", nullptr));
        label->setText(QCoreApplication::translate("register_box", "NEW USER REGISTRATION", nullptr));
        label_2->setText(QCoreApplication::translate("register_box", "WELCOME!", nullptr));
        label_3->setText(QCoreApplication::translate("register_box", "Username", nullptr));
        lineEdit->setText(QString());
        label_4->setText(QCoreApplication::translate("register_box", "New Password", nullptr));
        lineEdit_2->setText(QString());
        label_5->setText(QCoreApplication::translate("register_box", "Confirm Password", nullptr));
        lineEdit_3->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("register_box", "REGISTER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class register_box: public Ui_register_box {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_BOX_H

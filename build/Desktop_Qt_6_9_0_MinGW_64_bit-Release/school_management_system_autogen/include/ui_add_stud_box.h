/********************************************************************************
** Form generated from reading UI file 'add_stud_box.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_STUD_BOX_H
#define UI_ADD_STUD_BOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_add_stud_box
{
public:
    QLabel *label;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_2;

    void setupUi(QDialog *add_stud_box)
    {
        if (add_stud_box->objectName().isEmpty())
            add_stud_box->setObjectName("add_stud_box");
        add_stud_box->resize(797, 567);
        add_stud_box->setMinimumSize(QSize(797, 567));
        add_stud_box->setMaximumSize(QSize(797, 567));
        add_stud_box->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background:#1F2937;\n"
"	color:white;\n"
"	font-weight:700;\n"
"}"));
        label = new QLabel(add_stud_box);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 40, 661, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"        font-size:42px;\n"
"        font-family:Arial, sans-serif;\n"
"  color:#ccc;\n"
"}"));
        label_3 = new QLabel(add_stud_box);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(130, 150, 171, 31));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   	  font-size:22px;\n"
"     font-family:Arial, sans-serif;\n"
"}"));
        lineEdit = new QLineEdit(add_stud_box);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(310, 140, 351, 51));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"		font-size:20px;\n"
"		background:#bbb;\n"
"		color:#1F2937;\n"
"        border-radius:12px;\n"
"		font-family:Arial, sans-serif;\n"
"}"));
        lineEdit_2 = new QLineEdit(add_stud_box);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(310, 210, 351, 51));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"		font-size:20px;\n"
"		background:#bbb;\n"
"		color:#1F2937;\n"
"        border-radius:12px;\n"
"		font-family:Arial, sans-serif;\n"
"}"));
        label_4 = new QLabel(add_stud_box);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(130, 220, 171, 31));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   	  font-size:22px;\n"
"     font-family:Arial, sans-serif;\n"
"}"));
        label_5 = new QLabel(add_stud_box);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(130, 290, 151, 31));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   	  font-size:22px;\n"
"     font-family:Arial, sans-serif;\n"
"}"));
        lineEdit_3 = new QLineEdit(add_stud_box);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(310, 280, 351, 51));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"		font-size:20px;\n"
"		background:#bbb;\n"
"		color:#1F2937;\n"
"        border-radius:12px;\n"
"		font-family:Arial, sans-serif;\n"
"}"));
        label_6 = new QLabel(add_stud_box);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(130, 360, 171, 31));
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   	  font-size:22px;\n"
"     font-family:Arial, sans-serif;\n"
"}"));
        lineEdit_4 = new QLineEdit(add_stud_box);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(310, 350, 351, 51));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"		font-size:20px;\n"
"		background:#bbb;\n"
"		color:#1F2937;\n"
"        border-radius:12px;\n"
"		font-family:Arial, sans-serif;\n"
"}"));
        pushButton_2 = new QPushButton(add_stud_box);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(560, 430, 101, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"		font-family:Arial, sans-serif;\n"
"		font-size:18px;\n"
"        font-weight:800;\n"
"        border-radius:12px;\n"
"        background:#0C4A6E;\n"
"}"));

        retranslateUi(add_stud_box);

        QMetaObject::connectSlotsByName(add_stud_box);
    } // setupUi

    void retranslateUi(QDialog *add_stud_box)
    {
        add_stud_box->setWindowTitle(QCoreApplication::translate("add_stud_box", "Add student", nullptr));
        label->setText(QCoreApplication::translate("add_stud_box", "ENTER STUDENT INFORMATION", nullptr));
        label_3->setText(QCoreApplication::translate("add_stud_box", "Student number", nullptr));
        lineEdit->setText(QString());
        lineEdit_2->setText(QString());
        label_4->setText(QCoreApplication::translate("add_stud_box", "First name(s)", nullptr));
        label_5->setText(QCoreApplication::translate("add_stud_box", "Last name", nullptr));
        lineEdit_3->setText(QString());
        label_6->setText(QCoreApplication::translate("add_stud_box", "Qualification", nullptr));
        lineEdit_4->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("add_stud_box", "ADD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_stud_box: public Ui_add_stud_box {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_STUD_BOX_H

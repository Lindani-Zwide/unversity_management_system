/********************************************************************************
** Form generated from reading UI file 'remove_stu_box.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVE_STU_BOX_H
#define UI_REMOVE_STU_BOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_remove_stu_box
{
public:
    QLineEdit *stu_num_input;
    QLabel *label;
    QLabel *label_3;
    QPushButton *remove_stu_btn;

    void setupUi(QDialog *remove_stu_box)
    {
        if (remove_stu_box->objectName().isEmpty())
            remove_stu_box->setObjectName("remove_stu_box");
        remove_stu_box->resize(649, 369);
        remove_stu_box->setMinimumSize(QSize(649, 369));
        remove_stu_box->setMaximumSize(QSize(649, 369));
        remove_stu_box->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background:#1F2937;\n"
"	color:white;\n"
"	font-weight:700;\n"
"}"));
        stu_num_input = new QLineEdit(remove_stu_box);
        stu_num_input->setObjectName("stu_num_input");
        stu_num_input->setGeometry(QRect(230, 130, 381, 51));
        stu_num_input->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"		font-size:20px;\n"
"		background:#bbb;\n"
"		color:#1F2937;\n"
"        border-radius:12px;\n"
"		font-family:Arial, sans-serif;\n"
"}"));
        label = new QLabel(remove_stu_box);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 30, 461, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"        font-size:35px;\n"
"        font-family:Arial, sans-serif;\n"
"  color:#ccc;\n"
"}"));
        label_3 = new QLabel(remove_stu_box);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 140, 171, 31));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   	  font-size:22px;\n"
"     font-family:Arial, sans-serif;\n"
"}"));
        remove_stu_btn = new QPushButton(remove_stu_box);
        remove_stu_btn->setObjectName("remove_stu_btn");
        remove_stu_btn->setGeometry(QRect(440, 230, 171, 51));
        remove_stu_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"		font-family:Arial, sans-serif;\n"
"		font-size:16px;\n"
"background:#0C4A6E;\n"
"border-radius:13px;\n"
"        \n"
"}\n"
""));

        retranslateUi(remove_stu_box);

        QMetaObject::connectSlotsByName(remove_stu_box);
    } // setupUi

    void retranslateUi(QDialog *remove_stu_box)
    {
        remove_stu_box->setWindowTitle(QCoreApplication::translate("remove_stu_box", "Remove student", nullptr));
        stu_num_input->setText(QString());
        label->setText(QCoreApplication::translate("remove_stu_box", "update student information", nullptr));
        label_3->setText(QCoreApplication::translate("remove_stu_box", "Student number", nullptr));
        remove_stu_btn->setText(QCoreApplication::translate("remove_stu_box", "REMOVE STUDENT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class remove_stu_box: public Ui_remove_stu_box {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVE_STU_BOX_H

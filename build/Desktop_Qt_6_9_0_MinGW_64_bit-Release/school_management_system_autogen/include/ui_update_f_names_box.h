/********************************************************************************
** Form generated from reading UI file 'update_f_names_box.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATE_F_NAMES_BOX_H
#define UI_UPDATE_F_NAMES_BOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_update_f_names_box
{
public:
    QLabel *label;
    QLineEdit *stu_num_input;
    QLabel *label_3;
    QPushButton *update_stu_btn;
    QLabel *label_4;
    QLineEdit *new_f_names_input;

    void setupUi(QDialog *update_f_names_box)
    {
        if (update_f_names_box->objectName().isEmpty())
            update_f_names_box->setObjectName("update_f_names_box");
        update_f_names_box->resize(649, 368);
        update_f_names_box->setMinimumSize(QSize(649, 368));
        update_f_names_box->setMaximumSize(QSize(649, 368));
        update_f_names_box->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background:#1F2937;\n"
"	color:white;\n"
"	font-weight:700;\n"
"}"));
        label = new QLabel(update_f_names_box);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 20, 461, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"        font-size:35px;\n"
"        font-family:Arial, sans-serif;\n"
"  color:#ccc;\n"
"}"));
        stu_num_input = new QLineEdit(update_f_names_box);
        stu_num_input->setObjectName("stu_num_input");
        stu_num_input->setGeometry(QRect(230, 120, 381, 51));
        stu_num_input->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"		font-size:20px;\n"
"		background:#bbb;\n"
"		color:#1F2937;\n"
"        border-radius:12px;\n"
"		font-family:Arial, sans-serif;\n"
"}"));
        label_3 = new QLabel(update_f_names_box);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 130, 191, 31));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   	  font-size:22px;\n"
"     font-family:Arial, sans-serif;\n"
"}"));
        update_stu_btn = new QPushButton(update_f_names_box);
        update_stu_btn->setObjectName("update_stu_btn");
        update_stu_btn->setGeometry(QRect(480, 300, 131, 41));
        update_stu_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"		font-family:Arial, sans-serif;\n"
"		font-size:16px;\n"
"background:#0C4A6E;\n"
"border-radius:13px;\n"
"        \n"
"}\n"
""));
        label_4 = new QLabel(update_f_names_box);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 220, 191, 31));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   	  font-size:22px;\n"
"     font-family:Arial, sans-serif;\n"
"}"));
        new_f_names_input = new QLineEdit(update_f_names_box);
        new_f_names_input->setObjectName("new_f_names_input");
        new_f_names_input->setGeometry(QRect(230, 210, 381, 51));
        new_f_names_input->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"		font-size:20px;\n"
"		background:#bbb;\n"
"		color:#1F2937;\n"
"        border-radius:12px;\n"
"		font-family:Arial, sans-serif;\n"
"}"));

        retranslateUi(update_f_names_box);

        QMetaObject::connectSlotsByName(update_f_names_box);
    } // setupUi

    void retranslateUi(QDialog *update_f_names_box)
    {
        update_f_names_box->setWindowTitle(QCoreApplication::translate("update_f_names_box", "Update first name", nullptr));
        label->setText(QCoreApplication::translate("update_f_names_box", "update student information", nullptr));
        stu_num_input->setText(QString());
        label_3->setText(QCoreApplication::translate("update_f_names_box", "Student number", nullptr));
        update_stu_btn->setText(QCoreApplication::translate("update_f_names_box", "UPDATE", nullptr));
        label_4->setText(QCoreApplication::translate("update_f_names_box", "New first name(s)", nullptr));
        new_f_names_input->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class update_f_names_box: public Ui_update_f_names_box {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATE_F_NAMES_BOX_H

/********************************************************************************
** Form generated from reading UI file 'update_l_name_box.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATE_L_NAME_BOX_H
#define UI_UPDATE_L_NAME_BOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_update_l_name_box
{
public:
    QPushButton *update_l_name_btn;
    QLineEdit *new_l_name_input;
    QLineEdit *stu_num_input;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;

    void setupUi(QDialog *update_l_name_box)
    {
        if (update_l_name_box->objectName().isEmpty())
            update_l_name_box->setObjectName("update_l_name_box");
        update_l_name_box->resize(649, 368);
        update_l_name_box->setMinimumSize(QSize(649, 368));
        update_l_name_box->setMaximumSize(QSize(649, 368));
        update_l_name_box->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background:#1F2937;\n"
"	color:white;\n"
"	font-weight:700;\n"
"}\n"
""));
        update_l_name_btn = new QPushButton(update_l_name_box);
        update_l_name_btn->setObjectName("update_l_name_btn");
        update_l_name_btn->setGeometry(QRect(480, 290, 131, 41));
        update_l_name_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"		font-family:Arial, sans-serif;\n"
"		font-size:16px;\n"
"background:#0C4A6E;\n"
"border-radius:13px;\n"
"        \n"
"}\n"
""));
        new_l_name_input = new QLineEdit(update_l_name_box);
        new_l_name_input->setObjectName("new_l_name_input");
        new_l_name_input->setGeometry(QRect(230, 200, 381, 51));
        new_l_name_input->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"		font-size:20px;\n"
"		background:#bbb;\n"
"		color:#1F2937;\n"
"        border-radius:12px;\n"
"		font-family:Arial, sans-serif;\n"
"}"));
        stu_num_input = new QLineEdit(update_l_name_box);
        stu_num_input->setObjectName("stu_num_input");
        stu_num_input->setGeometry(QRect(230, 110, 381, 51));
        stu_num_input->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"		font-size:20px;\n"
"		background:#bbb;\n"
"		color:#1F2937;\n"
"        border-radius:12px;\n"
"		font-family:Arial, sans-serif;\n"
"}"));
        label_3 = new QLabel(update_l_name_box);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 120, 191, 31));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   	  font-size:22px;\n"
"     font-family:Arial, sans-serif;\n"
"}"));
        label = new QLabel(update_l_name_box);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 10, 461, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"        font-size:35px;\n"
"        font-family:Arial, sans-serif;\n"
"  color:#ccc;\n"
"}"));
        label_4 = new QLabel(update_l_name_box);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 210, 191, 31));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   	  font-size:22px;\n"
"     font-family:Arial, sans-serif;\n"
"}"));

        retranslateUi(update_l_name_box);

        QMetaObject::connectSlotsByName(update_l_name_box);
    } // setupUi

    void retranslateUi(QDialog *update_l_name_box)
    {
        update_l_name_box->setWindowTitle(QCoreApplication::translate("update_l_name_box", "Update last name", nullptr));
        update_l_name_btn->setText(QCoreApplication::translate("update_l_name_box", "UPDATE", nullptr));
        new_l_name_input->setText(QString());
        stu_num_input->setText(QString());
        label_3->setText(QCoreApplication::translate("update_l_name_box", "Student number", nullptr));
        label->setText(QCoreApplication::translate("update_l_name_box", "update student information", nullptr));
        label_4->setText(QCoreApplication::translate("update_l_name_box", "New last name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class update_l_name_box: public Ui_update_l_name_box {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATE_L_NAME_BOX_H

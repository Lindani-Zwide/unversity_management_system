/********************************************************************************
** Form generated from reading UI file 'dash_board_box.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASH_BOARD_BOX_H
#define UI_DASH_BOARD_BOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dash_board_box
{
public:
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *display_studs_btn;

    void setupUi(QDialog *dash_board_box)
    {
        if (dash_board_box->objectName().isEmpty())
            dash_board_box->setObjectName("dash_board_box");
        dash_board_box->resize(992, 619);
        dash_board_box->setMinimumSize(QSize(992, 619));
        dash_board_box->setMaximumSize(QSize(992, 619));
        dash_board_box->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background:#1F2937;\n"
"	color:white;\n"
"	font-weight:700;\n"
"}"));
        label = new QLabel(dash_board_box);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 60, 761, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"        font-size:42px;\n"
"        font-family:Arial, sans-serif;\n"
"  color:#ccc;\n"
"}"));
        pushButton_2 = new QPushButton(dash_board_box);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(350, 160, 301, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"		font-family:Arial, sans-serif;\n"
"		font-size:18px;\n"
"        font-weight:800;\n"
"        border-radius:12px;\n"
"        background:#0C4A6E;\n"
"}"));
        pushButton_3 = new QPushButton(dash_board_box);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(350, 260, 301, 61));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"		font-family:Arial, sans-serif;\n"
"		font-size:18px;\n"
"        font-weight:800;\n"
"        border-radius:12px;\n"
"        background:#0C4A6E;\n"
"}"));
        pushButton_4 = new QPushButton(dash_board_box);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(350, 360, 301, 61));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"		font-family:Arial, sans-serif;\n"
"		font-size:18px;\n"
"        font-weight:800;\n"
"        border-radius:12px;\n"
"        background:#0C4A6E;\n"
"}"));
        display_studs_btn = new QPushButton(dash_board_box);
        display_studs_btn->setObjectName("display_studs_btn");
        display_studs_btn->setGeometry(QRect(350, 460, 301, 61));
        display_studs_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"		font-family:Arial, sans-serif;\n"
"		font-size:18px;\n"
"        font-weight:800;\n"
"        border-radius:12px;\n"
"        background:#0C4A6E;\n"
"}"));

        retranslateUi(dash_board_box);

        QMetaObject::connectSlotsByName(dash_board_box);
    } // setupUi

    void retranslateUi(QDialog *dash_board_box)
    {
        dash_board_box->setWindowTitle(QCoreApplication::translate("dash_board_box", "UMS", nullptr));
        label->setText(QCoreApplication::translate("dash_board_box", "UNIVERSITY MANAGEMENT SYSTEM", nullptr));
        pushButton_2->setText(QCoreApplication::translate("dash_board_box", "ADD STUDENT", nullptr));
        pushButton_3->setText(QCoreApplication::translate("dash_board_box", "SEARCH STUDENT", nullptr));
        pushButton_4->setText(QCoreApplication::translate("dash_board_box", "UPDATE STUDENT", nullptr));
        display_studs_btn->setText(QCoreApplication::translate("dash_board_box", "DISPLAY ALL STUDENTS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dash_board_box: public Ui_dash_board_box {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASH_BOARD_BOX_H

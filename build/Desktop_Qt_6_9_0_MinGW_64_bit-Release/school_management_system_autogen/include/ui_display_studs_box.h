/********************************************************************************
** Form generated from reading UI file 'display_studs_box.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAY_STUDS_BOX_H
#define UI_DISPLAY_STUDS_BOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_display_studs_box
{
public:
    QLabel *label;
    QListWidget *studs_display_box;
    QPushButton *delete_all_studs_btn;
    QLabel *total_studs_label;

    void setupUi(QDialog *display_studs_box)
    {
        if (display_studs_box->objectName().isEmpty())
            display_studs_box->setObjectName("display_studs_box");
        display_studs_box->resize(812, 711);
        display_studs_box->setMinimumSize(QSize(812, 711));
        display_studs_box->setMaximumSize(QSize(812, 711));
        display_studs_box->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background:#1F2937;\n"
"	color:white;\n"
"	font-weight:700;\n"
"}"));
        label = new QLabel(display_studs_box);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 10, 391, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"        font-size:35px;\n"
"        font-family:Arial, sans-serif;\n"
"  color:#ccc;\n"
"}"));
        studs_display_box = new QListWidget(display_studs_box);
        studs_display_box->setObjectName("studs_display_box");
        studs_display_box->setGeometry(QRect(20, 110, 771, 551));
        studs_display_box->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background:#111827;;\n"
"	color:#CCC;\n"
"	font-weight:700;\n"
"	border-radius:11px;\n"
"    font-size: 20px;\n"
"}"));
        studs_display_box->setProperty("isWrapping", QVariant(false));
        delete_all_studs_btn = new QPushButton(display_studs_box);
        delete_all_studs_btn->setObjectName("delete_all_studs_btn");
        delete_all_studs_btn->setGeometry(QRect(340, 670, 131, 31));
        delete_all_studs_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"		font-family:Arial, sans-serif;\n"
"		font-size:18px;\n"
"        font-weight:800;\n"
"        border-radius:12px;\n"
"        background:#881337;\n"
"}"));
        total_studs_label = new QLabel(display_studs_box);
        total_studs_label->setObjectName("total_studs_label");
        total_studs_label->setGeometry(QRect(20, 70, 771, 31));
        total_studs_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    background:#888;\n"
"    border-radius:8px;\n"
"    color:#881337;\n"
"    font-size:17px;\n"
"}"));

        retranslateUi(display_studs_box);

        QMetaObject::connectSlotsByName(display_studs_box);
    } // setupUi

    void retranslateUi(QDialog *display_studs_box)
    {
        display_studs_box->setWindowTitle(QCoreApplication::translate("display_studs_box", "Enrolled students", nullptr));
        label->setText(QCoreApplication::translate("display_studs_box", "ENROLLED STUDENTS", nullptr));
        delete_all_studs_btn->setText(QCoreApplication::translate("display_studs_box", "delete all", nullptr));
        total_studs_label->setText(QCoreApplication::translate("display_studs_box", "Total : 100", nullptr));
    } // retranslateUi

};

namespace Ui {
    class display_studs_box: public Ui_display_studs_box {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAY_STUDS_BOX_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QPushButton *pushButton;
    QLabel *label_5;
    QPushButton *pushButton_2;
    QLabel *label_7;
    QPushButton *hide_show_password_btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(992, 619);
        MainWindow->setMinimumSize(QSize(992, 619));
        MainWindow->setMaximumSize(QSize(992, 619));
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background:#1F2937;\n"
"	color:white;\n"
"	font-weight:900;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 10, 851, 61));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"        font-size:42px;\n"
"        font-family:Arial, sans-serif;\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(450, 150, 101, 41));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"        font-size:35px;\n"
"        font-family:Arial, sans-serif;\n"
"		font-style:italic;\n"
"        color:#0284C7;\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(290, 230, 121, 31));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   	  font-size:20px;\n"
"     font-family:Arial, sans-serif;\n"
"}"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(410, 220, 301, 51));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"		font-size:20px;\n"
"		background:#bbb;\n"
"		color:#1F2937;\n"
"        border-radius:12px;\n"
"		font-family:Arial, sans-serif;\n"
"}"));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(410, 300, 301, 51));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"		font-size:20px;\n"
"		background:#bbb;\n"
"		color:#1F2937;\n"
"        border-radius:12px;\n"
"		font-family:Arial, sans-serif;\n"
"}"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(290, 310, 121, 31));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"   	  font-size:20px;\n"
"     font-family:Arial, sans-serif;\n"
"}"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(470, 370, 81, 41));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"		font-family:Arial, sans-serif;\n"
"		font-size:16px;\n"
"background:#0C4A6E;\n"
"border-radius:13px;\n"
"        \n"
"}\n"
""));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(500, 420, 31, 31));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"		font-family:Arial,sans-serif;\n"
"        font-size:17px;\n"
"color:green;\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(450, 460, 131, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"		font-family:Arial, sans-serif;\n"
"		font-size:16px;\n"
"background:#0C4A6E;\n"
"border-radius:13px;\n"
"        \n"
"}\n"
""));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(830, 580, 161, 16));
        hide_show_password_btn = new QPushButton(centralwidget);
        hide_show_password_btn->setObjectName("hide_show_password_btn");
        hide_show_password_btn->setGeometry(QRect(720, 310, 61, 31));
        hide_show_password_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"		font-family:Arial, sans-serif;\n"
"		font-size:16px;\n"
"background:#0C4A6E;\n"
"border-radius:13px;\n"
"        \n"
"}\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 992, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "UNIVERSITY MANAGEMENT SYSTEM", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "UNIVERSITY MANAGEMENT SYSTEM", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        lineEdit->setText(QString());
        lineEdit_2->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "or", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "REGISTER", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\302\251 2025 Lindani Ndwandwe", nullptr));
        hide_show_password_btn->setText(QCoreApplication::translate("MainWindow", "show", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    // Create QApplication instance
    QApplication a(argc, argv);

    // Set organization and application names
    QCoreApplication::setOrganizationName("Tech-Renov");
    QCoreApplication::setApplicationName("University management system");

    // Set stylesheet for QMessageBox
    a.setStyleSheet("QMessageBox { font-size: 18px; font-style:italic }");

    // Create MainWindow instance
    MainWindow w;

    // Show MainWindow
    w.show();

    // Execute application event loop
    return a.exec();
}

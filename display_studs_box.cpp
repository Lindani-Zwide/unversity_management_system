#include "display_studs_box.h"
#include "ui_display_studs_box.h"
#include <QFile>
#include <QDir>
#include <QMessageBox>
#include <QStandardPaths>
#include <QDomDocument>

display_studs_box::display_studs_box(QWidget *parent)
    : QDialog(parent)
    , ui(QSharedPointer<Ui::display_studs_box>::create())
    {
        // Set up the UI components
        ui->setupUi(this);

        // Load students initially
        load_students();

        // Connect signal and slot for delete all students button
        connect(ui->delete_all_studs_btn, &QPushButton::clicked, this, &display_studs_box::delete_studs_fun);
    }

    // Function to load students from XML file
    void display_studs_box::load_students()
    {
        // Get path to XML file
        QString path = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);
        QFile file(path + "/data.xml");
        QDomDocument doc;

        // Check if file exists and can be opened
        if (!file.exists() || !file.open(QIODevice::ReadOnly) || !doc.setContent(&file)) {
            // Display message if no students
            ui->total_studs_label->setText("Total Students: 0");
            return;
        }
        file.close();

        // Get list of students
        QDomNodeList students = doc.elementsByTagName("student");
        int studentCount = 0;
        ui->studs_display_box->clear();

        // Iterate through students and display information
        for (int i = 0; i < students.count(); ++i) {
            QDomElement student = students.at(i).toElement();
            QString stu_no = student.firstChildElement("stu_no").text();
            QString f_name = student.firstChildElement("first_name").text();
            QString l_name = student.firstChildElement("last_name").text();
            QString qual = student.firstChildElement("qualification").text();

            // Check if student number is not empty
            if (!stu_no.isEmpty()) {
                // Format student information
                QString formatted = QString(
                                        "Student number: %1\n"
                                        "First name(s): %2\n"
                                        "Last name: %3\n"
                                        "Qualification: %4\n"
                                        ).arg(stu_no, f_name, l_name, qual);

                // Add student information to display box
                ui->studs_display_box->addItem(formatted);
                ++studentCount;
            }
        }

        // Update total students label
        ui->total_studs_label->setText("Total Students: " + QString::number(studentCount));
    }

    // Slot to delete all students
    void display_studs_box::delete_studs_fun()
    {
        // Confirm deletion with user
        QMessageBox::StandardButton reply = QMessageBox::question(
            this, "Confirm", "You are about to delete all students.\nClick \"Yes\" to confirm.",
            QMessageBox::Yes | QMessageBox::No
            );

        if (reply == QMessageBox::Yes) {
            // Get path to XML file
            QString path = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);
            QFile file(path + "/data.xml");
            QDomDocument doc;

            // Check if file exists and can be opened
            if (file.exists() && file.open(QIODevice::ReadOnly)) {
                doc.setContent(&file);
                file.close();

                // Get root element and list of students
                QDomElement root = doc.documentElement();
                QDomNodeList students = root.elementsByTagName("student");

                // Remove student nodes
                for (int i = students.count() - 1; i >= 0; --i) {
                    QDomElement student = students.at(i).toElement();
                    if (!student.firstChildElement("stu_no").text().isEmpty()) {
                        root.removeChild(student);
                    }
                }

                // Save changes to XML file
                if (file.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
                    QTextStream stream(&file);
                    doc.save(stream, 4);
                    file.close();

                    // Display success message and reload students
                    QMessageBox::information(this, "Success", "All student records deleted.");
                    load_students();
                } else {
                    // Display error message if unable to save changes
                    QMessageBox::warning(this, "Error", "Could not save changes to XML.");
                }
            }
        }
}

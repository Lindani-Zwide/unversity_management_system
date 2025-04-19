#include "update_f_names_box.h"
#include "ui_update_f_names_box.h"
#include <QMessageBox>
#include <QFile>
#include <QStandardPaths>
#include <QDomDocument>
#include <QDir>
#include <QDomNodeList>
#include <regex>

    update_f_names_box::update_f_names_box(QWidget *parent)
    : QDialog(parent)
    , ui(QSharedPointer<Ui::update_f_names_box>::create())
{
    // Set up UI components
    ui->setupUi(this);

    // Connect signal and slot for update button
    connect(ui->update_stu_btn, &QPushButton::clicked, this, &update_f_names_box::update_f_names_fun);
}

// Slot to update student's first name
void update_f_names_box::update_f_names_fun()
{
    // Get student number and new first name from input fields
    QString stuNo = ui->stu_num_input->text();
    QString newFirstName = ui->new_f_names_input->text();

    // Validate new first name format
    std::regex name_regex(R"(^[A-Z][a-z]+(\s[A-Z][a-z]+)*$)");
    if (!std::regex_match(newFirstName.toStdString(), name_regex)) {
        QMessageBox::critical(this, "Error", "Invalid first name format. Please use title case (e.g., John Smith).");
        return;
    }

    // Get path to XML file
    QString path = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);
    QFile file(path + "/data.xml");
    QDomDocument doc;

    // Check if file can be opened and parsed
    if (!file.open(QIODevice::ReadOnly) || !doc.setContent(&file)) {
        file.close();
        QMessageBox::critical(this, "Error", "Failed to read data.xml file");
        return;
    }
    file.close();

    // Get list of students
    QDomNodeList students = doc.elementsByTagName("student");
    bool studentFound = false;

    // Iterate through students and update matching student's first name
    for (int i = 0; i < students.count(); ++i) {
        QDomElement student = students.at(i).toElement();
        QDomElement stuNoElement = student.firstChildElement("stu_no");
        if (stuNoElement.text() == stuNo) {
            QDomElement firstNameElement = student.firstChildElement("first_name");
            if (!firstNameElement.isNull()) {
                firstNameElement.firstChild().setNodeValue(newFirstName);
                studentFound = true;
            } else {
                QMessageBox::critical(this, "Error", "Student first name element not found");
            }
            break;
        }
    }

    // Save changes to XML file if student was found
    if (studentFound) {
        if (file.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
            QTextStream stream(&file);
            doc.save(stream, 4);
            file.close();
            QMessageBox::information(this, "Success", "STUDENT UPDATED SUCCESSFULLY");
        } else {
            file.close();
            QMessageBox::critical(this, "Error", "Failed to write to data.xml file");
        }
    } else {
        // Display error message if student was not found
        QMessageBox::critical(this, "Error", "Student not found");
    }

    // Clear input fields
    ui->stu_num_input->clear();
    ui->new_f_names_input->clear();
}

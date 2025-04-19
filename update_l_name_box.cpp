#include "update_l_name_box.h"
#include "ui_update_l_name_box.h"
#include <QMessageBox>
#include <QFile>
#include <QStandardPaths>
#include <QDomDocument>
#include <QDir>
#include <QDomNodeList>
#include <regex>

    update_l_name_box::update_l_name_box(QWidget *parent)
    : QDialog(parent)
    , ui(QSharedPointer<Ui::update_l_name_box>::create())
{
    // Set up UI components
    ui->setupUi(this);

    // Connect signal and slot for update button
    connect(ui->update_l_name_btn, &QPushButton::clicked, this, &update_l_name_box::update_l_name_fun);
}

// Slot to update student's last name
void update_l_name_box::update_l_name_fun()
{
    // Get student number and new last name from input fields
    QString stuNo = ui->stu_num_input->text();
    QString newLastName = ui->new_l_name_input->text();

    // Validate new last name format
    std::regex name_regex(R"(^[A-Z][a-z]+(\s[A-Z][a-z]+)*$)");
    if (!std::regex_match(newLastName.toStdString(), name_regex)) {
        QMessageBox::critical(this, "Error", "Invalid last name format. Please use title case (e.g., Smith Johnson).");
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

    // Iterate through students and update matching student's last name
    for (int i = 0; i < students.count(); ++i) {
        QDomElement student = students.at(i).toElement();
        QDomElement stuNoElement = student.firstChildElement("stu_no");
        if (stuNoElement.text() == stuNo) {
            QDomElement lastNameElement = student.firstChildElement("last_name");
            if (!lastNameElement.isNull()) {
                lastNameElement.firstChild().setNodeValue(newLastName);
                studentFound = true;
            } else {
                QMessageBox::critical(this, "Error", "Student last name element not found");
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
            QMessageBox::information(this, "Success", "STUDENT INFORMATION UPDATED SUCCESSFULLY");
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
    ui->new_l_name_input->clear();
}


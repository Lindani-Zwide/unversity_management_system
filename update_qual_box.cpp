#include "update_qual_box.h"
#include "ui_update_qual_box.h"
#include <QMessageBox>
#include <QFile>
#include <QStandardPaths>
#include <QDomDocument>
#include <QDir>
#include <QDomNodeList>
#include <regex>

    update_qual_box::update_qual_box(QWidget *parent)
    : QDialog(parent)
    , ui(QSharedPointer<Ui::update_qual_box>::create())
{
    // Set up UI components
    ui->setupUi(this);

    // Connect signal and slot for update button
    connect(ui->update_stu_btn, &QPushButton::clicked, this, &update_qual_box::update_qual_fun);
}

// Slot to update student's qualification
void update_qual_box::update_qual_fun()
{
    // Get student number and new qualification from input fields
    QString stuNo = ui->stu_num_input->text();
    QString newQualification = ui->new_qual_input->text();

    // Validate new qualification format
    std::regex qual_regex(R"(^[A-Za-z\s]{2,50}$)");
    if (!std::regex_match(newQualification.toStdString(), qual_regex)) {
        QMessageBox::critical(this, "Error", "Invalid qualification format. Please enter a qualification between 2 and 50 characters long.");
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

    // Iterate through students and update matching student's qualification
    for (int i = 0; i < students.count(); ++i) {
        QDomElement student = students.at(i).toElement();
        QDomElement stuNoElement = student.firstChildElement("stu_no");
        if (stuNoElement.text() == stuNo) {
            QDomElement qualificationElement = student.firstChildElement("qualification");
            if (!qualificationElement.isNull()) {
                qualificationElement.firstChild().setNodeValue(newQualification);
                studentFound = true;
            } else {
                QMessageBox::critical(this, "Error", "Student qualification element not found");
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
            QMessageBox::information(this, "Success", "STUDENT QUALIFICATION UPDATED SUCCESSFULLY");
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
    ui->new_qual_input->clear();
}


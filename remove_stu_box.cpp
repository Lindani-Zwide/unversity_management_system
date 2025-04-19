#include "remove_stu_box.h"
#include "ui_remove_stu_box.h"
#include <QMessageBox>
#include <QFile>
#include <QStandardPaths>
#include <QDomDocument>
#include <QDir>
#include <QDomNodeList>

    remove_stu_box::remove_stu_box(QWidget *parent)
    : QDialog(parent)
    , ui(QSharedPointer<Ui::remove_stu_box>::create())
{
    // Set up UI components
    ui->setupUi(this);

    // Connect signal and slot for remove student button
    connect(ui->remove_stu_btn, &QPushButton::clicked, this, &remove_stu_box::remove_stu_fn);
}

// Slot to remove student from XML file
void remove_stu_box::remove_stu_fn()
{
    // Get student number from input field
    QString stuNo = ui->stu_num_input->text();

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

    // Iterate through students and remove matching student
    for (int i = 0; i < students.count(); ++i) {
        QDomElement student = students.at(i).toElement();
        QDomElement stuNoElement = student.firstChildElement("stu_no");
        if (stuNoElement.text() == stuNo) {
            QDomNode parentNode = student.parentNode();
            parentNode.removeChild(student);
            studentFound = true;
            break;
        }
    }

    // Save changes to XML file if student was found
    if (studentFound) {
        if (file.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
            QTextStream stream(&file);
            doc.save(stream, 4);
            file.close();
            QMessageBox::information(this, "Success", "STUDENT REMOVED SUCCESSFULLY");
        } else {
            file.close();
            QMessageBox::critical(this, "Error", "Failed to write to data.xml file");
        }
    } else {
        // Display error message if student was not found
        QMessageBox::critical(this, "Error", "Student not found");
    }

    // Clear input field
    ui->stu_num_input->clear();
}

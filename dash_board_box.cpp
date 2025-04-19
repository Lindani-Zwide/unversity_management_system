#include "dash_board_box.h"
#include "ui_dash_board_box.h"
#include <QMessageBox>
#include <QDomDocument>
#include <QFile>
#include <QStandardPaths>
#include <QDir>
#include <regex>

    dash_board_box::dash_board_box(QWidget *parent)
    : QDialog(parent)
    , ui(QSharedPointer<Ui::dash_board_box>::create())
    , m_add_stud_box(QSharedPointer<add_stud_box>::create())
    , m_search_stu_box(QSharedPointer<search_stu_box>::create())
    , m_update_stu_box(QSharedPointer<update_stu_box>::create())
    , m_display_studs_box(QSharedPointer<display_studs_box>::create())
{
    // Set up the UI components
    ui->setupUi(this);

    // Connect signals and slots for dashboard functionality
    connect(ui->pushButton_2, &QPushButton::clicked, this, &dash_board_box::add_stud_fun);
    connect(m_add_stud_box.data(), &add_stud_box::enter_stud, this, &dash_board_box::get_val);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &dash_board_box::search_fun);
    connect(m_search_stu_box.data(), &search_stu_box::on_search, this, &dash_board_box::on_find);
    connect(ui->pushButton_4, &QPushButton::clicked, this, &dash_board_box::update_fun);
    connect(ui->display_studs_btn, &QPushButton::clicked, this, &dash_board_box::display_fun);
}

// Slot to show add student dialog
void dash_board_box::add_stud_fun()
{
    m_add_stud_box->show();
}

// Slot to get student values and save to XML
void dash_board_box::get_val(const QString &stu_no, const QString &f_name, const QString &l_name, const QString &qual)
{
    // Validate input values with regex
    if (!validate_with_regex(stu_no, f_name, l_name, qual)) {
        m_add_stud_box->close();
        return;
    }

    // Save student to XML
    QString path = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);
    QDir().mkpath(path);
    QFile file(path + "/data.xml");
    QDomDocument doc;
    if (file.exists() && file.open(QIODevice::ReadOnly)) {
        doc.setContent(&file);
        file.close();
    } else {
        QDomElement root = doc.createElement("data");
        doc.appendChild(root);
    }

    QDomElement root = doc.documentElement();
    QDomElement student = doc.createElement("student");
    student.appendChild(doc.createElement("stu_no")).appendChild(doc.createTextNode(stu_no));
    student.appendChild(doc.createElement("first_name")).appendChild(doc.createTextNode(f_name));
    student.appendChild(doc.createElement("last_name")).appendChild(doc.createTextNode(l_name));
    student.appendChild(doc.createElement("qualification")).appendChild(doc.createTextNode(qual));
    root.appendChild(student);

    if (file.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
        QTextStream stream(&file);
        doc.save(stream, 4);
        file.close();
        QMessageBox::information(this, "Success", "Student added successfully.");
        m_add_stud_box->close();
    } else {
        QMessageBox::warning(this, "Error", "Unable to save student to file.");
    }
}

// Function to validate input values with regex
bool dash_board_box::validate_with_regex(const QString &stu_no, const QString &f_name, const QString &l_name, const QString &qual)
{
    // Regex patterns for validation
    std::regex stu_no_regex(R"(^\d{4,10}$)");
    std::regex name_regex(R"(^[A-Z][a-z]+(\s[A-Z][a-z]+)*$)");
    std::regex qual_regex(R"(^[A-Za-z\s]{2,50}$)");

    // Validate input values
    if (!std::regex_match(stu_no.toStdString(), stu_no_regex)) {
        QMessageBox::warning(this, "Invalid Input", "Student number must be 4-10 digits.");
        m_add_stud_box->close();
        return false;
    }
    if (!std::regex_match(f_name.toStdString(), name_regex)) {
        QMessageBox::warning(this, "Invalid Input", "First name(s) must start with uppercase and contain only letters.");
        m_add_stud_box->close();
        return false;
    }
    if (!std::regex_match(l_name.toStdString(), name_regex)) {
        QMessageBox::warning(this, "Invalid Input", "Last name must start with uppercase and contain only letters.");
        m_add_stud_box->close();
        return false;
    }
    if (!std::regex_match(qual.toStdString(), qual_regex)) {
        QMessageBox::warning(this, "Invalid Input", "Qualification must be alphabetic and 2-50 characters long.");
        m_add_stud_box->close();
        return false;
    }
    return true;
}

// Slot to show search student dialog
void dash_board_box::search_fun()
{
    m_search_stu_box->show();
}

// Slot to find student by student number
void dash_board_box::on_find(const QString &stu_no)
{
    // Load student data from XML file
    QString path = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);
    QFile file(path + "/data.xml");
    QDomDocument doc;
    if (!file.exists() || !file.open(QIODevice::ReadOnly) || !doc.setContent(&file)) {
        QMessageBox::warning(this, "Error", "Failed to load student data.");
        m_search_stu_box->close();
        return;
    }
    file.close();

    // Search for student by student number
    QDomNodeList students = doc.elementsByTagName("student");
    for (int i = 0; i < students.count(); ++i) {
        QDomElement student = students.at(i).toElement();
        if (student.firstChildElement("stu_no").text() == stu_no) {
            // Display student information
            QString info = "Student number: " + student.firstChildElement("stu_no").text() + "\n" +
                           "First name(s): " + student.firstChildElement("first_name").text() + "\n" +
                           "Last name: " + student.firstChildElement("last_name").text() + "\n" +
                           "Qualification: " + student.firstChildElement("qualification").text();
            QMessageBox::information(this, "Student Found", info);
            m_search_stu_box->close();
            return;
        }
    }
    // Display message if student not found
    QMessageBox::information(this, "Not Found", "Student not found.");
    m_search_stu_box->close();
}

// Slot to show update student dialog
void dash_board_box::update_fun()
{
    m_update_stu_box->show();
}

// Slot to display all students
void dash_board_box::display_fun()
{
    m_display_studs_box->load_students();
    m_display_studs_box->show();
}

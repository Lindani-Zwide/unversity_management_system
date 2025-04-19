#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QStandardPaths>
#include <QCryptographicHash>
#include <QDomDocument>
#include <QFile>
#include <QDir>
#include <regex>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(QSharedPointer<Ui::MainWindow>::create())
    , m_registerBox(QSharedPointer<register_box>::create())
    , m_dashBoardBox(QSharedPointer<dash_board_box>::create())
    {
        // Set up UI components
        ui->setupUi(this);

        // Set password field to password mode
        ui->lineEdit_2->setEchoMode(QLineEdit::Password);

        // Connect signals and slots
        connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::register_fun);
        connect(m_registerBox.data(), &register_box::enterInfor, this, &MainWindow::get_infor);
        connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::login_fun);
        connect(ui->hide_show_password_btn, &QPushButton::clicked, this, &MainWindow::toggle_password_visibility);
    }

    // Slot to show register dialog
    void MainWindow::register_fun()
    {
        m_registerBox->show();
    }

    // Slot to get user information from register dialog
    void MainWindow::get_infor(const QString &name, const QString &password, const QString &password_2)
    {
        // Regex patterns for username and password validation
        std::regex user_n_pattern(R"(^[a-zA-Z][a-zA-Z0-9@_.-]*$)");
        std::regex pw_pattern(R"(^(?=.*[a-z])(?=.*[A-Z])(?=.*\d)(?=.*\W).{8,}$)");

        // Validate username and password
        if (!std::regex_match(name.toStdString(), user_n_pattern)) {
            QMessageBox::warning(this, "Invalid Username", "Username must start with a letter and may contain letters, digits, and @_.-");
            m_registerBox->close();
            return;
        }
        if (!std::regex_match(password.toStdString(), pw_pattern)) {
            QMessageBox::warning(this, "Invalid Password", "Password must include lowercase, uppercase, number, and special character.");
            m_registerBox->close();
            return;
        }
        if (password != password_2) {
            QMessageBox::warning(this, "Mismatch", "Passwords do not match.");
            m_registerBox->close();
            return;
        }
        if (user_exists(name, "")) {
            QMessageBox::warning(this, "Duplicate", "Username already exists.");
            m_registerBox->close();
            return;
        }

        // Hash password and save user to XML
        QString hashed = QString(QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256).toHex());
        save_user_to_xml(name, hashed);

        // Display success message and close register dialog
        QMessageBox::information(this, "Registered", "User registered successfully.");
        m_registerBox->close();
    }

    // Function to save user to XML file
    void MainWindow::save_user_to_xml(const QString &name, const QString &hashedPassword)
    {
        // Get path to XML file
        QString path = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);
        QDir().mkpath(path);
        QFile file(path + "/data.xml");
        QDomDocument doc;

        // Load XML file or create new one if it doesn't exist
        if (file.exists() && file.open(QIODevice::ReadOnly)) {
            doc.setContent(&file);
            file.close();
        } else {
            QDomElement root = doc.createElement("data");
            doc.appendChild(root);
        }

        // Get root element and create new user element
        QDomElement root = doc.documentElement();
        if (root.isNull()) {
            root = doc.createElement("data");
            doc.appendChild(root);
        }
        QDomElement user = doc.createElement("user");
        QDomElement nameElem = doc.createElement("name");
        QDomElement passElem = doc.createElement("password");
        nameElem.appendChild(doc.createTextNode(name));
        passElem.appendChild(doc.createTextNode(hashedPassword));
        user.appendChild(nameElem);
        user.appendChild(passElem);
        root.appendChild(user);

        // Save XML file
        if (file.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
            QTextStream stream(&file);
            doc.save(stream, 4);
            file.close();
        } else {
            QMessageBox::warning(this, "Error", "Unable to write XML file.");
        }
    }

    // Function to check if user exists
    bool MainWindow::user_exists(const QString &name, const QString &hashedPassword)
    {
        // Get path to XML file
        QString path = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);
        QFile file(path + "/data.xml");
        QDomDocument doc;

        // Check if file exists and can be opened
        if (!file.exists() || !file.open(QIODevice::ReadOnly)) {
            return false;
        }
        if (!doc.setContent(&file)) {
            file.close();
            return false;
        }
        file.close();

        // Get list of users
        QDomNodeList users = doc.elementsByTagName("user");

        // Iterate through users and check if username and password match
        for (int i = 0; i < users.count(); ++i) {
            QDomElement user = users.at(i).toElement();
            QString storedName = user.firstChildElement("name").text();
            QString storedPassword = user.firstChildElement("password").text();
            if (storedName == name && (hashedPassword.isEmpty() || storedPassword == hashedPassword)) {
                return true;
            }
        }
        return false;
    }

    // Slot to handle login functionality
    void MainWindow::login_fun()
    {
        // Get username and password from input fields
        QString name = ui->lineEdit->text();
        QString password = ui->lineEdit_2->text();

        // Hash password
        QString hashed = QString(QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256).toHex());

        // Check if user exists and password is correct
        if (user_exists(name, hashed)) {
            // Show dashboard if login is successful
            m_dashBoardBox->show();
        } else {
            // Display error message if login fails
            QMessageBox::warning(this, "Login Failed", "Incorrect Username or Password.");
        }

        // Clear input fields
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
    }

    // Slot to toggle password visibility
    void MainWindow::toggle_password_visibility()
    {
        // Check current echo mode of password field
        if (ui->lineEdit_2->echoMode() == QLineEdit::Password) {
            // Show password
            ui->lineEdit_2->setEchoMode(QLineEdit::Normal);
            ui->hide_show_password_btn->setText("Hide");
        } else {
            // Hide password
            ui->lineEdit_2->setEchoMode(QLineEdit::Password);
            ui->hide_show_password_btn->setText("Show");
        }
}


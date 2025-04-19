#include "register_box.h"
#include "ui_register_box.h"

register_box::register_box(QWidget *parent)
    : QDialog(parent)
    , ui(QSharedPointer<Ui::register_box>::create())
{
    // Set up UI components
    ui->setupUi(this);

    // Connect signal and slot for register button
    connect(ui->pushButton_2, &QPushButton::clicked, this, &register_box::get_user_val);
}

// Slot to get user values from input fields
void register_box::get_user_val()
{
    // Get username and passwords from input fields
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();
    QString password_2 = ui->lineEdit_3->text();

    // Emit signal with user information
    emit enterInfor(username, password, password_2);

    // Clear input fields
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
    ui->lineEdit_3->setText("");
}

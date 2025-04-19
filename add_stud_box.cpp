// Sub-dialog for adding a new student on the dashboard
#include "add_stud_box.h"
#include "ui_add_stud_box.h"

add_stud_box::add_stud_box(QWidget *parent)
    : QDialog(parent)
    , ui(QSharedPointer<Ui::add_stud_box>::create())
{
    // Set up the UI components
    ui->setupUi(this);

    // Connect the "Add Student" button click signal to the get_val slot
    connect(ui->pushButton_2, &QPushButton::clicked, this, &add_stud_box::get_val);
}

// Slot to retrieve input values and emit signal to add student
void add_stud_box::get_val()
{
    // Get input values from the text fields
    QString stu_no = ui->lineEdit->text();   // Student number
    QString f_name = ui->lineEdit_2->text();  // First name
    QString l_name = ui->lineEdit_3->text();  // Last name
    QString qual = ui->lineEdit_4->text();    // Qualification

    // Emit signal to add student with input values
    emit enter_stud(stu_no, f_name, l_name, qual);

    // Clear input fields for next entry
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
    ui->lineEdit_3->setText("");
    ui->lineEdit_4->setText("");
}

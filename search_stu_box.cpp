#include "search_stu_box.h"
#include "ui_search_stu_box.h"

search_stu_box::search_stu_box(QWidget *parent)
    : QDialog(parent)
    , ui(QSharedPointer<Ui::search_stu_box>::create())
{
    // Set up UI components
    ui->setupUi(this);

    // Connect signal and slot for search button
    connect(ui->pushButton_2, &QPushButton::clicked, this, &search_stu_box::search_fun);
}

// Slot to handle search functionality
void search_stu_box::search_fun()
{
    // Get student number from input field
    QString stu_no = ui->lineEdit->text();

    // Emit signal with student number
    emit on_search(stu_no);

    // Clear input field
    ui->lineEdit->setText("");
}

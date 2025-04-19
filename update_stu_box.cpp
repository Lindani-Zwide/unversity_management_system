#include "update_stu_box.h"
#include "ui_update_stu_box.h"
#include <QMessageBox>

update_stu_box::update_stu_box(QWidget *parent)
    : QDialog(parent)
    , ui(QSharedPointer<Ui::update_stu_box>::create())
    , m_update_f_names_box(QSharedPointer<update_f_names_box>::create())
    , m_update_l_name_box(QSharedPointer<update_l_name_box>::create())
    , m_update_qual_box(QSharedPointer<update_qual_box>::create())
    , m_remove_stu_box(QSharedPointer<remove_stu_box>::create())
{
    // Set up UI components
    ui->setupUi(this);

    // Connect signals and slots for buttons
    connect(ui->update_f_names_btn, &QPushButton::clicked, this, &update_stu_box::update_stu_f_names);
    connect(m_update_f_names_box.data(), &update_f_names_box::show_infor, this, &update_stu_box::get_infor);
    connect(ui->update_l_name_btn, &QPushButton::clicked, this, &update_stu_box::update_stu_l_name);
    connect(ui->update_qual_btn, &QPushButton::clicked, this, &update_stu_box::update_qual_fun);
    connect(ui->remove_stu_btn, &QPushButton::clicked, this, &update_stu_box::remove_stu_fun);
}

// Slot to show update first names dialog
void update_stu_box::update_stu_f_names()
{
    m_update_f_names_box->show();
}

// Slot to get information (currently empty)
void update_stu_box::get_infor()
{
}

// Slot to show update last name dialog
void update_stu_box::update_stu_l_name()
{
    m_update_l_name_box->show();
}

// Slot to show update qualification dialog
void update_stu_box::update_qual_fun()
{
    m_update_qual_box->show();
}

// Slot to show remove student dialog
void update_stu_box::remove_stu_fun()
{
    m_remove_stu_box->show();
}

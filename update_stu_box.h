#ifndef UPDATE_STU_BOX_H
#define UPDATE_STU_BOX_H

#include <QDialog>
#include "update_f_names_box.h"
#include "update_l_name_box.h"
#include "update_qual_box.h"
#include "remove_stu_box.h"
#include <QSharedPointer>

namespace Ui {
class update_stu_box;
}

class update_stu_box : public QDialog
{
    Q_OBJECT

public:
    explicit update_stu_box(QWidget *parent = nullptr);

private slots:
    void update_stu_f_names();
    void get_infor();
    void update_stu_l_name();
    void update_qual_fun();
    void remove_stu_fun();

private:
    QSharedPointer<Ui::update_stu_box > ui;
    QSharedPointer<update_f_names_box > m_update_f_names_box;
    QSharedPointer<update_l_name_box > m_update_l_name_box;
    QSharedPointer<update_qual_box > m_update_qual_box;
    QSharedPointer<remove_stu_box> m_remove_stu_box;
};

#endif // UPDATE_STU_BOX_H

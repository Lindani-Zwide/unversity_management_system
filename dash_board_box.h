// dash_board_box.h
#ifndef DASH_BOARD_BOX_H
#define DASH_BOARD_BOX_H

#include <QDialog>
#include "add_stud_box.h"
#include "search_stu_box.h"
#include "update_stu_box.h"
#include "QStringList"
#include "display_studs_box.h"
#include <QSharedDataPointer>

namespace Ui {
    class dash_board_box;
}

class dash_board_box : public QDialog
{
    Q_OBJECT

public:
    QStringList stu_nums;
    QStringList f_names;
    QStringList l_names;
    QStringList quals;
    explicit dash_board_box(QWidget *parent = nullptr);

private slots:
    void add_stud_fun();
    void get_val(const QString &stu_no,const QString &f_name,const QString &l_name,const QString &qual);
    void search_fun();
    void on_find(const QString &stu_no);
    void update_fun();
    void display_fun();
    bool validate_with_regex(const QString &stu_no, const QString &f_name, const QString &l_name, const QString &qual);

private:
    QSharedPointer<Ui::dash_board_box > ui;
    QSharedPointer<add_stud_box > m_add_stud_box;
    QSharedPointer<search_stu_box > m_search_stu_box;
    QSharedPointer<update_stu_box> m_update_stu_box;
    QSharedPointer<display_studs_box> m_display_studs_box;
};

#endif // DASH_BOARD_BOX_H





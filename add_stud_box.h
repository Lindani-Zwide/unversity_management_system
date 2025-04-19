//SUB DIALOG ON DASH BOARD
#ifndef ADD_STUD_BOX_H
#define ADD_STUD_BOX_H
#include <QSharedPointer>

#include <QDialog>

namespace Ui {
class add_stud_box;
}

class add_stud_box : public QDialog
{
    Q_OBJECT

public:
    explicit add_stud_box(QWidget *parent = nullptr);

signals:
    void enter_stud(const QString &stu_no,const QString &f_name,const QString &l_name,const QString &qual);
private slots:
    void get_val();
private:
    QSharedPointer<Ui::add_stud_box> ui;
};

#endif // ADD_STUD_BOX_H

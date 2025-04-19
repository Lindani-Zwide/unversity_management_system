#ifndef UPDATE_F_NAMES_BOX_H
#define UPDATE_F_NAMES_BOX_H

#include <QDialog>
#include <QSharedPointer>

namespace Ui {
class update_f_names_box;
}

class update_f_names_box : public QDialog
{
    Q_OBJECT

public:
    explicit update_f_names_box(QWidget *parent = nullptr);

signals:
    void show_infor();
private slots:
    void update_f_names_fun();

private:
    QSharedPointer<Ui::update_f_names_box> ui;

};

#endif // UPDATE_F_NAMES_BOX_H

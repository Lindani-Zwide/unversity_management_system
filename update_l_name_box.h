#ifndef UPDATE_L_NAME_BOX_H
#define UPDATE_L_NAME_BOX_H

#include <QDialog>
#include <QSharedPointer>

namespace Ui {
class update_l_name_box;
}

class update_l_name_box : public QDialog
{
    Q_OBJECT

public:
    explicit update_l_name_box(QWidget *parent = nullptr);

private slots:
    void update_l_name_fun();

private:
    QSharedPointer<Ui::update_l_name_box > ui;
};

#endif // UPDATE_L_NAME_BOX_H

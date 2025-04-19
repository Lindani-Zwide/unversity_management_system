#ifndef REMOVE_STU_BOX_H
#define REMOVE_STU_BOX_H

#include <QDialog>
#include <QSharedDataPointer>

namespace Ui {
class remove_stu_box;
}

class remove_stu_box : public QDialog
{
    Q_OBJECT

public:
    explicit remove_stu_box(QWidget *parent = nullptr);

private slots:
    void remove_stu_fn();

private:
    QSharedPointer<Ui::remove_stu_box> ui;
};

#endif // REMOVE_STU_BOX_H

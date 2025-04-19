#ifndef UPDATE_QUAL_BOX_H
#define UPDATE_QUAL_BOX_H

#include <QDialog>
#include <QSharedPointer>

namespace Ui {
class update_qual_box;
}

class update_qual_box : public QDialog
{
    Q_OBJECT

public:
    explicit update_qual_box(QWidget *parent = nullptr);

private slots:
    void update_qual_fun();

private:
    QSharedPointer<Ui::update_qual_box> ui;
};

#endif // UPDATE_QUAL_BOX_H

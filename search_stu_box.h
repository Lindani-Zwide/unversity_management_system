#ifndef SEARCH_STU_BOX_H
#define SEARCH_STU_BOX_H

#include <QDialog>
#include <QSharedPointer>
namespace Ui {
class search_stu_box;
}

class search_stu_box : public QDialog
{
    Q_OBJECT
signals:
    void on_search(const QString &stu_no);

public:
    explicit search_stu_box(QWidget *parent = nullptr);

private slots:
    void search_fun();

private:
    QSharedPointer<Ui::search_stu_box> ui;
};

#endif // SEARCH_STU_BOX_H

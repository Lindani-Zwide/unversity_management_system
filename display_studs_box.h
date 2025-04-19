#ifndef DISPLAY_STUDS_BOX_H
#define DISPLAY_STUDS_BOX_H

#include <QDialog>
#include <QSharedPointer>

namespace Ui {
class display_studs_box;
}

class display_studs_box : public QDialog
{
    Q_OBJECT

public:
    explicit display_studs_box(QWidget *parent = nullptr);
    void load_students();      // Loads and displays all students from XML
private slots:
    void delete_studs_fun();   // Triggered when "Delete All" button is clicked

private:
    QSharedPointer<Ui::display_studs_box> ui;
};

#endif // DISPLAY_STUDS_BOX_H

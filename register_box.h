#ifndef REGISTER_BOX_H
#define REGISTER_BOX_H
#include <QSharedPointer>

#include <QDialog>

namespace Ui {
class register_box;
}

class register_box : public QDialog
{
    Q_OBJECT

public:
    explicit register_box(QWidget *parent = nullptr);
signals:
    void enterInfor(const QString &username,const QString &password,const QString &password_2);
private slots:
    void get_user_val();

private:
    QSharedPointer<Ui::register_box> ui;
};

#endif // REGISTER_BOX_H

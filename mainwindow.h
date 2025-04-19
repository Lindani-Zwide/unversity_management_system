#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSharedPointer>
#include <QDomDocument>
#include <QFile>
#include <QDir>
#include <QStandardPaths>
#include <QCryptographicHash>
#include <QMessageBox>
#include "register_box.h"
#include "dash_board_box.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class register_box;
class dash_board_box;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

private slots:
    void register_fun();
    void get_infor(const QString &name, const QString &password, const QString &password_2);
    void login_fun();
    void toggle_password_visibility();
private:
    void save_user_to_xml(const QString &name, const QString &hashedPassword);
    bool user_exists(const QString &name, const QString &hashedPassword);

    QSharedPointer<Ui::MainWindow> ui;
    QSharedPointer<register_box> m_registerBox;
    QSharedPointer<dash_board_box> m_dashBoardBox;
};


#endif // MAINWINDOW_H


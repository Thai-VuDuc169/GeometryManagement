#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QDialog>
#include "mainwindow.h"
namespace Ui {
class LoginForm;
}
class LoginForm : public QDialog
{
    Q_OBJECT

public:
    explicit LoginForm(QWidget *parent = nullptr);
    ~LoginForm();

private slots:
    void on_btnLogin_clicked();

private:
    Ui::LoginForm *ui;
    MainWindow *ShapeManaForm;
};

#endif // LOGINFORM_H

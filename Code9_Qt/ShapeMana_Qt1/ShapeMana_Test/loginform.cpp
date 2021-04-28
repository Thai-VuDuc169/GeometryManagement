#include "loginform.h"
#include "ui_loginform.h"
#include <QMessageBox>
LoginForm::LoginForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginForm)
{
    ui->setupUi(this);
    setWindowTitle("ShapeMana");
    ShapeManaForm = NULL;
}

LoginForm::~LoginForm()
{
    delete ui;
//  delete MainForm;
}

void LoginForm::on_btnLogin_clicked()
{
//    QPushButton *btn = (QPushButton*) sender();
    QString username = ui->lineEdit_Username->text();
    QString passwork = ui->lineEdit_Password->text();
    if (username == "admin" && passwork == "admin" && ui->checkBox->isChecked())
    {
        if (this->ShapeManaForm == NULL)
        {
//            MainForm temp(this);
//            temp.show();
            ShapeManaForm = new MainWindow;
        }
        this->hide();
        ShapeManaForm->show();
        QMessageBox::information(this,"Status","Login is successfully");
    }
    else
    {
        QMessageBox::critical(this,"Status","Login is unsuccessfully");
    }

}

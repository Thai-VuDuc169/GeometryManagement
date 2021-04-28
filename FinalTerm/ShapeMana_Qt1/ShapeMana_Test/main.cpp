#include "mainwindow.h"
#include"loginform.h"
#include"controller.h"
#include"model.h"
#include "painterdialog.h"
#include <QApplication>
#include <QDebug>
//#include<QDataStream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Model *_model = new Model;
    Controller *_controller = new Controller(_model);
    MainWindow *_view = new MainWindow(_controller);
//    PainterDialog p;
//    p.show();
//    LoginForm *_login = new LoginForm(_view);
//    _login->show();
    _view->show();
    return a.exec();
}


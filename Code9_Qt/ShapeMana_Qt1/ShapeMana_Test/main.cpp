#include "mainwindow.h"
#include"loginform.h"
#include"controller.h"
#include"model.h"
#include <QApplication>
#include <QDebug>
#include<QDataStream>

using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Model *_model = new Model;
    Controller *_controller = new Controller(_model);
    MainWindow w(_controller);
    w.show();
    return a.exec();
}

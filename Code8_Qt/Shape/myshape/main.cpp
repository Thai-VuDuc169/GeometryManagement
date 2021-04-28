#include "myshape.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyShape w;
    w.AddShape("New Shape", "0" , "0", "Nope", "Nope");

    w.show();
    return a.exec();
}

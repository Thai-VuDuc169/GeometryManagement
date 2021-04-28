#ifndef MYSHAPE_H
#define MYSHAPE_H

#include <QWidget>
#include "shape.h"
#include <QString>
#include <QVector>

QT_BEGIN_NAMESPACE
namespace Ui { class MyShape; }
QT_END_NAMESPACE

class QListWidgetItem;
class ShapeDialog;

class MyShape : public QWidget
{
    Q_OBJECT

public:
    MyShape(QWidget *parent = nullptr);
    ~MyShape();

    void AddShape(Shape* shape);
    void AddShape(QString type);
    void AddShape(QString type, QString x, QString y, QString color, QString thickness);

    void RemoveShape(Shape* shape);
private slots:
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::MyShape *ui;

    QVector<Shape*> m_Shape;
    ShapeDialog* m_ShapeDialog;
};
#endif // MYSHAPE_H

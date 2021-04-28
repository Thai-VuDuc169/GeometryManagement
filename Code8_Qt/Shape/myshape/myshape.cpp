#include "myshape.h"
#include "ui_myshape.h"
#include "shape.h"
#include "shapedialog.h"
#include <QListWidgetItem>

MyShape::MyShape(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyShape)
{
    ui->setupUi(this);
    m_ShapeDialog = new ShapeDialog;


}

void MyShape::AddShape(Shape *shape)
{
    ui->listWidget->addItem((QListWidgetItem*) shape);
    m_Shape.push_back(shape);
}

void MyShape::AddShape(QString type)
{
    Shape* shape = new Shape(type);
    AddShape(shape);
}

void MyShape::AddShape(QString type, QString x, QString y, QString color, QString thickness)
{
    Shape* shape = new Shape(type, x, y, color, thickness);
    AddShape(shape);
}

void MyShape::RemoveShape(Shape *shape)
{
    ui->listWidget->removeItemWidget((QListWidgetItem*) shape);
    for (int i=0; i < m_Shape.size(); ++i)
    {
        if(m_Shape[i] == shape)
        {
            m_Shape.remove(i);
            delete shape;
        }
    }
}
void MyShape::on_listWidget_itemDoubleClicked(QListWidgetItem* item)
{
    m_ShapeDialog->Show((Shape*) item);
}
MyShape::~MyShape()
{
    for( int i =0; i< m_Shape.size(); ++i)
    {
        RemoveShape(m_Shape[i]);
    }
    delete ui;
    delete m_ShapeDialog;
}



void MyShape::on_pushButton_2_clicked()
{
    RemoveShape((Shape*) ui->listWidget->currentItem());
}

void MyShape::on_pushButton_clicked()
{
    AddShape("New Shape");
}

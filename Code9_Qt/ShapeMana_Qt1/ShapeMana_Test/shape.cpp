#include "shape.h"
#include<math.h>

class QListWidgetItem;
/////Defination for Point
float Point::point_distance(Point &A)
{
    return (sqrt( pow((A.x-this->x),2.0) + pow((A.y-this->y),2.0) ));
};
bool Point::operator==(const Point &A)
{
    return ((this->x==A.x)&&(this->y==A.y));
};
/////Defination for Shape
Shape::Shape(QString NameObj)
    :   QListWidgetItem(NameObj)
{};
Shape::Shape(QString NameObj,int x1 ,int y1 ,QString c1 ,QString t1 )
    :   QListWidgetItem(NameObj), color(c1), thickness(t1)
{
    this->O.x = x1;
    this->O.y = y1;
};
Shape::~Shape() {};
QString Shape::GetID()
{
    return QListWidgetItem::text();
};
Point Shape::GetO()
{
    return this->O;
};
QString Shape::GetColor()
{
    return this->color;
};
QString Shape::GetThickness()
{
    return this->thickness;
};
void Shape::SetID(QString id)
{
    QListWidgetItem::setText(id);
};
void Shape::SetO(Point o)
{
    this->O = o;
};
void Shape::SetColor(QString c)
{
    this->color = c;
};
void Shape::SetThickness(QString t)
{
    this->thickness = t;
};
///Defination for Circle
Circle::Circle(QString NameObj, int x1 ,int y1 ,int r1 ,QString c1,QString t1)
    :   Shape(NameObj,x1,y1,c1,t1), radius(r1)
{};
QString Circle::GetName()
{
      return QString("Circle");
};
int Circle::GetRadius()
{
    return this->radius;
};
void Circle::SetRadius(int r)
{
    this->radius = r;
}
///Defination for Square
Square::Square(QString NameObj, int x1 ,int y1 ,int e1 ,QString c1,QString t1)
    :   Shape(NameObj,x1,y1,c1,t1), edge(e1)
{};
QString Square::GetName()
{
      return QString("Square");
};
int Square::GetEdge()
{
    return this->edge;
};
void Square::SetEdge(int e)
{
    this->edge = e;
}


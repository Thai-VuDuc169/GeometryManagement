#include "shape.h"
#include<math.h>

class QListWidgetItem;

/////Defination for Point
    //float Point::point_distance(Point &A)
    //{
    //    return (sqrt( pow((A.x-this->x),2.0) + pow((A.y-this->y),2.0) ));
    //};
    //bool Point::operator==(const Point &A)
    //{
    //    return ((this->x==A.x)&&(this->y==A.y));
    //};
/////Defination for Shape
Shape::Shape(QString NameObj)
    :   QListWidgetItem(NameObj)
{};
Shape::Shape(QString NameObj,int x1 ,int y1 ,QString c1 ,int t1 )
    :   QListWidgetItem(NameObj), color(c1), thickness(t1)
{
    this->O.setX(x1);
    this->O.setY(y1);
};
Shape::~Shape() {};
QString Shape::GetID()
{
    return QListWidgetItem::text();
};
QPoint Shape::GetO() const // ?
{
    return this->O;
};
QString Shape::GetColor()
{
    return this->color;
};
int Shape::GetThickness()
{
    return this->thickness;
};
void Shape::SetID(QString id)
{
    QListWidgetItem::setText(id);
};
void Shape::SetO(int x, int y)
{
    this->O.setX(x);
    this->O.setY(y);
};
void Shape::SetColor(QString c)
{
    this->color = c;
};
void Shape::SetThickness(int t)
{
    this->thickness = t;
};

void Shape::InsertEdge(Edge *s)
{
    this->SetEdge.insert(s);
};
QSet<Edge*>& Shape::GetSetEdge()
{
    return this->SetEdge;
};
bool Shape::IsEmpty()
{
    return this->SetEdge.isEmpty();
};
bool Shape::CheckShapeIdInsideSet(Shape *s)
{
    for(Edge* it : SetEdge)
    {
        if((s->GetID() == it->GetShape1()->GetID() && this->GetID() == it->GetShape2()->GetID())
                || (s->GetID() == it->GetShape2()->GetID() && this->GetID() == it->GetShape1()->GetID()))
        {
            return true;
        }
    }
    return false;
};

///Defination for Edge
Edge::Edge(QString NameObj, Shape* s1, Shape* s2, QString e1, int t1)
    : QListWidgetItem(NameObj), Shape1(s1), Shape2(s2), EColor(e1), EThickness(t1)
{};
QString Edge::GetID()
{
    return QListWidgetItem::text();
}
Shape* Edge::GetShape1()
{
    return this->Shape1;
};
Shape* Edge::GetShape2()
{
    return this->Shape2;
};
QString  Edge::GetEColor()
{
    return this->EColor;
};
int Edge::GetEThickness()
{
    return this->EThickness;
};
void Edge::SetID(QString Id)
{
    QListWidgetItem::setText(Id);
}
void Edge::SetShape1(Shape *temp)
{
    this->Shape1 = temp;
};
void Edge::SetShape2(Shape *temp)
{
    this->Shape2 = temp;
};
void Edge::SetEColor(QString c)
{
    this->EColor = c;
};
void Edge::SetEThickness(int t)
{
    this->EThickness = t;
}
///Defination for Circle
Circle::Circle(QString NameObj, int x1 ,int y1 ,int r1 ,QString c1,int t1)
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
};
///Defination for Square
Square::Square(QString NameObj, int x1 ,int y1 ,int e1 ,QString c1,int t1)
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
///Defination for Oval
Oval::Oval(QString NameObj, int x1 ,int y1 ,int w, int h ,QString c1,int t1)
    :   Shape(NameObj,x1,y1,c1,t1), width(w), height(h)
{};
QString Oval::GetName()
{
      return QString("Oval");
};
int Oval::GetWidth()
{
    return this->width;
};
int Oval::GetHeight()
{
    return this->height;
};
void Oval::SetWidth(int w)
{
    this->width = w;
};
void Oval::SetHeight(int h)
{
    this->height = h;
};
///Defination for Rectangle
Rectangle::Rectangle(QString NameObj, int x1 ,int y1 ,int w, int h ,QString c1,int t1)
    :   Shape(NameObj,x1,y1,c1,t1), width(w), height(h)
{};
QString Rectangle::GetName()
{
      return QString("Rectangle");
};
int Rectangle::GetWidth()
{
    return this->width;
};
int Rectangle::GetHeight()
{
    return this->height;
};
void Rectangle::SetWidth(int w)
{
    this->width = w;
};
void Rectangle::SetHeight(int h)
{
    this->height = h;
};
///Defination for Line
Line::Line(QString NameObj,int xa,int ya,int xb,int yb,QString c1,int t1 )
    :   Shape(NameObj,xa,ya,c1,t1)
{
    this->A.setX(xa);
    this->A.setY(ya);
    this->B.setX(xb);
    this->B.setY(yb);
    this->O.setX((xb+xa)/2);
    this->O.setY((yb+ya)/2);
};
QString Line::GetName()
{
    return QString("Line");
};
QPoint Line::GetA()
{
    return A;
};
QPoint Line::GetB()
{
    return B;
};
void Line::SetA(int x, int y)
{
    this->A.setX(x);
    this->A.setY(y);
    this->O.setX((x+B.x())/2);
    this->O.setY((y+B.y())/2);
};
void Line::SetB(int x, int y)
{
    this->B.setX(x);
    this->B.setY(y);
    this->O.setX((x+A.x())/2);
    this->O.setY((y+A.y())/2);
};
///Defination for Triangle
Triangle::Triangle(QString NameObj,int x1,int y1,int x2,int y2,int x3,int y3, QString c1,int t1)
    :   Shape(NameObj,x1,y1,c1,t1)
{
    this->A.setX(x1);
    this->A.setY(y1);
    this->B.setX(x2);
    this->B.setY(y2);
    this->C.setX(x3);
    this->C.setY(y3);
    this->O.setX((x1+x2+x3)/3);
    this->O.setY((y1+y2+y3)/3);
};
QString Triangle::GetName()
{
      return QString("Triangle");
};
QPoint Triangle::GetA()
{
    return A;
};
QPoint Triangle::GetB()
{
    return B;
};
QPoint Triangle::GetC()
{
    return C;
};
void Triangle::SetA(int x, int y)
{
    this->A.setX(x);
    this->A.setY(y);
    this->O.setX((x+B.x()+C.x())/3);
    this->O.setY((y+B.y()+C.y())/3);
};
void Triangle::SetB(int x, int y)
{
    this->B.setX(x);
    this->B.setY(y);
    this->O.setX((x+A.x()+C.x())/3);
    this->O.setY((y+A.y()+C.y())/3);
};
void Triangle::SetC(int x, int y)
{
    this->C.setX(x);
    this->C.setY(y);
    this->O.setX((x+B.x()+A.x())/3);
    this->O.setY((y+B.y()+A.y())/3);
};

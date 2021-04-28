#ifndef SHAPE_H
#define SHAPE_H

#include<QListWidgetItem>
//namespace shapemana
//{

/////Declaration for Point
struct Point
{
    int x;
    int y;
//    Point()
    float point_distance(Point &A);
    bool operator==(const Point &A);
};
/////Declaration for Shape
class Shape  :  public QListWidgetItem
{
protected:
    QString color;  // 0->15
    QString thickness; //1->3
    Point O;    // goc toa do (vi tri tam)
public:
    Shape(QString NameObj);
    virtual ~Shape() ;
    Shape(QString NameObj,int x1=0,int y1=0,QString c1 = QString('0'),QString t1 = QString('0'));
public:
    virtual QString GetName() = 0;

    QString GetID();
    Point GetO();
    QString GetColor();
    QString GetThickness();
    void SetID(QString id);
    void SetO(Point o);
    void SetColor(QString c);
    void SetThickness(QString t);

};
/////Declaration for Edge
class Edge : public QListWidgetItem
{
private:
    QString EColor;
    QString EThickness;
    Shape* Shape1;
    Shape* Shape2;
public:
    Edge(Shape* s1, Shape* s2, QString e1, QString t1);


};
/////Declaration for the subclass of class shape
class Circle : public Shape
{
private:
    int radius;
public:
    QString GetName() override;
    int GetRadius();
    void SetRadius(int r);
public:
    Circle(QString NameObj,int x1=0,int y1=0,int r1 = 0,QString c1 = QString('0'),QString t1 = QString('0'));
};
class Square : public Shape
{
private:
    int edge;
public:
    QString GetName() override;
    int GetEdge();
    void SetEdge(int e);
public:
    Square(QString NameObj,int x1=0,int y1=0,int e1 = 0,QString c1 = QString('0'),QString t1 = QString('0'));
};


#endif // SHAPE_H

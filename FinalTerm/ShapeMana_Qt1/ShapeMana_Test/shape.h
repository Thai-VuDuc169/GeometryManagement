#ifndef SHAPE_H
#define SHAPE_H

#include <QListWidgetItem>
#include <QSet>
#include <QPoint>
//namespace ShapeMana {
//class Rectangle;
//}

/////Declaration for Shape
class Edge;
class Shape  :  public QListWidgetItem
{
protected:
    QString color;  // 0->15
    int thickness; //1->3
    QPoint O;    // goc toa do (vi tri tam)
public:
    Shape(QString NameObj);
    virtual ~Shape() ;
    Shape(QString NameObj,int x1=0,int y1=0,QString c1 = "red",int t1 = 1);
public:
    virtual QString GetName() = 0;
    QString GetID();
    QPoint GetO() const;
    QString GetColor();
    int GetThickness();
    void SetID(QString id);
    void SetO(int x, int y);
    void SetColor(QString c);
    void SetThickness(int t);
//////////////////////SET////////////////////
protected:
    QSet<Edge*> SetEdge;
public:
    void InsertEdge(Edge* s);
    QSet<Edge*>& GetSetEdge();
    bool IsEmpty();
    bool CheckShapeIdInsideSet(Shape* s);
};
//////////////////////SET////////////////////
/////Declaration for Edge
class Edge : public QListWidgetItem
{
private:
    Shape* Shape1;
    Shape* Shape2;
    QString EColor;
    int EThickness;
public:
    Edge(QString NameObj, Shape* s1 = NULL, Shape* s2 = NULL, QString e1 = "red", int t1 = 1);
public:
    QString GetID();
    Shape* GetShape1();
    Shape* GetShape2();
    QString  GetEColor();
    int GetEThickness();
    void SetID(QString Id);
    void SetShape1(Shape* temp);
    void SetShape2(Shape* temp);
    void SetEColor(QString c);
    void SetEThickness(int t);
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
    Circle(QString NameObj,int x1=0,int y1=0,int r1 = 0,QString c1 = "red",int t1 = 1);
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
    Square(QString NameObj,int x1=0,int y1=0,int e1 = 0,QString c1 = "red",int t1 = 1);
};
class Oval : public Shape
{
private:
    int width;
    int height;
public:
    QString GetName() override;
    int GetWidth();
    int GetHeight();
    void SetWidth(int w);
    void SetHeight(int h);
public:
    Oval(QString NameObj,int x1=0,int y1=0,int w = 2, int h = 1,QString c1 = "red",int t1 = 1);
};
class Rectangle : public Shape
{
private:
    int width;
    int height;
public:
    QString GetName() override;
    int GetWidth();
    int GetHeight();
    void SetWidth(int w);
    void SetHeight(int h);
public:
    Rectangle(QString NameObj,int x1=0,int y1=0,int w = 2, int h = 1,QString c1 = "red",int t1 = 1);
};
class Line : public Shape
{
private:
    QPoint A;
    QPoint B;
public:
    QString GetName() override;
    QPoint GetA();
    QPoint GetB();
    void SetA(int x, int y);
    void SetB(int x, int y);
public:
    Line(QString NameObj,int xa=0,int ya=0,int xb=0,int yb=0,QString c1 = "red",int t1 = 1);
};
class Triangle : public Shape
{
private:
    QPoint A;
    QPoint B;
    QPoint C;
public:
    QString GetName() override;
    QPoint GetA();
    QPoint GetB();
    QPoint GetC();
    void SetA(int x, int y);
    void SetB(int x, int y);
    void SetC(int x, int y);
public:
    Triangle(QString NameObj,int xa=0,int ya=0,int xb=0,int yb=0,int xc=0,int yc=0,QString c1 = "red",int t1 = 1);
};

#endif // SHAPE_H

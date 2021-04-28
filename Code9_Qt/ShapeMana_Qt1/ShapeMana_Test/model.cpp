#include "model.h"


Model::Model()
{
    //Load from the database ShapeMana
    //demo database
//    Circle *xx = new Circle("cir001", 3, 2, 1, QString('1'), QString('7'));
//    Circle *yy = new Circle("cir002", 5, 4, 3, QString('2'), QString('8'));
//    Circle *zz = new Circle("cir003", 7, 8, 9, QString('3'), QString('9'));
//    ShapeList.push_back(xx);
//    ShapeList.push_back(yy);
//    ShapeList.push_back(zz);
//    delete xx;
//    delete yy;
//    delete zz;
};
Model::~Model()
{
    for(Shape* it : this->ShapeList)
    {
        delete it;
    }
};
QVector<Shape*> Model::GetList()
{
    return ShapeList;
};
void Model::PushShapeList(Shape *temp)
{
    this->ShapeList.push_back(temp);
};

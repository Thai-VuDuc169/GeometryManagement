#include "model.h"


Model::Model()
{
    //Load from the database ShapeMana
    //demo database
//    Circle *xx = new Circle("cir001", 3, 2, 1, QString('1'), QString('7'));
//    Circle *yy = new Circle("cir002", 5, 4, 3, QString('2'), QString('8'));
//    Circle *zz = new Circle("cir003", 7, 8, 9, QString('3'), QString('9'));
//    ShapeVec.push_back(xx);
//    ShapeVec.push_back(yy);
//    ShapeVec.push_back(zz);
//    delete xx;
//    delete yy;
//    delete zz;
};
Model::~Model()
{
    for(Shape* it : this->ShapeVec)
    {
        delete it;
    }
};
QVector<Shape*>& Model::GetVecShape()
{
    return ShapeVec;
};
void Model::PushVecShape(Shape *temp)
{
    this->ShapeVec.push_back(temp);
};
void Model::ReplaceShape(int index, Shape* temp)
{
    this->ShapeVec.replace(index, temp);
};
void Model::RemoveAtShape(int i)
{
    this->ShapeVec.remove(i);
};
void Model::EraseAtShape(QVector<Shape *>::iterator it)
{
    this->ShapeVec.erase(it);
};
////
QVector<Edge*>& Model::GetVecEdge()
{
    return EdgeVec;
};
void Model::PushVecEdge(Edge *temp)
{
    this->EdgeVec.push_back(temp);
};
void Model::ReplaceEdge(int index, Edge *temp)
{
    this->EdgeVec.replace(index,temp);
};
void Model::RemoveAtEdge(int i)
{
    this->EdgeVec.remove(i);
};
void Model::EraseAtEdge(QVector<Edge *>::iterator it)
{
    this->EdgeVec.erase(it);
};



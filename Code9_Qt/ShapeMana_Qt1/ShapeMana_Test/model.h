#ifndef MODEL_H
#define MODEL_H

#include<QVector>
#include "controller.h"
#include "shape.h"

class Model
{
//    friend class Controller;
private:
    QVector<Shape*> ShapeList;
//    QVector<Edge*>  EdgeList;
public:
    Model();
    ~Model();
    // Declare method to react the database ...
public:
    QVector<Shape*> GetList();
    void PushShapeList(Shape* temp);
};

#endif // MODEL_H

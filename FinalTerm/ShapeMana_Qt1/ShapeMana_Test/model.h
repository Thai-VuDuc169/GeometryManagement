#ifndef MODEL_H
#define MODEL_H

#include<QVector>
#include "controller.h"
#include "shape.h"

class Model
{
friend class Controller;
friend class MainWindow;
private:
    QVector<Shape*> ShapeVec;
    QVector<Edge*>  EdgeVec;
public:
    Model();
    ~Model();
    // Declare method to react the database ...
public:
    QVector<Shape*>& GetVecShape();
    void PushVecShape(Shape* temp);
    void ReplaceShape (int index, Shape* temp);
    void RemoveAtShape (int i);
    void EraseAtShape (QVector<Shape*>::iterator it);
public:
    QVector<Edge*>& GetVecEdge();
    void PushVecEdge(Edge* temp);
    void ReplaceEdge (int index, Edge* temp);
    void RemoveAtEdge (int i);
    void EraseAtEdge (QVector<Edge*>::iterator it);
};

#endif // MODEL_H

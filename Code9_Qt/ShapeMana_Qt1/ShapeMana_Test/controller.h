#ifndef CONTROLLER_H
#define CONTROLLER_H

#include"mainwindow.h"
class Model;
class MainWindow;
class QString;

class Controller
{
friend class MainWindow;
public:
    Model *model;
public:
    Controller(Model* m);
    ~Controller();
public:
    //slots react the table' shape
    void OnAddShapeButtonClicked(MainWindow *view);
//    void OnFindShapeButtonClicked(MainWindow* view);
//    void ClearShapeButtonClicked(MainWindow* view);
//    void EditShapeButtonClicked(MainWindow* view);
//    void RemoveShapeButtonClicked(MainWindow* view);
//public:
//    void OnReloadModel();
};

#endif // CONTROLLER_H

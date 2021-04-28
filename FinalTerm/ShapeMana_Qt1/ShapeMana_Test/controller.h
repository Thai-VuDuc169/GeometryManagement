#ifndef CONTROLLER_H
#define CONTROLLER_H

#include"mainwindow.h"
#include"painterdialog.h"

class Model;
class MainWindow;
class QString;
class PainterDialog;

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
//    void OnEditShapeButtonClicked(MainWindow* view);
    void OnRemoveShapeButtonClicked(MainWindow* view);
    //slots react the table' edge
    void OnAddEdgeButtonClicked(MainWindow *view);
    void OnRemoveEdgeButtonClicked(MainWindow* view);

public:
    void OnDrawShapeButtonClicked();
public:
    PainterDialog *Painter;



};

#endif // CONTROLLER_H

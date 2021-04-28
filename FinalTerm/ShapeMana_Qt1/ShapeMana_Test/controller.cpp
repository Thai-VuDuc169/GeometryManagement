#include "controller.h"
#include "mainwindow.h"
#include "model.h"
#include <QMessageBox>

//using namespace Ui;
Controller::Controller(Model* m)
    :   model(m)
{
    Painter = new PainterDialog;
    Painter->SetModel(this->model);
    Painter->setWindowTitle("ShapeMana_GraphOfShapes");
};
Controller::~Controller()
{
    delete model;
    delete Painter;
};
void Controller::OnAddShapeButtonClicked(MainWindow *view)
{
    this->model->PushVecShape(view->CurrentNewShape);
};

void Controller::OnRemoveShapeButtonClicked(MainWindow *view)
{
    for(int i=0;i < model->GetVecShape().size(); ++i)
    {
        if(view->CurrentNewShape->GetID() == model->GetVecShape().at(i)->GetID())
        {
            model->RemoveAtShape(i);
        }
    }
};
/// Edge
void Controller::OnAddEdgeButtonClicked(MainWindow *view)
{
    this->model->PushVecEdge(view->CurrentNewEdge);

}
void Controller::OnRemoveEdgeButtonClicked(MainWindow *view)
{
    for(int i=0;i < model->GetVecEdge().size(); ++i)
    {
        if(view->CurrentNewEdge->GetID() == model->GetVecEdge().at(i)->GetID())
        {
            model->RemoveAtEdge(i);
        }
    }
    // thieu ham xoa trong tung shape
}


void Controller::OnDrawShapeButtonClicked()
{
    Painter->show();
};




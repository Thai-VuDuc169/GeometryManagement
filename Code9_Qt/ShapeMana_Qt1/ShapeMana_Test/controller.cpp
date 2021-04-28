#include "controller.h"
#include "mainwindow.h"
#include "model.h"
#include <QMessageBox>

//using namespace Ui;
Controller::Controller(Model* m)
    :   model(m)
{};
Controller::~Controller()
{
    delete model;
};
void Controller::OnAddShapeButtonClicked(MainWindow *view)
{
    this->model->PushShapeList(view->CurrentNewShape);
};
//void Controller::OnReloadModel()
//{
////    void (*ptr)() = model->GetList();
//};


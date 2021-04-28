#include "mainwindow.h"

class QListWidgetItem;
MainWindow::MainWindow(Controller *c, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow), controller(c)
{
    ui->setupUi(this);
    this->setWindowTitle("ShapeMana");
    //connect signals and slots...
    connect(ui->pushButton_AddShape, SIGNAL(clicked()), this, SLOT(AddShape()));
    connect(ui->pushButton_ClearTableShape, SIGNAL(clicked()), this, SLOT(ClearShape()));
    ReloadModel();
};
MainWindow::~MainWindow()
{
    delete ui;
    delete CurrentNewShape;
    delete controller;
};
/// slots of the shape'table
void MainWindow::AddShape()
{
    QString TabName = ui->tabWidget_Shape->currentWidget()->objectName();
    if(TabName == "tab_Circle")
    {
        QString id = ui->lineEdit_IdCircle->text();
        for(Shape* it : controller->model->GetList())
        {
            if(id == it->GetID())
            {
                QMessageBox::critical(this,"Status","The Shape'ID is existed, Again!");
                return;
            }
        }
        QString Ox = ui->lineEdit_OxCircle->text();
        QString Oy = ui->lineEdit_OyCircle->text();
        QString Radius = ui->lineEdit_RadiusCircle->text();
        QString Color = ui->lineEdit_ColorCircle->text();
        QString Thickness = ui->lineEdit_ThicknessCircle->text();
        if (id.isEmpty() || Ox.isEmpty() || Oy.isEmpty()|| Radius.isEmpty()|| Color.isEmpty()|| Thickness.isEmpty())
        {
            QMessageBox::critical(this,"Stutus","one of the arguments is empty");
            return;
        }
        this->CurrentNewShape = new Circle(id,Ox.toInt(),Oy.toInt(),Radius.toInt(),Color,Thickness);
        QMessageBox::information(this,"Stutus","Add a new shape succussfully");
    }
    if(TabName == "tab_Square")
    {
        QString id = ui->lineEdit_IdSquare->text();
        for(Shape* it : controller->model->GetList())
        {
            if(id == it->GetID())
            {
                QMessageBox::critical(this,"Status","The Shape'ID is existed, Again!");
                return;
            }
        }
        QString Ox = ui->lineEdit_OxSquare->text();
        QString Oy = ui->lineEdit_OySquare->text();
        QString Edge = ui->lineEdit_EdgeSquare->text();
        QString Color = ui->lineEdit_ColorSquare->text();
        QString Thickness = ui->lineEdit_ThicknessSquare->text();
        this->CurrentNewShape = new Square(id,Ox.toInt(),Oy.toInt(),Edge.toInt(),Color,Thickness);
        if (id.isEmpty() || Ox.isEmpty() || Oy.isEmpty()|| Edge.isEmpty()|| Color.isEmpty()|| Thickness.isEmpty())
        {
            QMessageBox::critical(this,"Stutus","one of the arguments is empty");
            return;
        }
        this->CurrentNewShape = new Square(id,Ox.toInt(),Oy.toInt(),Edge.toInt(),Color,Thickness);
        QMessageBox::information(this,"Stutus","Add a new shape succussfully");
    }
    controller->OnAddShapeButtonClicked(this);
    this->ReloadModel();
    this->ClearShape();
};
void MainWindow::ClearShape()
{
    ui->lineEdit_IdCircle->clear();
    ui->lineEdit_OxCircle->clear();
    ui->lineEdit_OyCircle->clear();
    ui->lineEdit_RadiusCircle->clear();
    ui->lineEdit_ColorCircle->clear();
    ui->lineEdit_ThicknessCircle->clear();

    ui->lineEdit_IdSquare->clear();
    ui->lineEdit_OxSquare->clear();
    ui->lineEdit_OySquare->clear();
    ui->lineEdit_EdgeSquare->clear();
    ui->lineEdit_ColorSquare->clear();
    ui->lineEdit_ThicknessSquare->clear();
};
/// slots of the edge'table

/// Global used functions
void MainWindow::ReloadModel()
{
    for(Shape* it : controller->model->GetList())
    {
        ui->listWidget_Shape->addItem((QListWidgetItem*) it);
    }
};
///Signals of the View
void MainWindow::on_listWidget_Shape_itemDoubleClicked(QListWidgetItem *item)
{
    QString name  =((Shape*)item)->GetName();
    if (name == "Circle")
    {
        Circle* TempShape = (Circle*)item;
        ui->tabWidget_Shape->setCurrentIndex(0);
        ui->lineEdit_IdCircle->setText(TempShape->GetID());
        ui->lineEdit_OxCircle->setText(QString::number(TempShape->GetO().x));
        ui->lineEdit_OyCircle->setText(QString::number(TempShape->GetO().y));
        ui->lineEdit_RadiusCircle->setText(QString::number(TempShape->GetRadius()));
        ui->lineEdit_ColorCircle->setText(TempShape->GetColor());
        ui->lineEdit_ThicknessCircle->setText(TempShape->GetThickness());
    }
    if (name == "Square")
    {
        Square* TempShape = (Square*)item;
        ui->tabWidget_Shape->setCurrentIndex(0);
        ui->lineEdit_IdCircle->setText(TempShape->GetID());
        ui->lineEdit_OxCircle->setText(QString::number(TempShape->GetO().x));
        ui->lineEdit_OyCircle->setText(QString::number(TempShape->GetO().y));
        ui->lineEdit_RadiusCircle->setText(QString::number(TempShape->GetEdge()));
        ui->lineEdit_ColorCircle->setText(TempShape->GetColor());
        ui->lineEdit_ThicknessCircle->setText(TempShape->GetThickness());
    }
}


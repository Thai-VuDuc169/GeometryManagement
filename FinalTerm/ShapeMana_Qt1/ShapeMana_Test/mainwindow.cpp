#include "mainwindow.h"

class QListWidgetItem;
MainWindow::MainWindow(Controller *c, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow), controller(c)
{
    ui->setupUi(this);
    this->setWindowTitle("ShapeMana");
    //connect signals and slots of the shape'table
    connect(ui->pushButton_AddShape, SIGNAL(clicked()), this, SLOT(AddShape()));
    connect(ui->pushButton_ClearTableShape, SIGNAL(clicked()), this, SLOT(ClearShape()));
    connect(ui->pushButton_EditShape, SIGNAL(clicked()), this, SLOT(EditShape()));
    connect(ui->pushButton_RemoveShape, SIGNAL(clicked()), this, SLOT(RemoveShape()));
    //connect(ui->pushButton_FindShape, SIGNAL(clicked()), this, SLOT())
    //connect signals and slots of the edge'table
    connect(ui->pushButton_ClearTableEdge,SIGNAL(clicked()),this, SLOT(ClearEdge()));
    connect(ui->pushButton_AddEdge, SIGNAL(clicked()), this, SLOT(AddEdge()));
    connect(ui->pushButton_EditEdge,SIGNAL(clicked()), this, SLOT(EditEdge()));
    connect(ui->pushButton_RemoveEdge,SIGNAL(clicked()), this, SLOT(RemoveEdge()));
    //connect signals and slots of the drawshapebutton
    connect(ui->pushButton_DrawShapes, SIGNAL(clicked()), this, SLOT(DrawShapes()));

    //test qDebug()
//    qDebug() << ui->listWidget_Shape->currentRow();
//    qDebug() << ui->listWidget_Edge->currentRow();
    ReloadModelShape();
//    ReloadModelEdge();
};
MainWindow::~MainWindow()
{
    delete ui;
    delete CurrentNewShape;
    delete CurrentNewEdge;
    delete controller;
};
///check agr
//void MainWindow::CheckData()
//{

//}
/// slots of the shape'table
void MainWindow::AddShape()
{
    QString TabName = ui->tabWidget_Shape->currentWidget()->objectName();
    if(TabName == "tab_Circle")
    {
        QString id = ui->lineEdit_IdCircle->text();
        for(Shape* it : controller->model->GetVecShape())
        {
            if(id == it->GetID())
            {
                QMessageBox::critical(this,"Status","The Shape'ID has existed, Again!");
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
        this->CurrentNewShape = new Circle(id,Ox.toInt(),Oy.toInt(),Radius.toInt(),Color,Thickness.toInt());
        QMessageBox::information(this,"Stutus","Add a new shape succussfully");
    }
    if(TabName == "tab_Square")
    {
        QString id = ui->lineEdit_IdSquare->text();
        for(Shape* it : controller->model->GetVecShape())
        {
            if(id == it->GetID())
            {
                QMessageBox::critical(this,"Status","The Shape'ID has existed, Again!");
                return;
            }
        }
        QString Ox = ui->lineEdit_OxSquare->text();
        QString Oy = ui->lineEdit_OySquare->text();
        QString Edge = ui->lineEdit_EdgeSquare->text();
        QString Color = ui->lineEdit_ColorSquare->text();
        QString Thickness = ui->lineEdit_ThicknessSquare->text();
        if (id.isEmpty() || Ox.isEmpty() || Oy.isEmpty()|| Edge.isEmpty()|| Color.isEmpty()|| Thickness.isEmpty())
        {
            QMessageBox::critical(this,"Stutus","one of the arguments is empty");
            return;
        }
        this->CurrentNewShape = new Square(id,Ox.toInt(),Oy.toInt(),Edge.toInt(),Color,Thickness.toInt());
        QMessageBox::information(this,"Stutus","Add a new shape succussfully");
    }
    if(TabName == "tab_Oval")
    {
        QString id = ui->lineEdit_IdOval->text();
        for(Shape* it : controller->model->GetVecShape())
        {
            if(id == it->GetID())
            {
                QMessageBox::critical(this,"Status","The Shape'ID has existed, Again!");
                return;
            }
        }
        QString Ox = ui->lineEdit_OxOval->text();
        QString Oy = ui->lineEdit_OyOval->text();
        QString Width = ui->lineEdit_WidthOval->text();
        QString Height = ui->lineEdit_HeightOval->text();
        QString Color = ui->lineEdit_ColorOval->text();
        QString Thickness = ui->lineEdit_ThicknessOval->text();
        if (id.isEmpty() || Ox.isEmpty() || Oy.isEmpty()|| Width.isEmpty()|| Height.isEmpty() || Color.isEmpty()|| Thickness.isEmpty())
        {
            QMessageBox::critical(this,"Stutus","one of the arguments is empty");
            return;
        }
        this->CurrentNewShape = new Oval(id,Ox.toInt(),Oy.toInt(),Width.toInt(),Height.toInt(),Color,Thickness.toInt());
        QMessageBox::information(this,"Stutus","Add a new oval succussfully");
    }
    if(TabName == "tab_Rectangle")
    {
        QString id = ui->lineEdit_IdRectangle->text();
        for(Shape* it : controller->model->GetVecShape())
        {
            if(id == it->GetID())
            {
                QMessageBox::critical(this,"Status","The Shape'ID has existed, Again!");
                return;
            }
        }
        QString Ox = ui->lineEdit_OxRectangle->text();
        QString Oy = ui->lineEdit_OyRectangle->text();
        QString Width = ui->lineEdit_WidthRectangle->text();
        QString Height = ui->lineEdit_HeightRectangle->text();
        QString Color = ui->lineEdit_ColorRectangle->text();
        QString Thickness = ui->lineEdit_ThicknessRectangle->text();
        if (id.isEmpty() || Ox.isEmpty() || Oy.isEmpty()|| Width.isEmpty()|| Height.isEmpty() || Color.isEmpty()|| Thickness.isEmpty())
        {
            QMessageBox::critical(this,"Stutus","one of the arguments is empty");
            return;
        }
        this->CurrentNewShape = new class Rectangle(id,Ox.toInt(),Oy.toInt(),Width.toInt(),Height.toInt(),Color,Thickness.toInt());
        QMessageBox::information(this,"Stutus","Add a new rectangle succussfully");
    }
    if(TabName == "tab_Line")
    {
        QString id = ui->lineEdit_IdLine->text();
        for(Shape* it : controller->model->GetVecShape())
        {
            if(id == it->GetID())
            {
                QMessageBox::critical(this,"Status","The Shape'ID has existed, Again!");
                return;
            }
        }
        QString Ax = ui->lineEdit_AxLine->text();
        QString Ay = ui->lineEdit_AyLine->text();
        QString Bx = ui->lineEdit_BxLine->text();
        QString By = ui->lineEdit_ByLine->text();
        QString Color = ui->lineEdit_ColorLine->text();
        QString Thickness = ui->lineEdit_ThicknessLine->text();
        if (id.isEmpty() || Ax.isEmpty() || Ay.isEmpty()|| Bx.isEmpty()|| By.isEmpty() || Color.isEmpty()|| Thickness.isEmpty())
        {
            QMessageBox::critical(this,"Stutus","one of the arguments is empty");
            return;
        }
        this->CurrentNewShape = new Line(id,Ax.toInt(),Ay.toInt(),Bx.toInt(),By.toInt(),Color,Thickness.toInt());
        QMessageBox::information(this,"Stutus","Add a new line succussfully");
    }
    if(TabName == "tab_Triangle")
    {
        QString id = ui->lineEdit_IdTriangle->text();
        for(Shape* it : controller->model->GetVecShape())
        {
            if(id == it->GetID())
            {
                QMessageBox::critical(this,"Status","The Shape'ID has existed, Again!");
                return;
            }
        }
        QString Ax = ui->lineEdit_AxTriangle->text();
        QString Ay = ui->lineEdit_AyTriangle->text();
        QString Bx = ui->lineEdit_BxTriangle->text();
        QString By = ui->lineEdit_ByTriangle->text();
        QString Cx = ui->lineEdit_CxTriangle->text();
        QString Cy = ui->lineEdit_CyTriangle->text();
        QString Color = ui->lineEdit_ColorTriangle->text();
        QString Thickness = ui->lineEdit_ThicknessTriangle->text();
        if (id.isEmpty() || Ax.isEmpty() || Ay.isEmpty()|| Bx.isEmpty()|| By.isEmpty() || Cx.isEmpty()|| Cy.isEmpty() || Color.isEmpty()|| Thickness.isEmpty())
        {
            QMessageBox::critical(this,"Stutus","one of the arguments is empty");
            return;
        }
        this->CurrentNewShape = new Triangle(id,Ax.toInt(),Ay.toInt(),Bx.toInt(),By.toInt(),Cx.toInt(),Cy.toInt(),Color,Thickness.toInt());
        QMessageBox::information(this,"Stutus","Add a new triangle succussfully");
    }
    controller->OnAddShapeButtonClicked(this);
    this->ReloadModelShape();
    this->ClearShape();
};
void MainWindow::ClearShape()
{
    //clear table'circle
    ui->lineEdit_IdCircle->clear();
    ui->lineEdit_OxCircle->clear();
    ui->lineEdit_OyCircle->clear();
    ui->lineEdit_RadiusCircle->clear();
    ui->lineEdit_ColorCircle->clear();
    ui->lineEdit_ThicknessCircle->clear();
    //clear table'square
    ui->lineEdit_IdSquare->clear();
    ui->lineEdit_OxSquare->clear();
    ui->lineEdit_OySquare->clear();
    ui->lineEdit_EdgeSquare->clear();
    ui->lineEdit_ColorSquare->clear();
    ui->lineEdit_ThicknessSquare->clear();
    //clear table'Oval
    ui->lineEdit_IdOval->clear();
    ui->lineEdit_OxOval->clear();
    ui->lineEdit_OyOval->clear();
    ui->lineEdit_WidthOval->clear();
    ui->lineEdit_HeightOval->clear();
    ui->lineEdit_ColorOval->clear();
    ui->lineEdit_ThicknessOval->clear();
    //clear table'Rectangle
    ui->lineEdit_IdRectangle->clear();
    ui->lineEdit_OxRectangle->clear();
    ui->lineEdit_OyRectangle->clear();
    ui->lineEdit_WidthRectangle->clear();
    ui->lineEdit_HeightRectangle->clear();
    ui->lineEdit_ColorRectangle->clear();
    ui->lineEdit_ThicknessRectangle->clear();
    //clear table'Line
    ui->lineEdit_IdLine->clear();
    ui->lineEdit_AxLine->clear();
    ui->lineEdit_AyLine->clear();
    ui->lineEdit_BxLine->clear();
    ui->lineEdit_ByLine->clear();
    ui->lineEdit_ColorLine->clear();
    ui->lineEdit_ThicknessLine->clear();
    //clear table'Triangle
    ui->lineEdit_IdTriangle->clear();
    ui->lineEdit_AxTriangle->clear();
    ui->lineEdit_AyTriangle->clear();
    ui->lineEdit_BxTriangle->clear();
    ui->lineEdit_ByTriangle->clear();
    ui->lineEdit_CxTriangle->clear();
    ui->lineEdit_CyTriangle->clear();
    ui->lineEdit_ColorTriangle->clear();
    ui->lineEdit_ThicknessTriangle->clear();
};
void MainWindow::EditShape()
{
//    CurrentNewShape = (Shape*)(ui->listWidget_Shape->currentItem());
    QString TabName = ui->tabWidget_Shape->currentWidget()->objectName();
    if(TabName == "tab_Circle")
    {
        Circle *Temp = (Circle*)(ui->listWidget_Shape->currentItem());
        QString Id = ui->lineEdit_IdCircle->text();
        if(Id.isEmpty())
        {
            QMessageBox::critical(this,"Status","The Shape'ID is empty, Again!");
            return;
        }
        if(ui->lineEdit_OxCircle->text().isEmpty() || ui->lineEdit_OyCircle->text().isEmpty() ||
                ui->lineEdit_RadiusCircle->text().isEmpty() || ui->lineEdit_ColorCircle->text().isEmpty() ||
                ui->lineEdit_ThicknessCircle->text().isEmpty())
        {
            QMessageBox::critical(this,"State","One of the arguments is empty");
            return;
        }
        if (Id != Temp->GetID())
        {
            for(Shape* it : controller->model->GetVecShape())
            {
                if(Id == it->GetID())
                {
                    QMessageBox::critical(this,"Status","The Shape'ID has existed, Again!");
                    return;
                }
            }
            Temp->SetID(Id);
            Temp->SetO(ui->lineEdit_OxCircle->text().toInt(), ui->lineEdit_OyCircle->text().toInt());
            Temp->SetRadius(ui->lineEdit_RadiusCircle->text().toInt());
            Temp->SetColor(ui->lineEdit_ColorCircle->text());
            Temp->SetThickness(ui->lineEdit_ThicknessCircle->text().toInt());
            QMessageBox::information(this,"Stutus","The circle is edited succussfully");
            return;
        }
        else
        {
            Temp->SetID(Id);
            Temp->SetO(ui->lineEdit_OxCircle->text().toInt(), ui->lineEdit_OyCircle->text().toInt());
            Temp->SetRadius(ui->lineEdit_RadiusCircle->text().toInt());
            Temp->SetColor(ui->lineEdit_ColorCircle->text());
            Temp->SetThickness(ui->lineEdit_ThicknessCircle->text().toInt());
            QMessageBox::information(this,"Stutus","The circle is edited succussfully");
            return;
        }
    }
    if(TabName == "tab_Square")
    {
        Square *Temp = (Square*)(ui->listWidget_Shape->currentItem());
        QString Id = ui->lineEdit_IdSquare->text();
        if(Id.isEmpty())
        {
            QMessageBox::critical(this,"Status","The Shape'ID is empty, Again!");
            return;
        }
        if (Id != Temp->GetID())
        {
            for(Shape* it : controller->model->GetVecShape())
            {
                if(Id == it->GetID())
                {
                    QMessageBox::critical(this,"Status","The Shape'ID has existed, Again!");
                    return;
                }
            }
            Temp->SetID(Id);
            Temp->SetO(ui->lineEdit_OxSquare->text().toInt(), ui->lineEdit_OySquare->text().toInt());
            Temp->SetEdge(ui->lineEdit_EdgeSquare->text().toInt());
            Temp->SetColor(ui->lineEdit_ColorSquare->text());
            Temp->SetThickness(ui->lineEdit_ThicknessSquare->text().toInt());
            QMessageBox::information(this,"Stutus","Add the square is edited succussfully");
            return;
        }
        else
        {
            Temp->SetID(Id);
            Temp->SetO(ui->lineEdit_OxSquare->text().toInt(), ui->lineEdit_OySquare->text().toInt());
            Temp->SetEdge(ui->lineEdit_EdgeSquare->text().toInt());
            Temp->SetColor(ui->lineEdit_ColorSquare->text());
            Temp->SetThickness(ui->lineEdit_ThicknessSquare->text().toInt());
            QMessageBox::information(this,"Stutus","Add the square is edited succussfully");
            return;
        }
    }
    if(TabName == "tab_Oval")
    {
        Oval *Temp = (Oval*)(ui->listWidget_Shape->currentItem());
        QString Id = ui->lineEdit_IdOval->text();
        if(Id.isEmpty())
        {
            QMessageBox::critical(this,"Status","The Shape'ID is empty, Again!");
            return;
        }
        if (Id != Temp->GetID())
        {
            for(Shape* it : controller->model->GetVecShape())
            {
                if(Id == it->GetID())
                {
                    QMessageBox::critical(this,"Status","The Shape'ID has existed, Again!");
                    return;
                }
            }
            Temp->SetID(Id);
            Temp->SetO(ui->lineEdit_OxOval->text().toInt(), ui->lineEdit_OyOval->text().toInt());
            Temp->SetWidth(ui->lineEdit_WidthOval->text().toInt());
            Temp->SetHeight(ui->lineEdit_HeightOval->text().toInt());
            Temp->SetColor(ui->lineEdit_ColorOval->text());
            Temp->SetThickness(ui->lineEdit_ThicknessOval->text().toInt());
            QMessageBox::information(this,"Stutus","Add the oval is edited succussfully");
            return;
        }
        else
        {
            Temp->SetID(Id);
            Temp->SetO(ui->lineEdit_OxOval->text().toInt(), ui->lineEdit_OyOval->text().toInt());
            Temp->SetWidth(ui->lineEdit_WidthOval->text().toInt());
            Temp->SetHeight(ui->lineEdit_HeightOval->text().toInt());
            Temp->SetColor(ui->lineEdit_ColorOval->text());
            Temp->SetThickness(ui->lineEdit_ThicknessOval->text().toInt());
            QMessageBox::information(this,"Stutus","Add the oval is edited succussfully");
            return;
        }
    }
    if(TabName == "tab_Rectangle")
    {
        Rectangle *Temp = (Rectangle*)(ui->listWidget_Shape->currentItem());
        QString Id = ui->lineEdit_IdRectangle->text();
        if(Id.isEmpty())
        {
            QMessageBox::critical(this,"Status","The Shape'ID is empty, Again!");
            return;
        }
        if (Id != Temp->GetID())
        {
            for(Shape* it : controller->model->GetVecShape())
            {
                if(Id == it->GetID())
                {
                    QMessageBox::critical(this,"Status","The Shape'ID has existed, Again!");
                    return;
                }
            }
            Temp->SetID(Id);
            Temp->SetO(ui->lineEdit_OxRectangle->text().toInt(), ui->lineEdit_OyRectangle->text().toInt());
            Temp->SetWidth(ui->lineEdit_WidthRectangle->text().toInt());
            Temp->SetHeight(ui->lineEdit_HeightRectangle->text().toInt());
            Temp->SetColor(ui->lineEdit_ColorRectangle->text());
            Temp->SetThickness(ui->lineEdit_ThicknessRectangle->text().toInt());
            QMessageBox::information(this,"Stutus","Add the rectangle is edited succussfully");
            return;
        }
        else
        {
            Temp->SetID(Id);
            Temp->SetO(ui->lineEdit_OxRectangle->text().toInt(), ui->lineEdit_OyRectangle->text().toInt());
            Temp->SetWidth(ui->lineEdit_WidthRectangle->text().toInt());
            Temp->SetHeight(ui->lineEdit_HeightRectangle->text().toInt());
            Temp->SetColor(ui->lineEdit_ColorRectangle->text());
            Temp->SetThickness(ui->lineEdit_ThicknessRectangle->text().toInt());
            QMessageBox::information(this,"Stutus","Add the rectangle is edited succussfully");
            return;
        }
    }
    if(TabName == "tab_Line")
    {
        Line *Temp = (Line*)(ui->listWidget_Shape->currentItem());
        QString Id = ui->lineEdit_IdLine->text();
        if(Id.isEmpty())
        {
            QMessageBox::critical(this,"Status","The Shape'ID is empty, Again!");
            return;
        }
        if (Id != Temp->GetID())
        {
            for(Shape* it : controller->model->GetVecShape())
            {
                if(Id == it->GetID())
                {
                    QMessageBox::critical(this,"Status","The Shape'ID has existed, Again!");
                    return;
                }
            }
            Temp->SetID(Id);
            Temp->SetA(ui->lineEdit_AxLine->text().toInt(), ui->lineEdit_AyLine->text().toInt());
            Temp->SetB(ui->lineEdit_BxLine->text().toInt(), ui->lineEdit_ByLine->text().toInt());
            Temp->SetColor(ui->lineEdit_ColorLine->text());
            Temp->SetThickness(ui->lineEdit_ThicknessLine->text().toInt());
            QMessageBox::information(this,"Stutus","Add the line is edited succussfully");
            return;
        }
        else
        {
            Temp->SetID(Id);
            Temp->SetA(ui->lineEdit_AxLine->text().toInt(), ui->lineEdit_AyLine->text().toInt());
            Temp->SetB(ui->lineEdit_BxLine->text().toInt(), ui->lineEdit_ByLine->text().toInt());
            Temp->SetColor(ui->lineEdit_ColorLine->text());
            Temp->SetThickness(ui->lineEdit_ThicknessLine->text().toInt());
            QMessageBox::information(this,"Stutus","Add the line is edited succussfully");
            return;
        }
    }
    if(TabName == "tab_Triangle")
    {
        Triangle *Temp = (Triangle*)(ui->listWidget_Shape->currentItem());
        QString Id = ui->lineEdit_IdTriangle->text();
        if(Id.isEmpty())
        {
            QMessageBox::critical(this,"Status","The Shape'ID is empty, Again!");
            return;
        }
        if (Id != Temp->GetID())
        {
            for(Shape* it : controller->model->GetVecShape())
            {
                if(Id == it->GetID())
                {
                    QMessageBox::critical(this,"Status","The Shape'ID has existed, Again!");
                    return;
                }
            }
            Temp->SetID(Id);
            Temp->SetA(ui->lineEdit_AxTriangle->text().toInt(), ui->lineEdit_AyTriangle->text().toInt());
            Temp->SetB(ui->lineEdit_BxTriangle->text().toInt(), ui->lineEdit_ByTriangle->text().toInt());
            Temp->SetB(ui->lineEdit_CxTriangle->text().toInt(), ui->lineEdit_CyTriangle->text().toInt());
            Temp->SetColor(ui->lineEdit_ColorTriangle->text());
            Temp->SetThickness(ui->lineEdit_ThicknessTriangle->text().toInt());
            QMessageBox::information(this,"Stutus","Add the line is edited succussfully");
            return;
        }
        else
        {
            Temp->SetID(Id);
            Temp->SetA(ui->lineEdit_AxTriangle->text().toInt(), ui->lineEdit_AyTriangle->text().toInt());
            Temp->SetB(ui->lineEdit_BxTriangle->text().toInt(), ui->lineEdit_ByTriangle->text().toInt());
            Temp->SetB(ui->lineEdit_CxTriangle->text().toInt(), ui->lineEdit_CyTriangle->text().toInt());
            Temp->SetColor(ui->lineEdit_ColorTriangle->text());
            Temp->SetThickness(ui->lineEdit_ThicknessTriangle->text().toInt());
            QMessageBox::information(this,"Stutus","Add the line is edited succussfully");
            return;
        }
    }
};
void MainWindow::RemoveShape()
{
    CurrentNewShape = (Shape*)(ui->listWidget_Shape->currentItem());
    ui->listWidget_Shape->removeItemWidget(ui->listWidget_Shape->currentItem());
    controller->OnRemoveShapeButtonClicked(this);
    ClearShape();
//    ReloadModel();
    QMessageBox::information(this,"Shape","the shape has removed successfully");
};
/// slots of the edge'table
void MainWindow::ClearEdge()
{
    ui->lineEdit_IdEdge->clear();
    ui->lineEdit_Shape1Edge->clear();
    ui->lineEdit_Shape2Edge->clear();
    ui->lineEdit_ColorEdge->clear();
    ui->lineEdit_ThicknessEdge->clear();
};
void MainWindow::AddEdge()
{
    QString EdgeID = ui->lineEdit_IdEdge->text();
    QString Shape1ID = ui->lineEdit_Shape1Edge->text();
    QString Shape2ID = ui->lineEdit_Shape2Edge->text();
    QString EColor = ui->lineEdit_ColorEdge->text();
    QString EThickness = ui->lineEdit_ThicknessEdge->text();
    if(EdgeID.isEmpty() || Shape1ID.isEmpty() || Shape2ID.isEmpty() || EColor.isEmpty() || EThickness.isEmpty())
    {
        QMessageBox::information(this,"State","one of the arguments is empty");
        return;
    }
    if (Shape1ID == Shape2ID)
    {
        QMessageBox::information(this,"State","Shape1ID is equal Shape2ID, Error!!");
        return;
    }
    for(Edge* it : controller->model->GetVecEdge())
    {
        if(EdgeID == it->GetID())
        {
            QMessageBox::critical(this,"Status","The Edge'ID has existed, Again!");
            return;
        }
    }
    Shape *FS = NULL;
    Shape *SS = NULL;
    for(Shape* it : controller->model->GetVecShape())
    {
        if(Shape1ID == it->GetID())
        {
            FS = it;
            continue;
        }
        if(Shape2ID == it->GetID())
        {
            SS = it;
            continue;
        }
    }
    if(FS == NULL || SS == NULL)
    {
        QMessageBox::information(this,"State","Shape1 or Shape2 is not existing !");
        return;
    }
    this->CurrentNewEdge = new Edge(EdgeID,FS,SS,EColor,EThickness.toInt());
    FS->InsertEdge(CurrentNewEdge);
    SS->InsertEdge(CurrentNewEdge);
    controller->OnAddEdgeButtonClicked(this);
    ui->listWidget_Edge->addItem((QListWidgetItem*) CurrentNewEdge);
    this->ClearEdge();
    ReloadModelEdge(); /// error
    QMessageBox::information(this,"State","Add a edge is successfully!!");
};
void MainWindow::EditEdge()
{
    Edge *CurrentEdge = (Edge*)(ui->listWidget_Edge->currentItem());
    QString EdgeId = ui->lineEdit_IdEdge->text();
    QString Shape1Id = ui->lineEdit_Shape1Edge->text();
    QString Shape2Id = ui->lineEdit_Shape2Edge->text();
    if( EdgeId.isEmpty() || Shape1Id.isEmpty() ||
            Shape2Id.isEmpty() || ui->lineEdit_ColorEdge->text().isEmpty() ||
            ui->lineEdit_ThicknessEdge->text().isEmpty())
    {
        QMessageBox::critical(this,"Edge","One of the arguments is empty");
        return;
    }
    Shape *FS = NULL;
    Shape *SS = NULL;
    for(Shape* it : controller->model->GetVecShape())
    {
        if(Shape1Id == it->GetID())
        {
            FS = it;
            continue;
        }
        if(Shape2Id == it->GetID())
        {
            SS = it;
            continue;
        }
    }
    if(FS == NULL || SS == NULL)
    {
        QMessageBox::information(this,"Edge","Shape1 or Shape2 is not existing !");
        return;
    }
    qDebug() << EdgeId << " " << CurrentEdge->GetID();
    if (EdgeId != CurrentEdge->GetID())
    {
        for(Edge* it : controller->model->GetVecEdge())
        {
            if(EdgeId == it->GetID())
            {
                QMessageBox::critical(this,"Edge","The Edge'ID has existed, Again!");
                return;
            }
        }
        if(Shape1Id != CurrentEdge->GetShape1()->GetID() ||
                Shape2Id != CurrentEdge->GetShape2()->GetID())
        {
            if(FS->CheckShapeIdInsideSet(SS))
            {
               QMessageBox::warning(this,"Edge"
               ,"The center line between the two shapes already exists");
               return;
            }
            CurrentEdge->SetID(EdgeId);
            CurrentEdge->SetShape1(FS);
            CurrentEdge->SetShape2(SS);
            CurrentEdge->SetEColor(ui->lineEdit_ColorEdge->text());
            CurrentEdge->SetEThickness(ui->lineEdit_ThicknessEdge->text().toInt());
            QMessageBox::information(this,"Edge","The edge is edited successfully");
            return;
        }
        else
        {
            CurrentEdge->SetID(EdgeId);
            CurrentEdge->SetShape1(FS);
            CurrentEdge->SetShape2(SS);
            CurrentEdge->SetEColor(ui->lineEdit_ColorEdge->text());
            CurrentEdge->SetEThickness(ui->lineEdit_ThicknessEdge->text().toInt());
            QMessageBox::information(this,"Edge","The edge is edited successfully");
            return;
        }
    }
    else
    {
        if(Shape1Id != CurrentEdge->GetShape1()->GetID() ||
                Shape2Id != CurrentEdge->GetShape2()->GetID())
        {
            if(FS->CheckShapeIdInsideSet(SS))
            {
               QMessageBox::warning(this,"Edge"
               ,"The center line between the two shapes already exists");
               return;
            }
            CurrentEdge->SetID(EdgeId);
            CurrentEdge->SetShape1(FS);
            CurrentEdge->SetShape2(SS);
            CurrentEdge->SetEColor(ui->lineEdit_ColorEdge->text());
            CurrentEdge->SetEThickness(ui->lineEdit_ThicknessEdge->text().toInt());
            QMessageBox::information(this,"Edge","The edge is edited successfully");
            return;
        }
        else
        {
            CurrentEdge->SetID(EdgeId);
            CurrentEdge->SetShape1(FS);
            CurrentEdge->SetShape2(SS);
            CurrentEdge->SetEColor(ui->lineEdit_ColorEdge->text());
            CurrentEdge->SetEThickness(ui->lineEdit_ThicknessEdge->text().toInt());
            QMessageBox::information(this,"Edge","The edge is edited successfully");
            return;
        }
    }

};
void MainWindow::RemoveEdge()
{
    CurrentNewShape = (Shape*)(ui->listWidget_Shape->currentItem());
    ui->listWidget_Shape->removeItemWidget(ui->listWidget_Shape->currentItem());
    controller->OnRemoveEdgeButtonClicked(this);
    ClearShape();
//    ReloadModel();
    QMessageBox::information(this,"Edge","the Edge has removed successfully");
};
/// Global used functions //                    error!!!
void MainWindow::ReloadModelShape()
{
//    ui->listWidget_Shape->clear();
    for(Shape* it : controller->model->GetVecShape())
    {
        ui->listWidget_Shape->addItem((QListWidgetItem*) it);
    }
};
void MainWindow::ReloadModelEdge()
{
//    qDebug() << controller->model->GetVecShape();
//    ui->listWidget_Edge->clear();
    for(Edge* it :controller->model->GetVecEdge())
    {
        ui->listWidget_Edge->addItem((QListWidgetItem*) it);
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
        ui->lineEdit_OxCircle->setText(QString::number(TempShape->GetO().rx()));
        ui->lineEdit_OyCircle->setText(QString::number(TempShape->GetO().ry()));
        ui->lineEdit_RadiusCircle->setText(QString::number(TempShape->GetRadius()));
        ui->lineEdit_ColorCircle->setText(TempShape->GetColor());
        ui->lineEdit_ThicknessCircle->setText(QString::number(TempShape->GetThickness()));
    }
    if (name == "Square")
    {
        Square* TempShape = (Square*)item;
        ui->tabWidget_Shape->setCurrentIndex(1);
        ui->lineEdit_IdSquare->setText(TempShape->GetID());
        ui->lineEdit_OxSquare->setText(QString::number(TempShape->GetO().rx()));
        ui->lineEdit_OySquare->setText(QString::number(TempShape->GetO().ry()));
        ui->lineEdit_EdgeSquare->setText(QString::number(TempShape->GetEdge()));
        ui->lineEdit_ColorSquare->setText(TempShape->GetColor());
        ui->lineEdit_ThicknessSquare->setText(QString::number(TempShape->GetThickness()));
    }
    if (name == "Oval")
    {
        Oval* TempShape = (Oval*)item;
        ui->tabWidget_Shape->setCurrentIndex(2);
        ui->lineEdit_IdOval->setText(TempShape->GetID());
        ui->lineEdit_OxOval->setText(QString::number(TempShape->GetO().rx()));
        ui->lineEdit_OyOval->setText(QString::number(TempShape->GetO().ry()));
        ui->lineEdit_WidthOval->setText(QString::number(TempShape->GetWidth()));
        ui->lineEdit_HeightOval->setText(QString::number(TempShape->GetHeight()));
        ui->lineEdit_ColorOval->setText(TempShape->GetColor());
        ui->lineEdit_ThicknessOval->setText(QString::number(TempShape->GetThickness()));
    }
    if (name == "Rectangle")
    {
        Rectangle *TempShape = (Rectangle*)item;
        ui->tabWidget_Shape->setCurrentIndex(3);
        ui->lineEdit_IdRectangle->setText(TempShape->GetID());
        ui->lineEdit_OxRectangle->setText(QString::number(TempShape->GetO().rx()));
        ui->lineEdit_OyRectangle->setText(QString::number(TempShape->GetO().ry()));
        ui->lineEdit_WidthRectangle->setText(QString::number(TempShape->GetWidth()));
        ui->lineEdit_HeightRectangle->setText(QString::number(TempShape->GetHeight()));
        ui->lineEdit_ColorRectangle->setText(TempShape->GetColor());
        ui->lineEdit_ThicknessRectangle->setText(QString::number(TempShape->GetThickness()));
    }
    if (name == "Line")
    {
        Line* TempShape = (Line*)item;
        ui->tabWidget_Shape->setCurrentIndex(4);
        ui->lineEdit_IdLine->setText(TempShape->GetID());
        ui->lineEdit_AxLine->setText(QString::number(TempShape->GetA().rx()));
        ui->lineEdit_AyLine->setText(QString::number(TempShape->GetA().ry()));
        ui->lineEdit_BxLine->setText(QString::number(TempShape->GetB().rx()));
        ui->lineEdit_ByLine->setText(QString::number(TempShape->GetB().ry()));
        ui->lineEdit_ColorLine->setText(TempShape->GetColor());
        ui->lineEdit_ThicknessLine->setText(QString::number(TempShape->GetThickness()));
    }
    if (name == "Triangle")
    {
        Triangle* TempShape = (Triangle*)item;
        ui->tabWidget_Shape->setCurrentIndex(5);
        ui->lineEdit_IdTriangle->setText(TempShape->GetID());
        ui->lineEdit_AxTriangle->setText(QString::number(TempShape->GetA().rx()));
        ui->lineEdit_AyTriangle->setText(QString::number(TempShape->GetA().ry()));
        ui->lineEdit_BxTriangle->setText(QString::number(TempShape->GetB().rx()));
        ui->lineEdit_ByTriangle->setText(QString::number(TempShape->GetB().ry()));
        ui->lineEdit_CxTriangle->setText(QString::number(TempShape->GetC().rx()));
        ui->lineEdit_CyTriangle->setText(QString::number(TempShape->GetC().ry()));
        ui->lineEdit_ColorTriangle->setText(TempShape->GetColor());
        ui->lineEdit_ThicknessTriangle->setText(QString::number(TempShape->GetThickness()));
    }
};
void MainWindow::on_listWidget_Edge_itemDoubleClicked(QListWidgetItem *item)
{
    Edge* TempShape = (Edge*)item;
    ui->lineEdit_IdEdge->setText(TempShape->GetID());
    ui->lineEdit_Shape1Edge->setText(TempShape->GetShape1()->GetID());
    ui->lineEdit_Shape2Edge->setText(TempShape->GetShape2()->GetID());
    ui->lineEdit_ColorEdge->setText(TempShape->GetEColor());
    ui->lineEdit_ThicknessEdge->setText(QString::number(TempShape->GetEThickness()));
}
///Draw Shapes
void MainWindow::DrawShapes()
{
    controller->OnDrawShapeButtonClicked();
};



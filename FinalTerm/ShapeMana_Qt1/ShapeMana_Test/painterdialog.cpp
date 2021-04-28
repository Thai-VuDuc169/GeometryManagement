#include "painterdialog.h"
#include "ui_painterdialog.h"
#include <QPainter>

PainterDialog::PainterDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PainterDialog)
{
    ui->setupUi(this);
}

PainterDialog::~PainterDialog()
{
    delete ui;
}
void PainterDialog::SetModel(Model *m)
{
    this->CurrentModel = m;
}
void PainterDialog::paintEvent(QPaintEvent *event)
{
    QPen LinePenShape;
    for (Shape* it: CurrentModel->GetVecShape())
    {
        if(it->GetColor() == "red") {LinePenShape.setColor(Qt::red);};
        if(it->GetColor() == "black") {LinePenShape.setColor(Qt::black);};
        if(it->GetColor() == "green") {LinePenShape.setColor(Qt::green);};
        if(it->GetColor() == "blue") {LinePenShape.setColor(Qt::blue);};
        if(it->GetColor() == "yellow") {LinePenShape.setColor(Qt::yellow);};
        if(it->GetColor() == "magenta") {LinePenShape.setColor(Qt::magenta);};
        LinePenShape.setWidth(it->GetThickness());

        if(it->GetName() == "Circle")
        {
            Circle* temp = (Circle*) it;
            QPainter CPainterShape(this);
            CPainterShape.setPen(LinePenShape);
            int x = temp->GetO().rx()-temp->GetRadius();
            int y = temp->GetO().ry()-temp->GetRadius();
            int e = temp->GetRadius()*2;
            CPainterShape.drawEllipse(x,y,e,e);
        }
        if(it->GetName() == "Square")
        {
            Square* temp = (Square*) it;
            QPainter CPainterShape(this);
            CPainterShape.setPen(LinePenShape);
            int x = temp->GetO().rx()- (temp->GetEdge()/2);
            int y = temp->GetO().ry()- (temp->GetEdge()/2);
            int e = temp->GetEdge();
            CPainterShape.drawRect(x,y,e,e);
        }
        if(it->GetName() == "Oval")
        {
            Oval* temp = (Oval*) it;
            QPainter CPainterShape(this);
            CPainterShape.setPen(LinePenShape);
            int x = temp->GetO().rx()- (temp->GetWidth()/2);
            int y = temp->GetO().ry()- (temp->GetHeight()/2);
            CPainterShape.drawEllipse(x,y,temp->GetWidth(),temp->GetHeight());
        }
        if(it->GetName() == "Rectangle")
        {
            Rectangle* temp = (Rectangle*) it;
            QPainter CPainterShape(this);
            CPainterShape.setPen(LinePenShape);
            int x = temp->GetO().rx()- (temp->GetWidth()/2);
            int y = temp->GetO().ry()- (temp->GetHeight()/2);
            CPainterShape.drawRect(x,y,temp->GetWidth(),temp->GetHeight());
        }
        if(it->GetName() == "Line")
        {
            Line* temp = (Line*) it;
            QPainter CPainterShape(this);
            CPainterShape.setPen(LinePenShape);
            CPainterShape.drawLine(temp->GetA() , temp->GetB());
        }
        if(it->GetName() == "Triangle")
        {
            Triangle* temp = (Triangle*) it;
            QPainter CPainterShape(this);
            CPainterShape.setPen(LinePenShape);
            QPolygon poly;
            poly << temp->GetA() << temp->GetB() <<temp->GetC() ;
            CPainterShape.drawPolygon(poly);
        }
    }

    QPen LinePenEdge;
    for(Edge* it : CurrentModel->GetVecEdge())
    {
        if(it->GetEColor() == "red") {LinePenEdge.setColor(Qt::red);};
        if(it->GetEColor() == "black") {LinePenEdge.setColor(Qt::black);};
        if(it->GetEColor() == "green") {LinePenEdge.setColor(Qt::green);};
        if(it->GetEColor() == "blue") {LinePenEdge.setColor(Qt::blue);};
        if(it->GetEColor() == "yellow") {LinePenEdge.setColor(Qt::yellow);};
        if(it->GetEColor() == "magenta") {LinePenEdge.setColor(Qt::magenta);};
        LinePenEdge.setWidth(it->GetEThickness());

        QPainter CPainterEdge(this);
        CPainterEdge.setPen(LinePenEdge);
        CPainterEdge.drawLine(it->GetShape1()->GetO(),it->GetShape2()->GetO());
    }
};

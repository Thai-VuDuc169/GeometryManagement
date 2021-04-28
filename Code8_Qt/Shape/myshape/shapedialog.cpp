#include "shapedialog.h"
#include "ui_shapedialog.h"
#include "shape.h"
ShapeDialog::ShapeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShapeDialog)
{
    ui->setupUi(this);

    setWindowTitle(QString::fromUtf8("Thông tin của Shape"));
}

void ShapeDialog::Show(Shape *shape)
{
    ui->type->setText(shape->GetType());
    ui->x->setText(shape->Get_x());
    ui->y->setText(shape->Get_y());
    ui->color->setText(shape->Get_color());
    ui->thickness->setText(shape->Get_thickness());


    m_Shape = shape;
    show();

}
ShapeDialog::~ShapeDialog()
{
    delete ui;
}


void ShapeDialog::on_pushButton_released()
{
    m_Shape->SetType(ui->type->text());
    m_Shape->Set_x(ui->x->text());
    m_Shape->Set_y(ui->y->text());
    m_Shape->SetColor(ui->color->text());
    m_Shape->SetThickness(ui->thickness->text());

    hide();

}

void ShapeDialog::on_pushButton_2_released()
{
    hide();
}

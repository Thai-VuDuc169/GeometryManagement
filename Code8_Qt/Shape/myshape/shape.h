#ifndef SHAPE_H
#define SHAPE_H

#include <QListWidgetItem>
class Shape : public QListWidgetItem
{
public:
    Shape() { }
    Shape(QString type);
    Shape(QString type, QString x, QString y, QString color, QString thickness);
    ~Shape()  { }
    void SetType(QString type);
    void Set_x(QString x);
    void Set_y(QString y);
    void SetColor(QString color);
    void SetThickness(QString thickness);
    QString GetType() const;
    QString Get_x() const;
    QString Get_y() const;
    QString Get_color() const;
    QString Get_thickness() const;

private:
    QString X;
    QString Y;
    QString Color;
    QString Thickness;
};
inline void Shape::SetType(QString type)
{
    QListWidgetItem::setText(type);
}
inline void Shape::Set_x(QString x)
{
    X = x;
}
inline void Shape::Set_y(QString y)
{
    Y = y;
}
inline void Shape::SetColor(QString color)
{
    Color = color;
}
inline void Shape::SetThickness(QString thickness)
{
    Thickness = thickness;
}
inline QString Shape::GetType() const
{
    return QListWidgetItem::text();
}
inline QString Shape::Get_x() const
{
    return X;
}
inline QString Shape::Get_y() const
{
    return Y;
}
inline QString Shape::Get_color() const
{
    return Color;
}
inline QString Shape::Get_thickness() const
{
    return Thickness;}
#endif // SHAPE_H

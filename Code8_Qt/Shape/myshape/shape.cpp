#include "shape.h"

Shape::Shape(QString type)
    :   QListWidgetItem(type)
{

}
Shape::Shape(QString type, QString x, QString y, QString color, QString thickness)
    : QListWidgetItem(type),
      X(x),
      Y(y),
      Color(color),
      Thickness(thickness)
{

                }

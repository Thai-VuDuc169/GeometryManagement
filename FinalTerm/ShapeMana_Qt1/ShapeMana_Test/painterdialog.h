#ifndef PAINTERDIALOG_H
#define PAINTERDIALOG_H

#include <QDialog>

#include "model.h"
#include "shape.h"

class Model;
//#include <QtCore>
//#include <QtGui>
//#include <QPainter>
namespace Ui {
class PainterDialog;
}

class PainterDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PainterDialog(QWidget *parent = nullptr);
    ~PainterDialog();

private:
    Ui::PainterDialog *ui;
    Model *CurrentModel;
public:
    void SetModel(Model* m);
protected:
    void paintEvent(QPaintEvent* even);
};

#endif // PAINTERDIALOG_H

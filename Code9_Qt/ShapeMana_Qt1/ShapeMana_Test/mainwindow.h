#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include <QVector>
#include <QDebug>
#include <QListWidgetItem>
#include <QMessageBox>

#include "ui_mainwindow.h"
#include "controller.h"
#include "model.h"
#include "shape.h"


class Shape;
class Controller;
class Model;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    friend class Controller;
public:
    explicit MainWindow(Controller *c = nullptr, QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void AddShape();
//    void FindShape();
    void ClearShape();
//    void EditShape();
//    void RemoveShape();

//public slots:
//    void AddEdge();
//    void FindEdge();
//    void ClearEdge();
//    void EditEdge();
//    void RemoveEdge();
public:
    void ReloadModel();

private slots:
    void on_listWidget_Shape_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;
    Controller *controller;
    Shape *CurrentNewShape;
};

#endif // MAINWINDOW_H

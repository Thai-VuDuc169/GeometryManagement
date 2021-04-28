#ifndef SHAPEDIALOG_H
#define SHAPEDIALOG_H

#include <QDialog>

namespace Ui {
class ShapeDialog;
}
class Shape;

class ShapeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ShapeDialog(QWidget *parent = nullptr);
    ~ShapeDialog();
    void Show(Shape* shape);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_released();

    void on_pushButton_2_released();

private:
    Ui::ShapeDialog *ui;

    Shape* m_Shape;
};

#endif // SHAPEDIALOG_H

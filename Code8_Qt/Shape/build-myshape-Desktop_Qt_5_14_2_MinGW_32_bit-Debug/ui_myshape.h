/********************************************************************************
** Form generated from reading UI file 'myshape.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYSHAPE_H
#define UI_MYSHAPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyShape
{
public:
    QListWidget *listWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QWidget *MyShape)
    {
        if (MyShape->objectName().isEmpty())
            MyShape->setObjectName(QString::fromUtf8("MyShape"));
        MyShape->resize(532, 325);
        listWidget = new QListWidget(MyShape);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 80, 511, 231));
        pushButton = new QPushButton(MyShape);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(410, 20, 51, 51));
        pushButton_2 = new QPushButton(MyShape);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(470, 20, 61, 51));
        label = new QLabel(MyShape);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 30, 221, 21));

        retranslateUi(MyShape);

        QMetaObject::connectSlotsByName(MyShape);
    } // setupUi

    void retranslateUi(QWidget *MyShape)
    {
        MyShape->setWindowTitle(QCoreApplication::translate("MyShape", "MyShape", nullptr));
        pushButton->setText(QCoreApplication::translate("MyShape", "Add", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MyShape", "Remove", nullptr));
        label->setText(QCoreApplication::translate("MyShape", "Qu\341\272\243n l\303\275 Shape", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyShape: public Ui_MyShape {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYSHAPE_H

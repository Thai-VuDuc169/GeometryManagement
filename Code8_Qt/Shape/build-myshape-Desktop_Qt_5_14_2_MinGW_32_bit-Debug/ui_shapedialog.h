/********************************************************************************
** Form generated from reading UI file 'shapedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHAPEDIALOG_H
#define UI_SHAPEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ShapeDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout;
    QLineEdit *type;
    QLineEdit *x;
    QLineEdit *y;
    QLineEdit *color;
    QLineEdit *thickness;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *ShapeDialog)
    {
        if (ShapeDialog->objectName().isEmpty())
            ShapeDialog->setObjectName(QString::fromUtf8("ShapeDialog"));
        ShapeDialog->resize(352, 259);
        verticalLayout_3 = new QVBoxLayout(ShapeDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(ShapeDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(ShapeDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(ShapeDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(ShapeDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(ShapeDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        type = new QLineEdit(ShapeDialog);
        type->setObjectName(QString::fromUtf8("type"));

        verticalLayout->addWidget(type);

        x = new QLineEdit(ShapeDialog);
        x->setObjectName(QString::fromUtf8("x"));

        verticalLayout->addWidget(x);

        y = new QLineEdit(ShapeDialog);
        y->setObjectName(QString::fromUtf8("y"));

        verticalLayout->addWidget(y);

        color = new QLineEdit(ShapeDialog);
        color->setObjectName(QString::fromUtf8("color"));

        verticalLayout->addWidget(color);

        thickness = new QLineEdit(ShapeDialog);
        thickness->setObjectName(QString::fromUtf8("thickness"));

        verticalLayout->addWidget(thickness);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(ShapeDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(ShapeDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(ShapeDialog);

        QMetaObject::connectSlotsByName(ShapeDialog);
    } // setupUi

    void retranslateUi(QDialog *ShapeDialog)
    {
        ShapeDialog->setWindowTitle(QCoreApplication::translate("ShapeDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ShapeDialog", "Type:", nullptr));
        label_2->setText(QCoreApplication::translate("ShapeDialog", "X:", nullptr));
        label_3->setText(QCoreApplication::translate("ShapeDialog", "Y:", nullptr));
        label_4->setText(QCoreApplication::translate("ShapeDialog", "Color:", nullptr));
        label_5->setText(QCoreApplication::translate("ShapeDialog", "Thickness:", nullptr));
        pushButton->setText(QCoreApplication::translate("ShapeDialog", "OK", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ShapeDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShapeDialog: public Ui_ShapeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHAPEDIALOG_H

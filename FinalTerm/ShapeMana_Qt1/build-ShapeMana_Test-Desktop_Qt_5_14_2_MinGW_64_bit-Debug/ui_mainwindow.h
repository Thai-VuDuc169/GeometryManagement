/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_View;
    QLabel *label_ShapeList;
    QListWidget *listWidget_Shape;
    QLabel *label_EdgeList;
    QListWidget *listWidget_Edge;
    QWidget *layoutWidget;
    QVBoxLayout *layouttableshapes;
    QTabWidget *tabWidget_Shape;
    QWidget *tab_Circle;
    QLabel *label;
    QLineEdit *lineEdit_OxCircle;
    QLabel *label_2;
    QLineEdit *lineEdit_OyCircle;
    QLabel *label_3;
    QLineEdit *lineEdit_RadiusCircle;
    QLabel *label_4;
    QLineEdit *lineEdit_ColorCircle;
    QLabel *label_5;
    QLineEdit *lineEdit_ThicknessCircle;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_IdCircle;
    QWidget *tab_Square;
    QLineEdit *lineEdit_IdSquare;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *lineEdit_ColorSquare;
    QLineEdit *lineEdit_ThicknessSquare;
    QLabel *label_18;
    QLineEdit *lineEdit_OySquare;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *lineEdit_EdgeSquare;
    QLineEdit *lineEdit_OxSquare;
    QWidget *tab_Oval;
    QLineEdit *lineEdit_ThicknessOval;
    QLineEdit *lineEdit_IdOval;
    QLabel *label_29;
    QLabel *label_26;
    QLabel *label_24;
    QLabel *label_27;
    QLabel *label_23;
    QLabel *label_28;
    QLineEdit *lineEdit_ColorOval;
    QLabel *label_25;
    QLineEdit *lineEdit_OyOval;
    QLineEdit *lineEdit_OxOval;
    QLineEdit *lineEdit_WidthOval;
    QLabel *label_30;
    QLineEdit *lineEdit_HeightOval;
    QWidget *tab_Rectangle;
    QLineEdit *lineEdit_IdRectangle;
    QLabel *label_31;
    QLineEdit *lineEdit_ThicknessRectangle;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QLineEdit *lineEdit_HeightRectangle;
    QLabel *label_38;
    QLineEdit *lineEdit_ColorRectangle;
    QLineEdit *lineEdit_OxRectangle;
    QLineEdit *lineEdit_OyRectangle;
    QLineEdit *lineEdit_WidthRectangle;
    QWidget *tab_Line;
    QLabel *label_40;
    QLineEdit *lineEdit_ColorLine;
    QLabel *label_41;
    QLineEdit *lineEdit_AyLine;
    QLabel *label_44;
    QLineEdit *lineEdit_AxLine;
    QLabel *label_45;
    QLineEdit *lineEdit_IdLine;
    QLineEdit *lineEdit_ThicknessLine;
    QLineEdit *lineEdit_ByLine;
    QLabel *label_43;
    QLineEdit *lineEdit_BxLine;
    QLabel *label_55;
    QWidget *tab_Triangle;
    QLabel *label_47;
    QLineEdit *lineEdit_AyTriangle;
    QLabel *label_48;
    QLineEdit *lineEdit_AxTriangle;
    QLineEdit *lineEdit_CyTriangle;
    QLabel *label_49;
    QLineEdit *lineEdit_BxTriangle;
    QLineEdit *lineEdit_IdTriangle;
    QLineEdit *lineEdit_ByTriangle;
    QLineEdit *lineEdit_CxTriangle;
    QLabel *label_50;
    QLineEdit *lineEdit_ThicknessTriangle;
    QLabel *label_51;
    QLabel *label_52;
    QLineEdit *lineEdit_ColorTriangle;
    QLabel *label_53;
    QPushButton *pushButton_AddShape;
    QPushButton *pushButton_FindShape;
    QPushButton *pushButton_ClearTableShape;
    QPushButton *pushButton_EditShape;
    QPushButton *pushButton_RemoveShape;
    QWidget *layoutWidget1;
    QVBoxLayout *_3;
    QGroupBox *groupBox;
    QLineEdit *lineEdit_Shape2Edge;
    QLineEdit *lineEdit_Shape1Edge;
    QLineEdit *lineEdit_ColorEdge;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *lineEdit_ThicknessEdge;
    QLabel *label_13;
    QLabel *label_22;
    QLineEdit *lineEdit_IdEdge;
    QLabel *label_54;
    QPushButton *pushButton_AddEdge;
    QPushButton *pushButton_FindEdge;
    QPushButton *pushButton_ClearTableEdge;
    QPushButton *pushButton_EditEdge;
    QPushButton *pushButton_RemoveEdge;
    QPushButton *pushButton_DrawShapes;
    QMenuBar *menubar;
    QMenu *menuLogOut;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(591, 622);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/Resources/form-icon-01.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox_View = new QGroupBox(centralwidget);
        groupBox_View->setObjectName(QString::fromUtf8("groupBox_View"));
        groupBox_View->setGeometry(QRect(440, 10, 141, 511));
        label_ShapeList = new QLabel(groupBox_View);
        label_ShapeList->setObjectName(QString::fromUtf8("label_ShapeList"));
        label_ShapeList->setGeometry(QRect(10, 10, 121, 31));
        label_ShapeList->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 235, 255);\n"
"font: 12pt \"Harrington\";"));
        label_ShapeList->setTextFormat(Qt::PlainText);
        label_ShapeList->setAlignment(Qt::AlignCenter);
        listWidget_Shape = new QListWidget(groupBox_View);
        listWidget_Shape->setObjectName(QString::fromUtf8("listWidget_Shape"));
        listWidget_Shape->setGeometry(QRect(10, 50, 121, 201));
        label_EdgeList = new QLabel(groupBox_View);
        label_EdgeList->setObjectName(QString::fromUtf8("label_EdgeList"));
        label_EdgeList->setGeometry(QRect(10, 260, 121, 31));
        label_EdgeList->setStyleSheet(QString::fromUtf8("background-color: rgb(162, 235, 255);\n"
"font: 12pt \"Harrington\";"));
        label_EdgeList->setTextFormat(Qt::PlainText);
        label_EdgeList->setAlignment(Qt::AlignCenter);
        listWidget_Edge = new QListWidget(groupBox_View);
        listWidget_Edge->setObjectName(QString::fromUtf8("listWidget_Edge"));
        listWidget_Edge->setGeometry(QRect(10, 300, 121, 201));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(2, 10, 231, 511));
        layouttableshapes = new QVBoxLayout(layoutWidget);
        layouttableshapes->setObjectName(QString::fromUtf8("layouttableshapes"));
        layouttableshapes->setSizeConstraint(QLayout::SetDefaultConstraint);
        layouttableshapes->setContentsMargins(0, 0, 0, 0);
        tabWidget_Shape = new QTabWidget(layoutWidget);
        tabWidget_Shape->setObjectName(QString::fromUtf8("tabWidget_Shape"));
        tabWidget_Shape->setContextMenuPolicy(Qt::NoContextMenu);
        tabWidget_Shape->setLayoutDirection(Qt::LeftToRight);
        tabWidget_Shape->setAutoFillBackground(false);
        tabWidget_Shape->setTabPosition(QTabWidget::West);
        tabWidget_Shape->setTabShape(QTabWidget::Triangular);
        tab_Circle = new QWidget();
        tab_Circle->setObjectName(QString::fromUtf8("tab_Circle"));
        label = new QLabel(tab_Circle);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 161, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Harrington"));
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_OxCircle = new QLineEdit(tab_Circle);
        lineEdit_OxCircle->setObjectName(QString::fromUtf8("lineEdit_OxCircle"));
        lineEdit_OxCircle->setGeometry(QRect(80, 110, 91, 20));
        lineEdit_OxCircle->setCursorMoveStyle(Qt::LogicalMoveStyle);
        label_2 = new QLabel(tab_Circle);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 110, 61, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Harrington"));
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        lineEdit_OyCircle = new QLineEdit(tab_Circle);
        lineEdit_OyCircle->setObjectName(QString::fromUtf8("lineEdit_OyCircle"));
        lineEdit_OyCircle->setGeometry(QRect(80, 150, 91, 20));
        label_3 = new QLabel(tab_Circle);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 150, 61, 21));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);
        lineEdit_RadiusCircle = new QLineEdit(tab_Circle);
        lineEdit_RadiusCircle->setObjectName(QString::fromUtf8("lineEdit_RadiusCircle"));
        lineEdit_RadiusCircle->setGeometry(QRect(80, 190, 91, 20));
        label_4 = new QLabel(tab_Circle);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 190, 61, 21));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);
        lineEdit_ColorCircle = new QLineEdit(tab_Circle);
        lineEdit_ColorCircle->setObjectName(QString::fromUtf8("lineEdit_ColorCircle"));
        lineEdit_ColorCircle->setGeometry(QRect(80, 230, 91, 20));
        label_5 = new QLabel(tab_Circle);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 230, 61, 21));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);
        lineEdit_ThicknessCircle = new QLineEdit(tab_Circle);
        lineEdit_ThicknessCircle->setObjectName(QString::fromUtf8("lineEdit_ThicknessCircle"));
        lineEdit_ThicknessCircle->setGeometry(QRect(80, 270, 91, 20));
        label_6 = new QLabel(tab_Circle);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 270, 81, 21));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(tab_Circle);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 70, 61, 21));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);
        lineEdit_IdCircle = new QLineEdit(tab_Circle);
        lineEdit_IdCircle->setObjectName(QString::fromUtf8("lineEdit_IdCircle"));
        lineEdit_IdCircle->setGeometry(QRect(80, 70, 91, 20));
        lineEdit_IdCircle->setCursorMoveStyle(Qt::LogicalMoveStyle);
        tabWidget_Shape->addTab(tab_Circle, QString());
        tab_Square = new QWidget();
        tab_Square->setObjectName(QString::fromUtf8("tab_Square"));
        lineEdit_IdSquare = new QLineEdit(tab_Square);
        lineEdit_IdSquare->setObjectName(QString::fromUtf8("lineEdit_IdSquare"));
        lineEdit_IdSquare->setGeometry(QRect(80, 70, 91, 20));
        lineEdit_IdSquare->setCursorMoveStyle(Qt::LogicalMoveStyle);
        label_15 = new QLabel(tab_Square);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 10, 171, 31));
        label_15->setFont(font);
        label_15->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_16 = new QLabel(tab_Square);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(0, 270, 81, 21));
        label_16->setFont(font1);
        label_16->setAlignment(Qt::AlignCenter);
        label_17 = new QLabel(tab_Square);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 230, 61, 21));
        label_17->setFont(font1);
        label_17->setAlignment(Qt::AlignCenter);
        lineEdit_ColorSquare = new QLineEdit(tab_Square);
        lineEdit_ColorSquare->setObjectName(QString::fromUtf8("lineEdit_ColorSquare"));
        lineEdit_ColorSquare->setGeometry(QRect(80, 230, 91, 20));
        lineEdit_ThicknessSquare = new QLineEdit(tab_Square);
        lineEdit_ThicknessSquare->setObjectName(QString::fromUtf8("lineEdit_ThicknessSquare"));
        lineEdit_ThicknessSquare->setGeometry(QRect(80, 270, 91, 20));
        label_18 = new QLabel(tab_Square);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(10, 110, 61, 21));
        label_18->setFont(font1);
        label_18->setAlignment(Qt::AlignCenter);
        lineEdit_OySquare = new QLineEdit(tab_Square);
        lineEdit_OySquare->setObjectName(QString::fromUtf8("lineEdit_OySquare"));
        lineEdit_OySquare->setGeometry(QRect(80, 150, 91, 20));
        label_19 = new QLabel(tab_Square);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(10, 190, 61, 21));
        label_19->setFont(font1);
        label_19->setAlignment(Qt::AlignCenter);
        label_20 = new QLabel(tab_Square);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(10, 70, 61, 21));
        label_20->setFont(font1);
        label_20->setAlignment(Qt::AlignCenter);
        label_21 = new QLabel(tab_Square);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(10, 150, 61, 21));
        label_21->setFont(font1);
        label_21->setAlignment(Qt::AlignCenter);
        lineEdit_EdgeSquare = new QLineEdit(tab_Square);
        lineEdit_EdgeSquare->setObjectName(QString::fromUtf8("lineEdit_EdgeSquare"));
        lineEdit_EdgeSquare->setGeometry(QRect(80, 190, 91, 20));
        lineEdit_OxSquare = new QLineEdit(tab_Square);
        lineEdit_OxSquare->setObjectName(QString::fromUtf8("lineEdit_OxSquare"));
        lineEdit_OxSquare->setGeometry(QRect(80, 110, 91, 20));
        lineEdit_OxSquare->setCursorMoveStyle(Qt::LogicalMoveStyle);
        tabWidget_Shape->addTab(tab_Square, QString());
        tab_Oval = new QWidget();
        tab_Oval->setObjectName(QString::fromUtf8("tab_Oval"));
        lineEdit_ThicknessOval = new QLineEdit(tab_Oval);
        lineEdit_ThicknessOval->setObjectName(QString::fromUtf8("lineEdit_ThicknessOval"));
        lineEdit_ThicknessOval->setGeometry(QRect(80, 310, 91, 20));
        lineEdit_IdOval = new QLineEdit(tab_Oval);
        lineEdit_IdOval->setObjectName(QString::fromUtf8("lineEdit_IdOval"));
        lineEdit_IdOval->setGeometry(QRect(80, 70, 91, 20));
        lineEdit_IdOval->setCursorMoveStyle(Qt::LogicalMoveStyle);
        label_29 = new QLabel(tab_Oval);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(10, 10, 171, 31));
        label_29->setFont(font);
        label_29->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_26 = new QLabel(tab_Oval);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(10, 70, 61, 21));
        label_26->setFont(font1);
        label_26->setAlignment(Qt::AlignCenter);
        label_24 = new QLabel(tab_Oval);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(10, 270, 61, 21));
        label_24->setFont(font1);
        label_24->setAlignment(Qt::AlignCenter);
        label_27 = new QLabel(tab_Oval);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(10, 150, 61, 21));
        label_27->setFont(font1);
        label_27->setAlignment(Qt::AlignCenter);
        label_23 = new QLabel(tab_Oval);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(10, 190, 61, 21));
        label_23->setFont(font1);
        label_23->setAlignment(Qt::AlignCenter);
        label_28 = new QLabel(tab_Oval);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(0, 310, 81, 21));
        label_28->setFont(font1);
        label_28->setAlignment(Qt::AlignCenter);
        lineEdit_ColorOval = new QLineEdit(tab_Oval);
        lineEdit_ColorOval->setObjectName(QString::fromUtf8("lineEdit_ColorOval"));
        lineEdit_ColorOval->setGeometry(QRect(80, 270, 91, 20));
        label_25 = new QLabel(tab_Oval);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(10, 110, 61, 21));
        label_25->setFont(font1);
        label_25->setAlignment(Qt::AlignCenter);
        lineEdit_OyOval = new QLineEdit(tab_Oval);
        lineEdit_OyOval->setObjectName(QString::fromUtf8("lineEdit_OyOval"));
        lineEdit_OyOval->setGeometry(QRect(80, 150, 91, 20));
        lineEdit_OxOval = new QLineEdit(tab_Oval);
        lineEdit_OxOval->setObjectName(QString::fromUtf8("lineEdit_OxOval"));
        lineEdit_OxOval->setGeometry(QRect(80, 110, 91, 20));
        lineEdit_OxOval->setCursorMoveStyle(Qt::LogicalMoveStyle);
        lineEdit_WidthOval = new QLineEdit(tab_Oval);
        lineEdit_WidthOval->setObjectName(QString::fromUtf8("lineEdit_WidthOval"));
        lineEdit_WidthOval->setGeometry(QRect(80, 190, 91, 20));
        label_30 = new QLabel(tab_Oval);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(10, 230, 61, 21));
        label_30->setFont(font1);
        label_30->setAlignment(Qt::AlignCenter);
        lineEdit_HeightOval = new QLineEdit(tab_Oval);
        lineEdit_HeightOval->setObjectName(QString::fromUtf8("lineEdit_HeightOval"));
        lineEdit_HeightOval->setGeometry(QRect(80, 230, 91, 20));
        tabWidget_Shape->addTab(tab_Oval, QString());
        tab_Rectangle = new QWidget();
        tab_Rectangle->setObjectName(QString::fromUtf8("tab_Rectangle"));
        lineEdit_IdRectangle = new QLineEdit(tab_Rectangle);
        lineEdit_IdRectangle->setObjectName(QString::fromUtf8("lineEdit_IdRectangle"));
        lineEdit_IdRectangle->setGeometry(QRect(80, 70, 91, 20));
        lineEdit_IdRectangle->setCursorMoveStyle(Qt::LogicalMoveStyle);
        label_31 = new QLabel(tab_Rectangle);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(10, 10, 191, 31));
        label_31->setFont(font);
        label_31->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_ThicknessRectangle = new QLineEdit(tab_Rectangle);
        lineEdit_ThicknessRectangle->setObjectName(QString::fromUtf8("lineEdit_ThicknessRectangle"));
        lineEdit_ThicknessRectangle->setGeometry(QRect(80, 310, 91, 20));
        label_32 = new QLabel(tab_Rectangle);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(10, 70, 61, 21));
        label_32->setFont(font1);
        label_32->setAlignment(Qt::AlignCenter);
        label_33 = new QLabel(tab_Rectangle);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(10, 150, 61, 21));
        label_33->setFont(font1);
        label_33->setAlignment(Qt::AlignCenter);
        label_34 = new QLabel(tab_Rectangle);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(10, 230, 61, 21));
        label_34->setFont(font1);
        label_34->setAlignment(Qt::AlignCenter);
        label_35 = new QLabel(tab_Rectangle);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(10, 270, 61, 21));
        label_35->setFont(font1);
        label_35->setAlignment(Qt::AlignCenter);
        label_36 = new QLabel(tab_Rectangle);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(10, 190, 61, 21));
        label_36->setFont(font1);
        label_36->setAlignment(Qt::AlignCenter);
        label_37 = new QLabel(tab_Rectangle);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(0, 310, 81, 21));
        label_37->setFont(font1);
        label_37->setAlignment(Qt::AlignCenter);
        lineEdit_HeightRectangle = new QLineEdit(tab_Rectangle);
        lineEdit_HeightRectangle->setObjectName(QString::fromUtf8("lineEdit_HeightRectangle"));
        lineEdit_HeightRectangle->setGeometry(QRect(80, 230, 91, 20));
        label_38 = new QLabel(tab_Rectangle);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(10, 110, 61, 21));
        label_38->setFont(font1);
        label_38->setAlignment(Qt::AlignCenter);
        lineEdit_ColorRectangle = new QLineEdit(tab_Rectangle);
        lineEdit_ColorRectangle->setObjectName(QString::fromUtf8("lineEdit_ColorRectangle"));
        lineEdit_ColorRectangle->setGeometry(QRect(80, 270, 91, 20));
        lineEdit_OxRectangle = new QLineEdit(tab_Rectangle);
        lineEdit_OxRectangle->setObjectName(QString::fromUtf8("lineEdit_OxRectangle"));
        lineEdit_OxRectangle->setGeometry(QRect(80, 110, 91, 20));
        lineEdit_OxRectangle->setCursorMoveStyle(Qt::LogicalMoveStyle);
        lineEdit_OyRectangle = new QLineEdit(tab_Rectangle);
        lineEdit_OyRectangle->setObjectName(QString::fromUtf8("lineEdit_OyRectangle"));
        lineEdit_OyRectangle->setGeometry(QRect(80, 150, 91, 20));
        lineEdit_WidthRectangle = new QLineEdit(tab_Rectangle);
        lineEdit_WidthRectangle->setObjectName(QString::fromUtf8("lineEdit_WidthRectangle"));
        lineEdit_WidthRectangle->setGeometry(QRect(80, 190, 91, 20));
        tabWidget_Shape->addTab(tab_Rectangle, QString());
        tab_Line = new QWidget();
        tab_Line->setObjectName(QString::fromUtf8("tab_Line"));
        label_40 = new QLabel(tab_Line);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(10, 190, 61, 21));
        label_40->setFont(font1);
        label_40->setAlignment(Qt::AlignCenter);
        lineEdit_ColorLine = new QLineEdit(tab_Line);
        lineEdit_ColorLine->setObjectName(QString::fromUtf8("lineEdit_ColorLine"));
        lineEdit_ColorLine->setGeometry(QRect(80, 190, 91, 20));
        label_41 = new QLabel(tab_Line);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(10, 110, 31, 21));
        label_41->setFont(font1);
        label_41->setAlignment(Qt::AlignCenter);
        lineEdit_AyLine = new QLineEdit(tab_Line);
        lineEdit_AyLine->setObjectName(QString::fromUtf8("lineEdit_AyLine"));
        lineEdit_AyLine->setGeometry(QRect(130, 110, 71, 20));
        label_44 = new QLabel(tab_Line);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(0, 230, 81, 21));
        label_44->setFont(font1);
        label_44->setAlignment(Qt::AlignCenter);
        lineEdit_AxLine = new QLineEdit(tab_Line);
        lineEdit_AxLine->setObjectName(QString::fromUtf8("lineEdit_AxLine"));
        lineEdit_AxLine->setGeometry(QRect(50, 110, 71, 20));
        lineEdit_AxLine->setCursorMoveStyle(Qt::LogicalMoveStyle);
        label_45 = new QLabel(tab_Line);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(10, 10, 171, 31));
        label_45->setFont(font);
        label_45->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_IdLine = new QLineEdit(tab_Line);
        lineEdit_IdLine->setObjectName(QString::fromUtf8("lineEdit_IdLine"));
        lineEdit_IdLine->setGeometry(QRect(80, 70, 91, 20));
        lineEdit_IdLine->setCursorMoveStyle(Qt::LogicalMoveStyle);
        lineEdit_ThicknessLine = new QLineEdit(tab_Line);
        lineEdit_ThicknessLine->setObjectName(QString::fromUtf8("lineEdit_ThicknessLine"));
        lineEdit_ThicknessLine->setGeometry(QRect(80, 230, 91, 20));
        lineEdit_ByLine = new QLineEdit(tab_Line);
        lineEdit_ByLine->setObjectName(QString::fromUtf8("lineEdit_ByLine"));
        lineEdit_ByLine->setGeometry(QRect(130, 150, 71, 20));
        label_43 = new QLabel(tab_Line);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(10, 150, 31, 21));
        label_43->setFont(font1);
        label_43->setAlignment(Qt::AlignCenter);
        lineEdit_BxLine = new QLineEdit(tab_Line);
        lineEdit_BxLine->setObjectName(QString::fromUtf8("lineEdit_BxLine"));
        lineEdit_BxLine->setGeometry(QRect(50, 150, 71, 20));
        lineEdit_BxLine->setCursorMoveStyle(Qt::LogicalMoveStyle);
        label_55 = new QLabel(tab_Line);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setGeometry(QRect(10, 70, 61, 21));
        label_55->setFont(font1);
        label_55->setAlignment(Qt::AlignCenter);
        tabWidget_Shape->addTab(tab_Line, QString());
        tab_Triangle = new QWidget();
        tab_Triangle->setObjectName(QString::fromUtf8("tab_Triangle"));
        label_47 = new QLabel(tab_Triangle);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setGeometry(QRect(10, 10, 171, 31));
        label_47->setFont(font);
        label_47->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_AyTriangle = new QLineEdit(tab_Triangle);
        lineEdit_AyTriangle->setObjectName(QString::fromUtf8("lineEdit_AyTriangle"));
        lineEdit_AyTriangle->setGeometry(QRect(130, 110, 71, 20));
        label_48 = new QLabel(tab_Triangle);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setGeometry(QRect(10, 110, 31, 21));
        label_48->setFont(font1);
        label_48->setAlignment(Qt::AlignCenter);
        lineEdit_AxTriangle = new QLineEdit(tab_Triangle);
        lineEdit_AxTriangle->setObjectName(QString::fromUtf8("lineEdit_AxTriangle"));
        lineEdit_AxTriangle->setGeometry(QRect(50, 110, 71, 20));
        lineEdit_AxTriangle->setCursorMoveStyle(Qt::LogicalMoveStyle);
        lineEdit_CyTriangle = new QLineEdit(tab_Triangle);
        lineEdit_CyTriangle->setObjectName(QString::fromUtf8("lineEdit_CyTriangle"));
        lineEdit_CyTriangle->setGeometry(QRect(130, 190, 71, 20));
        label_49 = new QLabel(tab_Triangle);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setGeometry(QRect(10, 150, 31, 21));
        label_49->setFont(font1);
        label_49->setAlignment(Qt::AlignCenter);
        lineEdit_BxTriangle = new QLineEdit(tab_Triangle);
        lineEdit_BxTriangle->setObjectName(QString::fromUtf8("lineEdit_BxTriangle"));
        lineEdit_BxTriangle->setGeometry(QRect(50, 150, 71, 20));
        lineEdit_BxTriangle->setCursorMoveStyle(Qt::LogicalMoveStyle);
        lineEdit_IdTriangle = new QLineEdit(tab_Triangle);
        lineEdit_IdTriangle->setObjectName(QString::fromUtf8("lineEdit_IdTriangle"));
        lineEdit_IdTriangle->setGeometry(QRect(80, 70, 91, 20));
        lineEdit_IdTriangle->setCursorMoveStyle(Qt::LogicalMoveStyle);
        lineEdit_ByTriangle = new QLineEdit(tab_Triangle);
        lineEdit_ByTriangle->setObjectName(QString::fromUtf8("lineEdit_ByTriangle"));
        lineEdit_ByTriangle->setGeometry(QRect(130, 150, 71, 20));
        lineEdit_CxTriangle = new QLineEdit(tab_Triangle);
        lineEdit_CxTriangle->setObjectName(QString::fromUtf8("lineEdit_CxTriangle"));
        lineEdit_CxTriangle->setGeometry(QRect(50, 190, 71, 20));
        lineEdit_CxTriangle->setCursorMoveStyle(Qt::LogicalMoveStyle);
        label_50 = new QLabel(tab_Triangle);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setGeometry(QRect(0, 270, 81, 21));
        label_50->setFont(font1);
        label_50->setAlignment(Qt::AlignCenter);
        lineEdit_ThicknessTriangle = new QLineEdit(tab_Triangle);
        lineEdit_ThicknessTriangle->setObjectName(QString::fromUtf8("lineEdit_ThicknessTriangle"));
        lineEdit_ThicknessTriangle->setGeometry(QRect(80, 270, 91, 20));
        label_51 = new QLabel(tab_Triangle);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setGeometry(QRect(10, 190, 31, 21));
        label_51->setFont(font1);
        label_51->setAlignment(Qt::AlignCenter);
        label_52 = new QLabel(tab_Triangle);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setGeometry(QRect(10, 70, 61, 21));
        label_52->setFont(font1);
        label_52->setAlignment(Qt::AlignCenter);
        lineEdit_ColorTriangle = new QLineEdit(tab_Triangle);
        lineEdit_ColorTriangle->setObjectName(QString::fromUtf8("lineEdit_ColorTriangle"));
        lineEdit_ColorTriangle->setGeometry(QRect(80, 230, 91, 20));
        label_53 = new QLabel(tab_Triangle);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setGeometry(QRect(10, 230, 61, 21));
        label_53->setFont(font1);
        label_53->setAlignment(Qt::AlignCenter);
        tabWidget_Shape->addTab(tab_Triangle, QString());

        layouttableshapes->addWidget(tabWidget_Shape);

        pushButton_AddShape = new QPushButton(layoutWidget);
        pushButton_AddShape->setObjectName(QString::fromUtf8("pushButton_AddShape"));
        pushButton_AddShape->setStyleSheet(QString::fromUtf8(""));
        pushButton_AddShape->setAutoRepeat(false);

        layouttableshapes->addWidget(pushButton_AddShape);

        pushButton_FindShape = new QPushButton(layoutWidget);
        pushButton_FindShape->setObjectName(QString::fromUtf8("pushButton_FindShape"));

        layouttableshapes->addWidget(pushButton_FindShape);

        pushButton_ClearTableShape = new QPushButton(layoutWidget);
        pushButton_ClearTableShape->setObjectName(QString::fromUtf8("pushButton_ClearTableShape"));

        layouttableshapes->addWidget(pushButton_ClearTableShape);

        pushButton_EditShape = new QPushButton(layoutWidget);
        pushButton_EditShape->setObjectName(QString::fromUtf8("pushButton_EditShape"));

        layouttableshapes->addWidget(pushButton_EditShape);

        pushButton_RemoveShape = new QPushButton(layoutWidget);
        pushButton_RemoveShape->setObjectName(QString::fromUtf8("pushButton_RemoveShape"));
        pushButton_RemoveShape->setStyleSheet(QString::fromUtf8(""));
        pushButton_RemoveShape->setAutoRepeat(false);

        layouttableshapes->addWidget(pushButton_RemoveShape);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(240, 10, 191, 511));
        _3 = new QVBoxLayout(layoutWidget1);
        _3->setObjectName(QString::fromUtf8("_3"));
        _3->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget1);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setLayoutDirection(Qt::LeftToRight);
        groupBox->setAutoFillBackground(false);
        groupBox->setStyleSheet(QString::fromUtf8(""));
        lineEdit_Shape2Edge = new QLineEdit(groupBox);
        lineEdit_Shape2Edge->setObjectName(QString::fromUtf8("lineEdit_Shape2Edge"));
        lineEdit_Shape2Edge->setGeometry(QRect(90, 150, 91, 20));
        lineEdit_Shape2Edge->setCursorMoveStyle(Qt::LogicalMoveStyle);
        lineEdit_Shape1Edge = new QLineEdit(groupBox);
        lineEdit_Shape1Edge->setObjectName(QString::fromUtf8("lineEdit_Shape1Edge"));
        lineEdit_Shape1Edge->setGeometry(QRect(90, 110, 91, 20));
        lineEdit_Shape1Edge->setCursorMoveStyle(Qt::LogicalMoveStyle);
        lineEdit_ColorEdge = new QLineEdit(groupBox);
        lineEdit_ColorEdge->setObjectName(QString::fromUtf8("lineEdit_ColorEdge"));
        lineEdit_ColorEdge->setGeometry(QRect(90, 190, 91, 20));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 190, 61, 21));
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 110, 71, 21));
        label_11->setFont(font1);
        label_11->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 10, 161, 31));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignCenter);
        lineEdit_ThicknessEdge = new QLineEdit(groupBox);
        lineEdit_ThicknessEdge->setObjectName(QString::fromUtf8("lineEdit_ThicknessEdge"));
        lineEdit_ThicknessEdge->setGeometry(QRect(90, 230, 91, 20));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(0, 230, 81, 21));
        label_13->setFont(font1);
        label_13->setAlignment(Qt::AlignCenter);
        label_22 = new QLabel(groupBox);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(10, 150, 71, 21));
        label_22->setFont(font1);
        label_22->setAlignment(Qt::AlignCenter);
        lineEdit_IdEdge = new QLineEdit(groupBox);
        lineEdit_IdEdge->setObjectName(QString::fromUtf8("lineEdit_IdEdge"));
        lineEdit_IdEdge->setGeometry(QRect(90, 70, 91, 20));
        lineEdit_IdEdge->setCursorMoveStyle(Qt::LogicalMoveStyle);
        label_54 = new QLabel(groupBox);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setGeometry(QRect(20, 70, 61, 21));
        label_54->setFont(font1);
        label_54->setAlignment(Qt::AlignCenter);

        _3->addWidget(groupBox);

        pushButton_AddEdge = new QPushButton(layoutWidget1);
        pushButton_AddEdge->setObjectName(QString::fromUtf8("pushButton_AddEdge"));

        _3->addWidget(pushButton_AddEdge);

        pushButton_FindEdge = new QPushButton(layoutWidget1);
        pushButton_FindEdge->setObjectName(QString::fromUtf8("pushButton_FindEdge"));

        _3->addWidget(pushButton_FindEdge);

        pushButton_ClearTableEdge = new QPushButton(layoutWidget1);
        pushButton_ClearTableEdge->setObjectName(QString::fromUtf8("pushButton_ClearTableEdge"));

        _3->addWidget(pushButton_ClearTableEdge);

        pushButton_EditEdge = new QPushButton(layoutWidget1);
        pushButton_EditEdge->setObjectName(QString::fromUtf8("pushButton_EditEdge"));

        _3->addWidget(pushButton_EditEdge);

        pushButton_RemoveEdge = new QPushButton(layoutWidget1);
        pushButton_RemoveEdge->setObjectName(QString::fromUtf8("pushButton_RemoveEdge"));

        _3->addWidget(pushButton_RemoveEdge);

        pushButton_DrawShapes = new QPushButton(centralwidget);
        pushButton_DrawShapes->setObjectName(QString::fromUtf8("pushButton_DrawShapes"));
        pushButton_DrawShapes->setGeometry(QRect(440, 530, 141, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 591, 21));
        menuLogOut = new QMenu(menubar);
        menuLogOut->setObjectName(QString::fromUtf8("menuLogOut"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuLogOut->menuAction());

        retranslateUi(MainWindow);

        tabWidget_Shape->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        MainWindow->setToolTip(QCoreApplication::translate("MainWindow", "red,black,green,blue,yellow,magenta", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_View->setTitle(QString());
        label_ShapeList->setText(QCoreApplication::translate("MainWindow", "SHAPES LIST", nullptr));
        label_EdgeList->setText(QCoreApplication::translate("MainWindow", "EDGES LIST", nullptr));
#if QT_CONFIG(tooltip)
        tabWidget_Shape->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("MainWindow", "Circle Information", nullptr));
        lineEdit_OxCircle->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "O.x", nullptr));
        lineEdit_OyCircle->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "O.y", nullptr));
        lineEdit_RadiusCircle->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Radius", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_ColorCircle->setToolTip(QCoreApplication::translate("MainWindow", "red,black,green,blue,yellow,magenta", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        lineEdit_ColorCircle->setStatusTip(QCoreApplication::translate("MainWindow", "sss", nullptr));
#endif // QT_CONFIG(statustip)
        lineEdit_ColorCircle->setPlaceholderText(QCoreApplication::translate("MainWindow", "String", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        lineEdit_ThicknessCircle->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Thickness", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Shape ID", nullptr));
        lineEdit_IdCircle->setPlaceholderText(QCoreApplication::translate("MainWindow", "String", nullptr));
        tabWidget_Shape->setTabText(tabWidget_Shape->indexOf(tab_Circle), QCoreApplication::translate("MainWindow", "Circle", nullptr));
        lineEdit_IdSquare->setPlaceholderText(QCoreApplication::translate("MainWindow", "String", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Square Information", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Thickness", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_ColorSquare->setToolTip(QCoreApplication::translate("MainWindow", "red,black,green,blue,yellow,magenta", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_ColorSquare->setPlaceholderText(QCoreApplication::translate("MainWindow", "String", nullptr));
        lineEdit_ThicknessSquare->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "O.x", nullptr));
        lineEdit_OySquare->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Edge", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Shape ID", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "O.y", nullptr));
        lineEdit_EdgeSquare->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        lineEdit_OxSquare->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        tabWidget_Shape->setTabText(tabWidget_Shape->indexOf(tab_Square), QCoreApplication::translate("MainWindow", "Square", nullptr));
        lineEdit_ThicknessOval->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        lineEdit_IdOval->setPlaceholderText(QCoreApplication::translate("MainWindow", "String", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Oval Information", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Shape ID", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "O.y", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Width", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Thickness", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_ColorOval->setToolTip(QCoreApplication::translate("MainWindow", "red,black,green,blue,yellow,magenta", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_ColorOval->setPlaceholderText(QCoreApplication::translate("MainWindow", "String", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "O.x", nullptr));
        lineEdit_OyOval->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        lineEdit_OxOval->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        lineEdit_WidthOval->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "Height", nullptr));
        lineEdit_HeightOval->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        tabWidget_Shape->setTabText(tabWidget_Shape->indexOf(tab_Oval), QCoreApplication::translate("MainWindow", "Oval", nullptr));
        lineEdit_IdRectangle->setPlaceholderText(QCoreApplication::translate("MainWindow", "String", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "Rectangle Information", nullptr));
        lineEdit_ThicknessRectangle->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "Shape ID", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "O.y", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "Height", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "Width", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "Thickness", nullptr));
        lineEdit_HeightRectangle->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        label_38->setText(QCoreApplication::translate("MainWindow", "O.x", nullptr));
        lineEdit_ColorRectangle->setPlaceholderText(QCoreApplication::translate("MainWindow", "String", nullptr));
        lineEdit_OxRectangle->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        lineEdit_OyRectangle->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        lineEdit_WidthRectangle->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        tabWidget_Shape->setTabText(tabWidget_Shape->indexOf(tab_Rectangle), QCoreApplication::translate("MainWindow", "Rectangle", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_ColorLine->setToolTip(QCoreApplication::translate("MainWindow", "red,black,green,blue,yellow,magenta", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_ColorLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "String", nullptr));
        label_41->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        lineEdit_AyLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int (A.y)", nullptr));
        label_44->setText(QCoreApplication::translate("MainWindow", "Thickness", nullptr));
        lineEdit_AxLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int (A.x)", nullptr));
        label_45->setText(QCoreApplication::translate("MainWindow", "Line Information", nullptr));
        lineEdit_IdLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "String", nullptr));
        lineEdit_ThicknessLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        lineEdit_ByLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int (B.y)", nullptr));
        label_43->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        lineEdit_BxLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int (B.x)", nullptr));
        label_55->setText(QCoreApplication::translate("MainWindow", "Shape ID", nullptr));
        tabWidget_Shape->setTabText(tabWidget_Shape->indexOf(tab_Line), QCoreApplication::translate("MainWindow", "Line", nullptr));
        label_47->setText(QCoreApplication::translate("MainWindow", "Triangle Information", nullptr));
        lineEdit_AyTriangle->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int (A.y)", nullptr));
        label_48->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        lineEdit_AxTriangle->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int (A.x)", nullptr));
        lineEdit_CyTriangle->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int (C.y)", nullptr));
        label_49->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        lineEdit_BxTriangle->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int (B.x)", nullptr));
        lineEdit_IdTriangle->setPlaceholderText(QCoreApplication::translate("MainWindow", "String", nullptr));
        lineEdit_ByTriangle->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int (B.y)", nullptr));
        lineEdit_CxTriangle->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int (C.x)", nullptr));
        label_50->setText(QCoreApplication::translate("MainWindow", "Thickness", nullptr));
        lineEdit_ThicknessTriangle->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        label_51->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        label_52->setText(QCoreApplication::translate("MainWindow", "Shape ID", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_ColorTriangle->setToolTip(QCoreApplication::translate("MainWindow", "red,black,green,blue,yellow,magenta", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_ColorTriangle->setPlaceholderText(QCoreApplication::translate("MainWindow", "String", nullptr));
        label_53->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        tabWidget_Shape->setTabText(tabWidget_Shape->indexOf(tab_Triangle), QCoreApplication::translate("MainWindow", "Triangle", nullptr));
        pushButton_AddShape->setText(QCoreApplication::translate("MainWindow", "Add a new shape", nullptr));
        pushButton_FindShape->setText(QCoreApplication::translate("MainWindow", "Find a existing shape", nullptr));
        pushButton_ClearTableShape->setText(QCoreApplication::translate("MainWindow", "Clear the shape' table", nullptr));
        pushButton_EditShape->setText(QCoreApplication::translate("MainWindow", "Edit a shape", nullptr));
        pushButton_RemoveShape->setText(QCoreApplication::translate("MainWindow", "Remove a shape", nullptr));
        groupBox->setTitle(QString());
        lineEdit_Shape2Edge->setPlaceholderText(QCoreApplication::translate("MainWindow", "String", nullptr));
        lineEdit_Shape1Edge->setPlaceholderText(QCoreApplication::translate("MainWindow", "String", nullptr));
        lineEdit_ColorEdge->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "First ID", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Edge Information", nullptr));
        lineEdit_ThicknessEdge->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Thickness", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Second ID", nullptr));
        lineEdit_IdEdge->setPlaceholderText(QCoreApplication::translate("MainWindow", "String", nullptr));
        label_54->setText(QCoreApplication::translate("MainWindow", "Edge ID", nullptr));
        pushButton_AddEdge->setText(QCoreApplication::translate("MainWindow", "Add a new Edge", nullptr));
        pushButton_FindEdge->setText(QCoreApplication::translate("MainWindow", "Find a existing edge", nullptr));
        pushButton_ClearTableEdge->setText(QCoreApplication::translate("MainWindow", "Clear the edge' table", nullptr));
        pushButton_EditEdge->setText(QCoreApplication::translate("MainWindow", "Edit a edge", nullptr));
        pushButton_RemoveEdge->setText(QCoreApplication::translate("MainWindow", "Remove a edge", nullptr));
        pushButton_DrawShapes->setText(QCoreApplication::translate("MainWindow", "Draw Shapes", nullptr));
        menuLogOut->setTitle(QCoreApplication::translate("MainWindow", "LogOut", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

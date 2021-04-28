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
    QPushButton *pushButton_Sorting;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
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
    QLabel *label_8;
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
    QLabel *label_14;
    QWidget *tab_Rectangle;
    QWidget *tab_STLine;
    QWidget *tab_Triangle;
    QPushButton *pushButton_AddShape;
    QPushButton *pushButton_FindShape;
    QPushButton *pushButton_ClearTableShape;
    QPushButton *pushButton_EditShape;
    QPushButton *pushButton_RemoveShape;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QLineEdit *lineEdit_OxCircle_2;
    QLineEdit *lineEdit_IdCircle_2;
    QLineEdit *lineEdit_ColorCircle_2;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *lineEdit_ThicknessCircle_2;
    QLabel *label_13;
    QLabel *label_22;
    QPushButton *pushButton_AddEdge;
    QPushButton *pushButton_FindEdge;
    QPushButton *pushButton_ClearTableEdge;
    QPushButton *pushButton_EditEdge;
    QPushButton *pushButton_RemoveEdge;
    QPushButton *pushButton_Sorting_2;
    QMenuBar *menubar;
    QMenu *menuLogOut;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(591, 643);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/Resources/form-icon-01.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("<script type='text/javascript'>\n"
"//<![CDATA[\n"
"var pictureSrc =\"https://1.bp.blogspot.com/-CXx9jt2JMRk/Vq-Lh5fm88I/AAAAAAAASwo/XivooDn_oSY/s1600/hoamai.png\"; //the location of the snowflakes\n"
"var pictureWidth = 15; //the width of the snowflakes\n"
"var pictureHeight = 15; //the height of the snowflakes\n"
"var numFlakes = 10; //the number of snowflakes\n"
"var downSpeed = 0.01; //the falling speed of snowflakes (portion of screen per 100 ms)\n"
"var lrFlakes = 10; //the speed that the snowflakes should swing from side to side\n"
"\n"
"\n"
"if( typeof( numFlakes ) != 'number' || Math.round( numFlakes ) != numFlakes || numFlakes < 1 ) { numFlakes = 10; }\n"
"\n"
"//draw the snowflakes\n"
"for( var x = 0; x < numFlakes; x++ ) {\n"
"if( document.layers ) { //releave NS4 bug\n"
"document.write('<layer id=\"snFlkDiv'+x+'\"><imgsrc=\"'+pictureSrc+'\" height=\"'+pictureHeight+'\"width=\"'+pictureWidth+'\" alt=\"*\" border=\"0\"></layer>');\n"
"} else {\n"
"document.write('<div style=\"position:absolute; z-in"
                        "dex:9999;\"id=\"snFlkDiv'+x+'\"><img src=\"'+pictureSrc+'\"height=\"'+pictureHeight+'\" width=\"'+pictureWidth+'\" alt=\"*\"border=\"0\"></div>');\n"
"}\n"
"}\n"
"\n"
"//calculate initial positions (in portions of browser window size)\n"
"var xcoords = new Array(), ycoords = new Array(), snFlkTemp;\n"
"for( var x = 0; x < numFlakes; x++ ) {\n"
"xcoords[x] = ( x + 1 ) / ( numFlakes + 1 );\n"
"do { snFlkTemp = Math.round( ( numFlakes - 1 ) * Math.random() );\n"
"} while( typeof( ycoords[snFlkTemp] ) == 'number' );\n"
"ycoords[snFlkTemp] = x / numFlakes;\n"
"}\n"
"\n"
"//now animate\n"
"function flakeFall() {\n"
"if( !getRefToDivNest('snFlkDiv0') ) { return; }\n"
"var scrWidth = 0, scrHeight = 0, scrollHeight = 0, scrollWidth = 0;\n"
"//find screen settings for all variations. doing this every time allows for resizing and scrolling\n"
"if( typeof( window.innerWidth ) == 'number' ) { scrWidth = window.innerWidth; scrHeight = window.innerHeight; } else {\n"
"if( document.documentElement && (document.documentElement"
                        ".clientWidth ||document.documentElement.clientHeight ) ) {\n"
"scrWidth = document.documentElement.clientWidth; scrHeight = document.documentElement.clientHeight; } else {\n"
"if( document.body && ( document.body.clientWidth || document.body.clientHeight ) ) {\n"
"scrWidth = document.body.clientWidth; scrHeight = document.body.clientHeight; } } }\n"
"if( typeof( window.pageYOffset ) == 'number' ) { scrollHeight = pageYOffset; scrollWidth = pageXOffset; } else {\n"
"if( document.body && ( document.body.scrollLeft ||document.body.scrollTop ) ) { scrollHeight = document.body.scrollTop;scrollWidth = document.body.scrollLeft; } else {\n"
"if(document.documentElement && (document.documentElement.scrollLeft ||document.documentElement.scrollTop ) ) { scrollHeight =document.documentElement.scrollTop; scrollWidth =document.documentElement.scrollLeft; } }\n"
"}\n"
"//move the snowflakes to their new position\n"
"for( var x = 0; x < numFlakes; x++ ) {\n"
"if( ycoords[x] * scrHeight > scrHeight - pictureHeight ) { ycoords["
                        "x] = 0; }\n"
"var divRef = getRefToDivNest('snFlkDiv'+x); if( !divRef ) { return; }\n"
"if( divRef.style ) { divRef = divRef.style; } var oPix = document.childNodes ? 'px' : 0;\n"
"divRef.top = ( Math.round( ycoords[x] * scrHeight ) + scrollHeight ) + oPix;\n"
"divRef.left = ( Math.round( ( ( xcoords[x] * scrWidth ) - (pictureWidth / 2 ) ) + ( ( scrWidth / ( ( numFlakes + 1 ) * 4 ) ) * (Math.sin( lrFlakes * ycoords[x] ) - Math.sin( 3 * lrFlakes * ycoords[x]) ) ) ) + scrollWidth ) + oPix;\n"
"ycoords[x] += downSpeed;\n"
"}\n"
"}\n"
"\n"
"//DHTML handlers\n"
"function getRefToDivNest(divName) {\n"
"if( document.layers ) { return document.layers[divName]; } //NS4\n"
"if( document[divName] ) { return document[divName]; } //NS4 also\n"
"if( document.getElementById ) { return document.getElementById(divName); } //DOM (IE5+, NS6+, Mozilla0.9+, Opera)\n"
"if( document.all ) { return document.all[divName]; } //Proprietary DOM - IE4\n"
"return false;\n"
"}\n"
"\n"
"window.setInterval('flakeFall();',100);\n"
"//]]>\n"
"<"
                        "/script>  "));
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
        pushButton_Sorting = new QPushButton(centralwidget);
        pushButton_Sorting->setObjectName(QString::fromUtf8("pushButton_Sorting"));
        pushButton_Sorting->setGeometry(QRect(440, 530, 141, 71));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(2, 10, 231, 511));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
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
        label_8 = new QLabel(tab_Circle);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 320, 81, 21));
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
        label_14 = new QLabel(tab_Oval);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 10, 151, 16));
        label_14->setFont(font);
        label_14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        tabWidget_Shape->addTab(tab_Oval, QString());
        tab_Rectangle = new QWidget();
        tab_Rectangle->setObjectName(QString::fromUtf8("tab_Rectangle"));
        tabWidget_Shape->addTab(tab_Rectangle, QString());
        tab_STLine = new QWidget();
        tab_STLine->setObjectName(QString::fromUtf8("tab_STLine"));
        tabWidget_Shape->addTab(tab_STLine, QString());
        tab_Triangle = new QWidget();
        tab_Triangle->setObjectName(QString::fromUtf8("tab_Triangle"));
        tabWidget_Shape->addTab(tab_Triangle, QString());

        verticalLayout->addWidget(tabWidget_Shape);

        pushButton_AddShape = new QPushButton(layoutWidget);
        pushButton_AddShape->setObjectName(QString::fromUtf8("pushButton_AddShape"));
        pushButton_AddShape->setStyleSheet(QString::fromUtf8(""));
        pushButton_AddShape->setAutoRepeat(false);

        verticalLayout->addWidget(pushButton_AddShape);

        pushButton_FindShape = new QPushButton(layoutWidget);
        pushButton_FindShape->setObjectName(QString::fromUtf8("pushButton_FindShape"));

        verticalLayout->addWidget(pushButton_FindShape);

        pushButton_ClearTableShape = new QPushButton(layoutWidget);
        pushButton_ClearTableShape->setObjectName(QString::fromUtf8("pushButton_ClearTableShape"));

        verticalLayout->addWidget(pushButton_ClearTableShape);

        pushButton_EditShape = new QPushButton(layoutWidget);
        pushButton_EditShape->setObjectName(QString::fromUtf8("pushButton_EditShape"));

        verticalLayout->addWidget(pushButton_EditShape);

        pushButton_RemoveShape = new QPushButton(layoutWidget);
        pushButton_RemoveShape->setObjectName(QString::fromUtf8("pushButton_RemoveShape"));

        verticalLayout->addWidget(pushButton_RemoveShape);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(240, 10, 191, 511));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget1);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setLayoutDirection(Qt::LeftToRight);
        groupBox->setAutoFillBackground(false);
        groupBox->setStyleSheet(QString::fromUtf8(""));
        lineEdit_OxCircle_2 = new QLineEdit(groupBox);
        lineEdit_OxCircle_2->setObjectName(QString::fromUtf8("lineEdit_OxCircle_2"));
        lineEdit_OxCircle_2->setGeometry(QRect(90, 110, 91, 20));
        lineEdit_OxCircle_2->setCursorMoveStyle(Qt::LogicalMoveStyle);
        lineEdit_IdCircle_2 = new QLineEdit(groupBox);
        lineEdit_IdCircle_2->setObjectName(QString::fromUtf8("lineEdit_IdCircle_2"));
        lineEdit_IdCircle_2->setGeometry(QRect(90, 70, 91, 20));
        lineEdit_IdCircle_2->setCursorMoveStyle(Qt::LogicalMoveStyle);
        lineEdit_ColorCircle_2 = new QLineEdit(groupBox);
        lineEdit_ColorCircle_2->setObjectName(QString::fromUtf8("lineEdit_ColorCircle_2"));
        lineEdit_ColorCircle_2->setGeometry(QRect(90, 150, 91, 20));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 150, 61, 21));
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 70, 71, 21));
        label_11->setFont(font1);
        label_11->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 10, 161, 31));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignCenter);
        lineEdit_ThicknessCircle_2 = new QLineEdit(groupBox);
        lineEdit_ThicknessCircle_2->setObjectName(QString::fromUtf8("lineEdit_ThicknessCircle_2"));
        lineEdit_ThicknessCircle_2->setGeometry(QRect(90, 190, 91, 20));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(0, 190, 81, 21));
        label_13->setFont(font1);
        label_13->setAlignment(Qt::AlignCenter);
        label_22 = new QLabel(groupBox);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(10, 110, 71, 21));
        label_22->setFont(font1);
        label_22->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(groupBox);

        pushButton_AddEdge = new QPushButton(layoutWidget1);
        pushButton_AddEdge->setObjectName(QString::fromUtf8("pushButton_AddEdge"));

        verticalLayout_2->addWidget(pushButton_AddEdge);

        pushButton_FindEdge = new QPushButton(layoutWidget1);
        pushButton_FindEdge->setObjectName(QString::fromUtf8("pushButton_FindEdge"));

        verticalLayout_2->addWidget(pushButton_FindEdge);

        pushButton_ClearTableEdge = new QPushButton(layoutWidget1);
        pushButton_ClearTableEdge->setObjectName(QString::fromUtf8("pushButton_ClearTableEdge"));

        verticalLayout_2->addWidget(pushButton_ClearTableEdge);

        pushButton_EditEdge = new QPushButton(layoutWidget1);
        pushButton_EditEdge->setObjectName(QString::fromUtf8("pushButton_EditEdge"));

        verticalLayout_2->addWidget(pushButton_EditEdge);

        pushButton_RemoveEdge = new QPushButton(layoutWidget1);
        pushButton_RemoveEdge->setObjectName(QString::fromUtf8("pushButton_RemoveEdge"));

        verticalLayout_2->addWidget(pushButton_RemoveEdge);

        pushButton_Sorting_2 = new QPushButton(centralwidget);
        pushButton_Sorting_2->setObjectName(QString::fromUtf8("pushButton_Sorting_2"));
        pushButton_Sorting_2->setGeometry(QRect(0, 530, 431, 71));
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
        groupBox_View->setTitle(QString());
        label_ShapeList->setText(QCoreApplication::translate("MainWindow", "SHAPES LIST", nullptr));
        label_EdgeList->setText(QCoreApplication::translate("MainWindow", "EDGES LIST", nullptr));
        pushButton_Sorting->setText(QCoreApplication::translate("MainWindow", "Sort the list' shape (inc)", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Circle Information", nullptr));
        lineEdit_OxCircle->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "O.x", nullptr));
        lineEdit_OyCircle->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "O.y", nullptr));
        lineEdit_RadiusCircle->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Radius", nullptr));
        lineEdit_ColorCircle->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        lineEdit_ThicknessCircle->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Thickness", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "ID Shape", nullptr));
        lineEdit_IdCircle->setPlaceholderText(QCoreApplication::translate("MainWindow", "String", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget_Shape->setTabText(tabWidget_Shape->indexOf(tab_Circle), QCoreApplication::translate("MainWindow", "Circle", nullptr));
        lineEdit_IdSquare->setPlaceholderText(QCoreApplication::translate("MainWindow", "String", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Square Information", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Thickness", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        lineEdit_ColorSquare->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        lineEdit_ThicknessSquare->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "O.x", nullptr));
        lineEdit_OySquare->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Edge", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "ID Shape", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "O.y", nullptr));
        lineEdit_EdgeSquare->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        lineEdit_OxSquare->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        tabWidget_Shape->setTabText(tabWidget_Shape->indexOf(tab_Square), QCoreApplication::translate("MainWindow", "Square", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Oval Information", nullptr));
        tabWidget_Shape->setTabText(tabWidget_Shape->indexOf(tab_Oval), QCoreApplication::translate("MainWindow", "Oval", nullptr));
        tabWidget_Shape->setTabText(tabWidget_Shape->indexOf(tab_Rectangle), QCoreApplication::translate("MainWindow", "Rectangle", nullptr));
        tabWidget_Shape->setTabText(tabWidget_Shape->indexOf(tab_STLine), QCoreApplication::translate("MainWindow", "STLine", nullptr));
        tabWidget_Shape->setTabText(tabWidget_Shape->indexOf(tab_Triangle), QCoreApplication::translate("MainWindow", "Triangle", nullptr));
        pushButton_AddShape->setText(QCoreApplication::translate("MainWindow", "Add a new shape", nullptr));
        pushButton_FindShape->setText(QCoreApplication::translate("MainWindow", "Find a existing shape", nullptr));
        pushButton_ClearTableShape->setText(QCoreApplication::translate("MainWindow", "Clear the shape' table", nullptr));
        pushButton_EditShape->setText(QCoreApplication::translate("MainWindow", "Edit a shape", nullptr));
        pushButton_RemoveShape->setText(QCoreApplication::translate("MainWindow", "Remove a shape", nullptr));
        groupBox->setTitle(QString());
        lineEdit_OxCircle_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "String", nullptr));
        lineEdit_IdCircle_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "String", nullptr));
        lineEdit_ColorCircle_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "First ID", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Edge Information", nullptr));
        lineEdit_ThicknessCircle_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Int type", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Thickness", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Second ID", nullptr));
        pushButton_AddEdge->setText(QCoreApplication::translate("MainWindow", "Add a new Edge", nullptr));
        pushButton_FindEdge->setText(QCoreApplication::translate("MainWindow", "Find a existing edge", nullptr));
        pushButton_ClearTableEdge->setText(QCoreApplication::translate("MainWindow", "Clear the edge' table", nullptr));
        pushButton_EditEdge->setText(QCoreApplication::translate("MainWindow", "Edit a edge", nullptr));
        pushButton_RemoveEdge->setText(QCoreApplication::translate("MainWindow", "Remove a edge", nullptr));
        pushButton_Sorting_2->setText(QCoreApplication::translate("MainWindow", "Sort the list' shape (inc)", nullptr));
        menuLogOut->setTitle(QCoreApplication::translate("MainWindow", "LogOut", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

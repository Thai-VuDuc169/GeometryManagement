/********************************************************************************
** Form generated from reading UI file 'painterdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINTERDIALOG_H
#define UI_PAINTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_PainterDialog
{
public:

    void setupUi(QDialog *PainterDialog)
    {
        if (PainterDialog->objectName().isEmpty())
            PainterDialog->setObjectName(QString::fromUtf8("PainterDialog"));
        PainterDialog->resize(603, 440);

        retranslateUi(PainterDialog);

        QMetaObject::connectSlotsByName(PainterDialog);
    } // setupUi

    void retranslateUi(QDialog *PainterDialog)
    {
        PainterDialog->setWindowTitle(QCoreApplication::translate("PainterDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PainterDialog: public Ui_PainterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINTERDIALOG_H

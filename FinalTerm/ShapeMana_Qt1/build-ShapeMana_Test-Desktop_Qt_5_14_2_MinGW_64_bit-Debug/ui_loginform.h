/********************************************************************************
** Form generated from reading UI file 'loginform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFORM_H
#define UI_LOGINFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginForm
{
public:
    QGroupBox *grbSignIn;
    QLabel *lblUsername;
    QLabel *lblPassword;
    QPushButton *btnLogin;
    QCheckBox *checkBox;
    QLineEdit *lineEdit_Username;
    QLineEdit *lineEdit_Password;
    QGroupBox *grbLogin;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *LoginForm)
    {
        if (LoginForm->objectName().isEmpty())
            LoginForm->setObjectName(QString::fromUtf8("LoginForm"));
        LoginForm->resize(469, 532);
        LoginForm->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 255, 198);"));
        grbSignIn = new QGroupBox(LoginForm);
        grbSignIn->setObjectName(QString::fromUtf8("grbSignIn"));
        grbSignIn->setGeometry(QRect(-1, 279, 471, 221));
        lblUsername = new QLabel(grbSignIn);
        lblUsername->setObjectName(QString::fromUtf8("lblUsername"));
        lblUsername->setGeometry(QRect(30, 40, 101, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Harrington"));
        font.setPointSize(12);
        lblUsername->setFont(font);
        lblUsername->setScaledContents(true);
        lblUsername->setAlignment(Qt::AlignCenter);
        lblPassword = new QLabel(grbSignIn);
        lblPassword->setObjectName(QString::fromUtf8("lblPassword"));
        lblPassword->setGeometry(QRect(30, 80, 101, 31));
        lblPassword->setFont(font);
        lblPassword->setScaledContents(true);
        lblPassword->setAlignment(Qt::AlignCenter);
        btnLogin = new QPushButton(grbSignIn);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(180, 160, 121, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Harrington"));
        font1.setPointSize(20);
        btnLogin->setFont(font1);
        checkBox = new QCheckBox(grbSignIn);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(120, 130, 271, 17));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/Resources/patient_cards-2-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        checkBox->setIcon(icon);
        lineEdit_Username = new QLineEdit(grbSignIn);
        lineEdit_Username->setObjectName(QString::fromUtf8("lineEdit_Username"));
        lineEdit_Username->setGeometry(QRect(140, 40, 271, 21));
        lineEdit_Password = new QLineEdit(grbSignIn);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        lineEdit_Password->setGeometry(QRect(140, 90, 271, 21));
        lineEdit_Password->setEchoMode(QLineEdit::Password);
        grbLogin = new QGroupBox(LoginForm);
        grbLogin->setObjectName(QString::fromUtf8("grbLogin"));
        grbLogin->setGeometry(QRect(0, 200, 471, 51));
        label_2 = new QLabel(grbLogin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 471, 51));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 33, 33);\n"
"color: rgb(255, 255, 255);"));
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignCenter);
        label = new QLabel(LoginForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 10, 181, 171));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Images/Resources/logo.png")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(LoginForm);

        QMetaObject::connectSlotsByName(LoginForm);
    } // setupUi

    void retranslateUi(QDialog *LoginForm)
    {
        LoginForm->setWindowTitle(QCoreApplication::translate("LoginForm", "Dialog", nullptr));
        grbSignIn->setTitle(QString());
        lblUsername->setText(QCoreApplication::translate("LoginForm", "Username", nullptr));
        lblPassword->setText(QCoreApplication::translate("LoginForm", "Password", nullptr));
        btnLogin->setText(QCoreApplication::translate("LoginForm", "Login", nullptr));
        checkBox->setText(QCoreApplication::translate("LoginForm", "I am not a robot", nullptr));
        grbLogin->setTitle(QString());
        label_2->setText(QCoreApplication::translate("LoginForm", "ShapeMana_QtFramework", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginForm: public Ui_LoginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFORM_H

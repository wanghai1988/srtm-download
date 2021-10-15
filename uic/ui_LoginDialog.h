/********************************************************************************
** Form generated from reading UI file 'LoginDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lne_user;
    QLabel *label_3;
    QLineEdit *lne_password;
    QLabel *label;
    QCheckBox *chk_save_credentials;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(400, 155);
        gridLayout = new QGridLayout(LoginDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        lne_user = new QLineEdit(LoginDialog);
        lne_user->setObjectName(QString::fromUtf8("lne_user"));

        gridLayout->addWidget(lne_user, 1, 1, 1, 1);

        label_3 = new QLabel(LoginDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);
        label_3->setOpenExternalLinks(true);

        gridLayout->addWidget(label_3, 0, 0, 1, 2);

        lne_password = new QLineEdit(LoginDialog);
        lne_password->setObjectName(QString::fromUtf8("lne_password"));
        lne_password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lne_password, 2, 1, 1, 1);

        label = new QLabel(LoginDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        chk_save_credentials = new QCheckBox(LoginDialog);
        chk_save_credentials->setObjectName(QString::fromUtf8("chk_save_credentials"));

        gridLayout->addWidget(chk_save_credentials, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(LoginDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 1, 1, 1);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "LoginDialog", nullptr));
        label_2->setText(QApplication::translate("LoginDialog", "Password:", nullptr));
        lne_user->setPlaceholderText(QApplication::translate("LoginDialog", "username", nullptr));
        label_3->setText(QApplication::translate("LoginDialog", "<html><head/><body><p>https://urs.earthdata.nasa.gov is requesting your username and password. If you do not have a Earthdata Login, create one at </p><p><a href=\"https://urs.earthdata.nasa.gov//users/new\"><span style=\" text-decoration: underline; color:#0000ff;\">https://urs.earthdata.nasa.gov/users/new</span></a></p></body></html>", nullptr));
        lne_password->setPlaceholderText(QApplication::translate("LoginDialog", "password", nullptr));
        label->setText(QApplication::translate("LoginDialog", "Username:", nullptr));
        chk_save_credentials->setText(QApplication::translate("LoginDialog", "Save Credentials", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H

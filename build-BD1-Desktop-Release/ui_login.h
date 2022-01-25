/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *l_dbName;
    QLabel *label;
    QLineEdit *l_username;
    QLabel *label_3;
    QLineEdit *l_passwd;
    QLineEdit *l_hostAddr;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *l_port;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(400, 300);
        gridLayout = new QGridLayout(login);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(login);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        l_dbName = new QLineEdit(login);
        l_dbName->setObjectName(QString::fromUtf8("l_dbName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, l_dbName);

        label = new QLabel(login);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        l_username = new QLineEdit(login);
        l_username->setObjectName(QString::fromUtf8("l_username"));

        formLayout->setWidget(1, QFormLayout::FieldRole, l_username);

        label_3 = new QLabel(login);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        l_passwd = new QLineEdit(login);
        l_passwd->setObjectName(QString::fromUtf8("l_passwd"));
        l_passwd->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, l_passwd);

        l_hostAddr = new QLineEdit(login);
        l_hostAddr->setObjectName(QString::fromUtf8("l_hostAddr"));

        formLayout->setWidget(3, QFormLayout::FieldRole, l_hostAddr);

        label_4 = new QLabel(login);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(login);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        l_port = new QLineEdit(login);
        l_port->setObjectName(QString::fromUtf8("l_port"));

        formLayout->setWidget(4, QFormLayout::FieldRole, l_port);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(login);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(login);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, login, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, login, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("login", "Nazwa BD", nullptr));
        label->setText(QCoreApplication::translate("login", "Nazwa u\305\274ytkownika", nullptr));
        label_3->setText(QCoreApplication::translate("login", "Has\305\202o", nullptr));
        label_4->setText(QCoreApplication::translate("login", "Adres Hosta", nullptr));
        label_5->setText(QCoreApplication::translate("login", "Port", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H

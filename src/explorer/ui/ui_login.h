/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *logo;
    QSpacerItem *verticalSpacer_3;
    QLabel *loading;
    QHBoxLayout *horizontalLayout_2;
    QWidget *loginForm;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *protocol;
    QLabel *label;
    QLineEdit *host;
    QLabel *label_2;
    QLineEdit *port;
    QWidget *horizontalWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *clean_session;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QLineEdit *connection_id;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QLineEdit *user;
    QLabel *label_4;
    QLineEdit *password;
    QSpacerItem *verticalSpacer_4;
    QPushButton *connect;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(800, 600);
        Login->setStyleSheet(QString::fromUtf8("#centralwidget {background: rgba(32, 80, 96, 100); }"));
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, -1, -1);
        logo = new QLabel(centralwidget);
        logo->setObjectName(QString::fromUtf8("logo"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(logo->sizePolicy().hasHeightForWidth());
        logo->setSizePolicy(sizePolicy);
        logo->setMinimumSize(QSize(600, 150));
        logo->setStyleSheet(QString::fromUtf8("border-image: url(:/images/mqtt-logo.png);\n"
""));

        horizontalLayout->addWidget(logo);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        loading = new QLabel(centralwidget);
        loading->setObjectName(QString::fromUtf8("loading"));
        loading->setMinimumSize(QSize(100, 100));
        loading->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(loading);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        loginForm = new QWidget(centralwidget);
        loginForm->setObjectName(QString::fromUtf8("loginForm"));
        sizePolicy.setHeightForWidth(loginForm->sizePolicy().hasHeightForWidth());
        loginForm->setSizePolicy(sizePolicy);
        loginForm->setMinimumSize(QSize(750, 200));
        verticalLayout_2 = new QVBoxLayout(loginForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 1, -1, 1);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        protocol = new QComboBox(loginForm);
        protocol->setObjectName(QString::fromUtf8("protocol"));

        horizontalLayout_3->addWidget(protocol);

        label = new QLabel(loginForm);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        host = new QLineEdit(loginForm);
        host->setObjectName(QString::fromUtf8("host"));

        horizontalLayout_3->addWidget(host);

        label_2 = new QLabel(loginForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        port = new QLineEdit(loginForm);
        port->setObjectName(QString::fromUtf8("port"));

        horizontalLayout_3->addWidget(port);

        horizontalWidget_4 = new QWidget(loginForm);
        horizontalWidget_4->setObjectName(QString::fromUtf8("horizontalWidget_4"));
        sizePolicy.setHeightForWidth(horizontalWidget_4->sizePolicy().hasHeightForWidth());
        horizontalWidget_4->setSizePolicy(sizePolicy);
        horizontalWidget_4->setMinimumSize(QSize(1, 150));
        horizontalLayout_5 = new QHBoxLayout(horizontalWidget_4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));

        horizontalLayout_3->addWidget(horizontalWidget_4);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, -1, -1);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        clean_session = new QCheckBox(loginForm);
        clean_session->setObjectName(QString::fromUtf8("clean_session"));

        horizontalLayout_6->addWidget(clean_session);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, -1, -1, -1);
        horizontalSpacer = new QSpacerItem(170, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        label_5 = new QLabel(loginForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_8->addWidget(label_5);

        connection_id = new QLineEdit(loginForm);
        connection_id->setObjectName(QString::fromUtf8("connection_id"));

        horizontalLayout_8->addWidget(connection_id);


        horizontalLayout_6->addLayout(horizontalLayout_8);


        verticalLayout_2->addLayout(horizontalLayout_6);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_3 = new QLabel(loginForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_7->addWidget(label_3);

        user = new QLineEdit(loginForm);
        user->setObjectName(QString::fromUtf8("user"));

        horizontalLayout_7->addWidget(user);

        label_4 = new QLabel(loginForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_7->addWidget(label_4);

        password = new QLineEdit(loginForm);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEchoMode(QLineEdit::Password);

        horizontalLayout_7->addWidget(password);


        verticalLayout_2->addLayout(horizontalLayout_7);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        connect = new QPushButton(loginForm);
        connect->setObjectName(QString::fromUtf8("connect"));

        verticalLayout_2->addWidget(connect);


        horizontalLayout_2->addWidget(loginForm);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        Login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        Login->setMenuBar(menubar);
        statusbar = new QStatusBar(Login);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Login->setStatusBar(statusbar);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", nullptr));
        logo->setText(QString());
        loading->setText(QString());
        label->setText(QApplication::translate("Login", "Host", nullptr));
        host->setText(QApplication::translate("Login", "test.mosquitto.org", nullptr));
        label_2->setText(QApplication::translate("Login", "Port", nullptr));
        clean_session->setText(QApplication::translate("Login", "Clean session", nullptr));
        label_5->setText(QApplication::translate("Login", "Connection ID", nullptr));
        label_3->setText(QApplication::translate("Login", "User", nullptr));
        label_4->setText(QApplication::translate("Login", "Password", nullptr));
        connect->setText(QApplication::translate("Login", "Connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H

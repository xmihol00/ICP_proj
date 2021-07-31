/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *tree;
    QTreeView *messageList;
    QLineEdit *topic;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QComboBox *qos;
    QPushButton *subscribe;
    QPushButton *unsubscribe;
    QVBoxLayout *verticalLayout_5;
    QPushButton *dashboard;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *save_snapshot;
    QPushButton *disconnect;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QListWidget *listWidget;
    QLabel *label_2;
    QLineEdit *path;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QPushButton *chooseFile;
    QPushButton *clear;
    QHBoxLayout *horizontalLayout_5;
    QPlainTextEdit *msg_to_publish;
    QLabel *img_label;
    QPushButton *publish;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1118, 643);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        tree = new QVBoxLayout();
        tree->setObjectName(QString::fromUtf8("tree"));
        tree->setContentsMargins(0, -1, -1, -1);
        messageList = new QTreeView(centralwidget);
        messageList->setObjectName(QString::fromUtf8("messageList"));
        messageList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        messageList->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        messageList->header()->setCascadingSectionResizes(true);
        messageList->header()->setDefaultSectionSize(100);

        tree->addWidget(messageList);

        topic = new QLineEdit(centralwidget);
        topic->setObjectName(QString::fromUtf8("topic"));

        tree->addWidget(topic);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_4);

        qos = new QComboBox(centralwidget);
        qos->addItem(QString());
        qos->addItem(QString());
        qos->addItem(QString());
        qos->setObjectName(QString::fromUtf8("qos"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qos->sizePolicy().hasHeightForWidth());
        qos->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(qos);

        subscribe = new QPushButton(centralwidget);
        subscribe->setObjectName(QString::fromUtf8("subscribe"));

        horizontalLayout_2->addWidget(subscribe);

        unsubscribe = new QPushButton(centralwidget);
        unsubscribe->setObjectName(QString::fromUtf8("unsubscribe"));

        horizontalLayout_2->addWidget(unsubscribe);


        tree->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(tree);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, -1, -1, -1);
        dashboard = new QPushButton(centralwidget);
        dashboard->setObjectName(QString::fromUtf8("dashboard"));

        verticalLayout_5->addWidget(dashboard);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, 0, -1);
        save_snapshot = new QPushButton(centralwidget);
        save_snapshot->setObjectName(QString::fromUtf8("save_snapshot"));

        horizontalLayout_4->addWidget(save_snapshot);

        disconnect = new QPushButton(centralwidget);
        disconnect->setObjectName(QString::fromUtf8("disconnect"));

        horizontalLayout_4->addWidget(disconnect);


        verticalLayout_5->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_5->addWidget(label);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy2);
        listWidget->setMinimumSize(QSize(300, 0));
        listWidget->setMaximumSize(QSize(100, 16777215));

        verticalLayout_5->addWidget(listWidget);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_5->addWidget(label_2);

        path = new QLineEdit(centralwidget);
        path->setObjectName(QString::fromUtf8("path"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(path->sizePolicy().hasHeightForWidth());
        path->setSizePolicy(sizePolicy3);

        verticalLayout_5->addWidget(path);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(30, 0, -1, -1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        chooseFile = new QPushButton(centralwidget);
        chooseFile->setObjectName(QString::fromUtf8("chooseFile"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(chooseFile->sizePolicy().hasHeightForWidth());
        chooseFile->setSizePolicy(sizePolicy4);
        chooseFile->setMinimumSize(QSize(30, 0));

        horizontalLayout_3->addWidget(chooseFile);

        clear = new QPushButton(centralwidget);
        clear->setObjectName(QString::fromUtf8("clear"));

        horizontalLayout_3->addWidget(clear);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, -1, -1);
        msg_to_publish = new QPlainTextEdit(centralwidget);
        msg_to_publish->setObjectName(QString::fromUtf8("msg_to_publish"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(msg_to_publish->sizePolicy().hasHeightForWidth());
        msg_to_publish->setSizePolicy(sizePolicy5);

        horizontalLayout_5->addWidget(msg_to_publish);


        verticalLayout_5->addLayout(horizontalLayout_5);

        img_label = new QLabel(centralwidget);
        img_label->setObjectName(QString::fromUtf8("img_label"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(img_label->sizePolicy().hasHeightForWidth());
        img_label->setSizePolicy(sizePolicy6);
        img_label->setMinimumSize(QSize(100, 150));
        img_label->setMaximumSize(QSize(300, 450));

        verticalLayout_5->addWidget(img_label);

        publish = new QPushButton(centralwidget);
        publish->setObjectName(QString::fromUtf8("publish"));

        verticalLayout_5->addWidget(publish);


        horizontalLayout->addLayout(verticalLayout_5);


        verticalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1118, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MQTT Explorer", nullptr));
        topic->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "QOS", nullptr));
        qos->setItemText(0, QApplication::translate("MainWindow", "0", nullptr));
        qos->setItemText(1, QApplication::translate("MainWindow", "1", nullptr));
        qos->setItemText(2, QApplication::translate("MainWindow", "2", nullptr));

        subscribe->setText(QApplication::translate("MainWindow", "Subscribe", nullptr));
        unsubscribe->setText(QApplication::translate("MainWindow", "Unsubscribe", nullptr));
        dashboard->setText(QApplication::translate("MainWindow", "Dashboard", nullptr));
        save_snapshot->setText(QApplication::translate("MainWindow", "Save snapshot", nullptr));
        disconnect->setText(QApplication::translate("MainWindow", "Disconnect", nullptr));
        label->setText(QApplication::translate("MainWindow", "History", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Topic path", nullptr));
        path->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Message", nullptr));
        chooseFile->setText(QApplication::translate("MainWindow", "Choose file", nullptr));
        clear->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        msg_to_publish->setPlainText(QString());
        img_label->setText(QApplication::translate("MainWindow", "Image", nullptr));
        publish->setText(QApplication::translate("MainWindow", "Publish", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

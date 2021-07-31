/********************************************************************************
** Form generated from reading UI file 'new_device_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_DEVICE_DIALOG_H
#define UI_NEW_DEVICE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewDeviceDialog
{
public:
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *device_name;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *device_type;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *device_topic;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *cancel;
    QPushButton *ok;

    void setupUi(QDialog *NewDeviceDialog)
    {
        if (NewDeviceDialog->objectName().isEmpty())
            NewDeviceDialog->setObjectName(QString::fromUtf8("NewDeviceDialog"));
        NewDeviceDialog->resize(400, 300);
        verticalWidget = new QWidget(NewDeviceDialog);
        verticalWidget->setObjectName(QString::fromUtf8("verticalWidget"));
        verticalWidget->setGeometry(QRect(0, 0, 391, 291));
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        label = new QLabel(verticalWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        device_name = new QLineEdit(verticalWidget);
        device_name->setObjectName(QString::fromUtf8("device_name"));

        horizontalLayout->addWidget(device_name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(verticalWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        device_type = new QComboBox(verticalWidget);
        device_type->addItem(QString());
        device_type->addItem(QString());
        device_type->addItem(QString());
        device_type->addItem(QString());
        device_type->addItem(QString());
        device_type->addItem(QString());
        device_type->addItem(QString());
        device_type->addItem(QString());
        device_type->addItem(QString());
        device_type->addItem(QString());
        device_type->setObjectName(QString::fromUtf8("device_type"));

        horizontalLayout_4->addWidget(device_type);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(verticalWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        device_topic = new QLineEdit(verticalWidget);
        device_topic->setObjectName(QString::fromUtf8("device_topic"));

        horizontalLayout_3->addWidget(device_topic);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        cancel = new QPushButton(verticalWidget);
        cancel->setObjectName(QString::fromUtf8("cancel"));

        horizontalLayout_5->addWidget(cancel);

        ok = new QPushButton(verticalWidget);
        ok->setObjectName(QString::fromUtf8("ok"));

        horizontalLayout_5->addWidget(ok);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(NewDeviceDialog);

        QMetaObject::connectSlotsByName(NewDeviceDialog);
    } // setupUi

    void retranslateUi(QDialog *NewDeviceDialog)
    {
        NewDeviceDialog->setWindowTitle(QApplication::translate("NewDeviceDialog", "New device", nullptr));
        label->setText(QApplication::translate("NewDeviceDialog", "Name", nullptr));
        device_name->setText(QString());
        label_3->setText(QApplication::translate("NewDeviceDialog", "Device type", nullptr));
        device_type->setItemText(0, QApplication::translate("NewDeviceDialog", "Light", nullptr));
        device_type->setItemText(1, QApplication::translate("NewDeviceDialog", "Thermometer", nullptr));
        device_type->setItemText(2, QApplication::translate("NewDeviceDialog", "Hygrometer", nullptr));
        device_type->setItemText(3, QApplication::translate("NewDeviceDialog", "Wattmeter", nullptr));
        device_type->setItemText(4, QApplication::translate("NewDeviceDialog", "Move sensor", nullptr));
        device_type->setItemText(5, QApplication::translate("NewDeviceDialog", "Camera", nullptr));
        device_type->setItemText(6, QApplication::translate("NewDeviceDialog", "Relay", nullptr));
        device_type->setItemText(7, QApplication::translate("NewDeviceDialog", "Valve", nullptr));
        device_type->setItemText(8, QApplication::translate("NewDeviceDialog", "Thermostat", nullptr));
        device_type->setItemText(9, QApplication::translate("NewDeviceDialog", "Lock", nullptr));

        label_2->setText(QApplication::translate("NewDeviceDialog", "Topic", nullptr));
        cancel->setText(QApplication::translate("NewDeviceDialog", "Cancel", nullptr));
        ok->setText(QApplication::translate("NewDeviceDialog", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewDeviceDialog: public Ui_NewDeviceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_DEVICE_DIALOG_H

/********************************************************************************
** Form generated from reading UI file 'delete_device_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_DEVICE_DIALOG_H
#define UI_DELETE_DEVICE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DeleteDeviceDialog
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *device_list;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancel;
    QPushButton *ok;

    void setupUi(QDialog *DeleteDeviceDialog)
    {
        if (DeleteDeviceDialog->objectName().isEmpty())
            DeleteDeviceDialog->setObjectName(QString::fromUtf8("DeleteDeviceDialog"));
        DeleteDeviceDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(DeleteDeviceDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        device_list = new QListWidget(DeleteDeviceDialog);
        device_list->setObjectName(QString::fromUtf8("device_list"));

        verticalLayout->addWidget(device_list);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        cancel = new QPushButton(DeleteDeviceDialog);
        cancel->setObjectName(QString::fromUtf8("cancel"));

        horizontalLayout->addWidget(cancel);

        ok = new QPushButton(DeleteDeviceDialog);
        ok->setObjectName(QString::fromUtf8("ok"));

        horizontalLayout->addWidget(ok);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DeleteDeviceDialog);

        QMetaObject::connectSlotsByName(DeleteDeviceDialog);
    } // setupUi

    void retranslateUi(QDialog *DeleteDeviceDialog)
    {
        DeleteDeviceDialog->setWindowTitle(QApplication::translate("DeleteDeviceDialog", "Delete Device", nullptr));
        cancel->setText(QApplication::translate("DeleteDeviceDialog", "Canel", nullptr));
        ok->setText(QApplication::translate("DeleteDeviceDialog", "Delete Selected", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteDeviceDialog: public Ui_DeleteDeviceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_DEVICE_DIALOG_H

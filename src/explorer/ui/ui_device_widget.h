/********************************************************************************
** Form generated from reading UI file 'device_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICE_WIDGET_H
#define UI_DEVICE_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeviceWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *name;
    QLabel *icon;
    QLabel *description;

    void setupUi(QWidget *DeviceWidget)
    {
        if (DeviceWidget->objectName().isEmpty())
            DeviceWidget->setObjectName(QString::fromUtf8("DeviceWidget"));
        DeviceWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(DeviceWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        name = new QLabel(DeviceWidget);
        name->setObjectName(QString::fromUtf8("name"));

        verticalLayout->addWidget(name);

        icon = new QLabel(DeviceWidget);
        icon->setObjectName(QString::fromUtf8("icon"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(icon->sizePolicy().hasHeightForWidth());
        icon->setSizePolicy(sizePolicy);
        icon->setMinimumSize(QSize(0, 200));

        verticalLayout->addWidget(icon);

        description = new QLabel(DeviceWidget);
        description->setObjectName(QString::fromUtf8("description"));

        verticalLayout->addWidget(description);


        retranslateUi(DeviceWidget);

        QMetaObject::connectSlotsByName(DeviceWidget);
    } // setupUi

    void retranslateUi(QWidget *DeviceWidget)
    {
        DeviceWidget->setWindowTitle(QApplication::translate("DeviceWidget", "Form", nullptr));
        name->setText(QString());
        icon->setText(QString());
        description->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DeviceWidget: public Ui_DeviceWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICE_WIDGET_H

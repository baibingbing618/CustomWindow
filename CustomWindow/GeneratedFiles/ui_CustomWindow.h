/********************************************************************************
** Form generated from reading UI file 'CustomWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMWINDOW_H
#define UI_CUSTOMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomWindowClass
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *CustomWindowClass)
    {
        if (CustomWindowClass->objectName().isEmpty())
            CustomWindowClass->setObjectName(QStringLiteral("CustomWindowClass"));
        CustomWindowClass->resize(600, 400);
        centralWidget = new QWidget(CustomWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        CustomWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CustomWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        CustomWindowClass->setMenuBar(menuBar);

        retranslateUi(CustomWindowClass);

        QMetaObject::connectSlotsByName(CustomWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *CustomWindowClass)
    {
        CustomWindowClass->setWindowTitle(QApplication::translate("CustomWindowClass", "CustomWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomWindowClass: public Ui_CustomWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMWINDOW_H

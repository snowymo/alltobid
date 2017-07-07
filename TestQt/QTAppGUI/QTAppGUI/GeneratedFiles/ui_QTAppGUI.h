/********************************************************************************
** Form generated from reading UI file 'QTAppGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTAPPGUI_H
#define UI_QTAPPGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTAppGUIClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QTAppGUIClass)
    {
        if (QTAppGUIClass->objectName().isEmpty())
            QTAppGUIClass->setObjectName(QStringLiteral("QTAppGUIClass"));
        QTAppGUIClass->resize(600, 400);
        menuBar = new QMenuBar(QTAppGUIClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QTAppGUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QTAppGUIClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QTAppGUIClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QTAppGUIClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QTAppGUIClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QTAppGUIClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QTAppGUIClass->setStatusBar(statusBar);

        retranslateUi(QTAppGUIClass);

        QMetaObject::connectSlotsByName(QTAppGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *QTAppGUIClass)
    {
        QTAppGUIClass->setWindowTitle(QApplication::translate("QTAppGUIClass", "QTAppGUI", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QTAppGUIClass: public Ui_QTAppGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTAPPGUI_H

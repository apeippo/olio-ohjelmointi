/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *BtnCount;
    QPushButton *BtnReset;
    QLineEdit *txtResult;
    QLabel *labelInfo;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(512, 446);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        BtnCount = new QPushButton(centralwidget);
        BtnCount->setObjectName("BtnCount");
        BtnCount->setGeometry(QRect(60, 170, 151, 61));
        BtnReset = new QPushButton(centralwidget);
        BtnReset->setObjectName("BtnReset");
        BtnReset->setGeometry(QRect(60, 240, 151, 61));
        txtResult = new QLineEdit(centralwidget);
        txtResult->setObjectName("txtResult");
        txtResult->setGeometry(QRect(240, 210, 211, 61));
        txtResult->setReadOnly(true);
        labelInfo = new QLabel(centralwidget);
        labelInfo->setObjectName("labelInfo");
        labelInfo->setGeometry(QRect(238, 295, 231, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 512, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        BtnCount->setText(QCoreApplication::translate("MainWindow", "Count", nullptr));
        BtnReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        txtResult->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelInfo->setText(QCoreApplication::translate("MainWindow", "Painiketta painettu 0 kertaa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

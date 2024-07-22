/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *Jugar;
    QPushButton *Creditos;
    QPushButton *Reglas;
    QPushButton *Salir;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(440, 440);
        MainWindow->setMinimumSize(QSize(440, 440));
        MainWindow->setMaximumSize(QSize(440, 490));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMinimumSize(QSize(440, 440));
        centralwidget->setMaximumSize(QSize(440, 440));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 440, 440));
        label->setMinimumSize(QSize(440, 440));
        label->setMaximumSize(QSize(440, 440));
        label->setScaledContents(true);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(170, 130, 98, 155));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Jugar = new QPushButton(verticalLayoutWidget);
        Jugar->setObjectName("Jugar");
        Jugar->setStyleSheet(QString::fromUtf8("font: 12pt \"Rockwell\";\n"
"background-color: rgb(218, 194, 117);"));

        verticalLayout_2->addWidget(Jugar);

        Creditos = new QPushButton(verticalLayoutWidget);
        Creditos->setObjectName("Creditos");
        Creditos->setStyleSheet(QString::fromUtf8("font: 12pt \"Rockwell\";\n"
"background-color: rgb(218, 194, 117);"));

        verticalLayout_2->addWidget(Creditos);

        Reglas = new QPushButton(verticalLayoutWidget);
        Reglas->setObjectName("Reglas");
        Reglas->setStyleSheet(QString::fromUtf8("font: 12pt \"Rockwell\";\n"
"background-color: rgb(218, 194, 117);"));

        verticalLayout_2->addWidget(Reglas);

        Salir = new QPushButton(verticalLayoutWidget);
        Salir->setObjectName("Salir");
        Salir->setStyleSheet(QString::fromUtf8("font: 12pt \"Rockwell\";\n"
"background-color: rgb(218, 194, 117);"));

        verticalLayout_2->addWidget(Salir);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 440, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "BlackJack", nullptr));
        label->setText(QString());
        Jugar->setText(QCoreApplication::translate("MainWindow", "Jugar", nullptr));
        Creditos->setText(QCoreApplication::translate("MainWindow", "Cr\303\251ditos", nullptr));
        Reglas->setText(QCoreApplication::translate("MainWindow", "Reglas", nullptr));
        Salir->setText(QCoreApplication::translate("MainWindow", "Salir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

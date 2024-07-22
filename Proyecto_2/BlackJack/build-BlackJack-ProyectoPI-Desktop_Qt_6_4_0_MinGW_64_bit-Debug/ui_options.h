/********************************************************************************
** Form generated from reading UI file 'options.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONS_H
#define UI_OPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Options
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *OnePlayer;
    QPushButton *TwoPlayers;
    QPushButton *TresJugadores;
    QLabel *label_opci;

    void setupUi(QDialog *Options)
    {
        if (Options->objectName().isEmpty())
            Options->setObjectName("Options");
        Options->resize(350, 350);
        Options->setMinimumSize(QSize(350, 350));
        Options->setMaximumSize(QSize(350, 350));
        layoutWidget = new QWidget(Options);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(100, 90, 139, 124));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Symbol")});
        font.setPointSize(12);
        font.setBold(false);
        layoutWidget->setFont(font);
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        OnePlayer = new QPushButton(layoutWidget);
        OnePlayer->setObjectName("OnePlayer");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Rockwell")});
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        OnePlayer->setFont(font1);
        OnePlayer->setStyleSheet(QString::fromUtf8("font: 11pt \"Rockwell\";\n"
"background-color: rgb(130, 129, 122);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(61, 61, 61);\n"
"selection-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(OnePlayer);

        TwoPlayers = new QPushButton(layoutWidget);
        TwoPlayers->setObjectName("TwoPlayers");
        TwoPlayers->setFont(font1);
        TwoPlayers->setStyleSheet(QString::fromUtf8("font: 11pt \"Rockwell\";\n"
"background-color: rgb(130, 129, 122);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(61, 61, 61);\n"
"selection-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(TwoPlayers);

        TresJugadores = new QPushButton(layoutWidget);
        TresJugadores->setObjectName("TresJugadores");
        TresJugadores->setFont(font1);
        TresJugadores->setStyleSheet(QString::fromUtf8("font: 11pt \"Rockwell\";\n"
"background-color: rgb(130, 129, 122);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(61, 61, 61);\n"
"selection-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(TresJugadores);

        label_opci = new QLabel(Options);
        label_opci->setObjectName("label_opci");
        label_opci->setGeometry(QRect(0, 0, 351, 351));
        label_opci->setScaledContents(true);
        label_opci->raise();
        layoutWidget->raise();

        retranslateUi(Options);

        QMetaObject::connectSlotsByName(Options);
    } // setupUi

    void retranslateUi(QDialog *Options)
    {
        Options->setWindowTitle(QCoreApplication::translate("Options", "Cantidad de Jugadores", nullptr));
        OnePlayer->setText(QCoreApplication::translate("Options", "Un Jugador", nullptr));
        TwoPlayers->setText(QCoreApplication::translate("Options", "Dos Jugadores", nullptr));
        TresJugadores->setText(QCoreApplication::translate("Options", "Tres Jugadores", nullptr));
        label_opci->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Options: public Ui_Options {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONS_H

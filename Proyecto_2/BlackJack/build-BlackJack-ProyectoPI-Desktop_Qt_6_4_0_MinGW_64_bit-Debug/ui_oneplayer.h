/********************************************************************************
** Form generated from reading UI file 'oneplayer.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONEPLAYER_H
#define UI_ONEPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_oneplayer
{
public:
    QLabel *sumaJug;
    QLabel *CartaJug3;
    QLabel *CPU11;
    QPushButton *detenerse;
    QLabel *CPU31;
    QLabel *CPU21;
    QLabel *CartaCPU2;
    QLabel *Jug3Num2;
    QLabel *Jug2Num1;
    QPushButton *pedirCarta;
    QLabel *Jug1Num1;
    QLabel *CPU12;
    QLabel *Jug3Num1;
    QLabel *CartaCPU3;
    QLabel *resultado;
    QLabel *sumaCPU;
    QLabel *Jug;
    QLabel *Jug2Num2;
    QLabel *Casa;
    QLabel *CartaJug2;
    QLabel *CPU22;
    QLabel *Jug1Num2;
    QLabel *CPU32;
    QLabel *CartaJug1;
    QLabel *CartaCPU1;
    QLabel *label;
    QLabel *totalJug;
    QLabel *totalCPU;
    QLabel *algo;

    void setupUi(QDialog *oneplayer)
    {
        if (oneplayer->objectName().isEmpty())
            oneplayer->setObjectName("oneplayer");
        oneplayer->resize(900, 615);
        oneplayer->setMinimumSize(QSize(900, 615));
        oneplayer->setMaximumSize(QSize(900, 615));
        oneplayer->setStyleSheet(QString::fromUtf8(""));
        sumaJug = new QLabel(oneplayer);
        sumaJug->setObjectName("sumaJug");
        sumaJug->setGeometry(QRect(610, 120, 129, 27));
        QFont font;
        font.setPointSize(12);
        sumaJug->setFont(font);
        sumaJug->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        CartaJug3 = new QLabel(oneplayer);
        CartaJug3->setObjectName("CartaJug3");
        CartaJug3->setGeometry(QRect(410, 350, 101, 141));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(1, 187, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 13, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(217, 217, 6, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(89, 89, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(119, 119, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(217, 217, 127, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(208, 208, 208, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        QBrush brush10(QColor(227, 227, 227, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        QBrush brush11(QColor(64, 65, 66, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        QBrush brush12(QColor(160, 160, 160, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        QBrush brush13(QColor(255, 51, 51, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush13);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush14(QColor(105, 105, 105, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush14);
        QBrush brush15(QColor(53, 54, 55, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush9);
        CartaJug3->setPalette(palette);
        CartaJug3->setStyleSheet(QString::fromUtf8("background-color: rgb(1, 187, 255);"));
        CartaJug3->setScaledContents(true);
        CPU11 = new QLabel(oneplayer);
        CPU11->setObjectName("CPU11");
        CPU11->setGeometry(QRect(80, 130, 21, 20));
        detenerse = new QPushButton(oneplayer);
        detenerse->setObjectName("detenerse");
        detenerse->setGeometry(QRect(130, 550, 86, 32));
        QFont font1;
        font1.setPointSize(10);
        detenerse->setFont(font1);
        CPU31 = new QLabel(oneplayer);
        CPU31->setObjectName("CPU31");
        CPU31->setGeometry(QRect(420, 130, 21, 20));
        CPU21 = new QLabel(oneplayer);
        CPU21->setObjectName("CPU21");
        CPU21->setGeometry(QRect(250, 130, 21, 20));
        CartaCPU2 = new QLabel(oneplayer);
        CartaCPU2->setObjectName("CartaCPU2");
        CartaCPU2->setGeometry(QRect(240, 120, 101, 141));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush9);
        CartaCPU2->setPalette(palette1);
        CartaCPU2->setStyleSheet(QString::fromUtf8("background-color: rgb(1, 187, 255);"));
        CartaCPU2->setScaledContents(true);
        Jug3Num2 = new QLabel(oneplayer);
        Jug3Num2->setObjectName("Jug3Num2");
        Jug3Num2->setGeometry(QRect(490, 460, 12, 20));
        Jug2Num1 = new QLabel(oneplayer);
        Jug2Num1->setObjectName("Jug2Num1");
        Jug2Num1->setGeometry(QRect(250, 360, 21, 20));
        pedirCarta = new QPushButton(oneplayer);
        pedirCarta->setObjectName("pedirCarta");
        pedirCarta->setGeometry(QRect(30, 550, 93, 32));
        pedirCarta->setFont(font1);
        Jug1Num1 = new QLabel(oneplayer);
        Jug1Num1->setObjectName("Jug1Num1");
        Jug1Num1->setGeometry(QRect(80, 360, 21, 20));
        CPU12 = new QLabel(oneplayer);
        CPU12->setObjectName("CPU12");
        CPU12->setGeometry(QRect(140, 230, 21, 20));
        Jug3Num1 = new QLabel(oneplayer);
        Jug3Num1->setObjectName("Jug3Num1");
        Jug3Num1->setGeometry(QRect(420, 360, 12, 20));
        CartaCPU3 = new QLabel(oneplayer);
        CartaCPU3->setObjectName("CartaCPU3");
        CartaCPU3->setGeometry(QRect(410, 120, 101, 141));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush9);
        CartaCPU3->setPalette(palette2);
        CartaCPU3->setStyleSheet(QString::fromUtf8("background-color: rgb(1, 187, 255);"));
        CartaCPU3->setScaledContents(true);
        resultado = new QLabel(oneplayer);
        resultado->setObjectName("resultado");
        resultado->setGeometry(QRect(620, 360, 153, 27));
        resultado->setFont(font);
        resultado->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        sumaCPU = new QLabel(oneplayer);
        sumaCPU->setObjectName("sumaCPU");
        sumaCPU->setGeometry(QRect(610, 230, 98, 27));
        sumaCPU->setFont(font);
        sumaCPU->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        Jug = new QLabel(oneplayer);
        Jug->setObjectName("Jug");
        Jug->setGeometry(QRect(70, 310, 81, 31));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        Jug->setPalette(palette3);
        Jug->setFont(font);
        Jug->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        Jug->setScaledContents(true);
        Jug2Num2 = new QLabel(oneplayer);
        Jug2Num2->setObjectName("Jug2Num2");
        Jug2Num2->setGeometry(QRect(310, 460, 21, 20));
        Casa = new QLabel(oneplayer);
        Casa->setObjectName("Casa");
        Casa->setGeometry(QRect(50, 80, 81, 31));
        Casa->setFont(font);
        Casa->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        Casa->setScaledContents(true);
        CartaJug2 = new QLabel(oneplayer);
        CartaJug2->setObjectName("CartaJug2");
        CartaJug2->setGeometry(QRect(240, 350, 101, 141));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush13);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush14);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush9);
        CartaJug2->setPalette(palette4);
        CartaJug2->setStyleSheet(QString::fromUtf8("background-color: rgb(1, 187, 255);"));
        CartaJug2->setScaledContents(true);
        CPU22 = new QLabel(oneplayer);
        CPU22->setObjectName("CPU22");
        CPU22->setGeometry(QRect(310, 230, 21, 20));
        Jug1Num2 = new QLabel(oneplayer);
        Jug1Num2->setObjectName("Jug1Num2");
        Jug1Num2->setGeometry(QRect(140, 460, 21, 20));
        CPU32 = new QLabel(oneplayer);
        CPU32->setObjectName("CPU32");
        CPU32->setGeometry(QRect(490, 230, 21, 20));
        CartaJug1 = new QLabel(oneplayer);
        CartaJug1->setObjectName("CartaJug1");
        CartaJug1->setGeometry(QRect(70, 350, 101, 141));
        CartaJug1->setStyleSheet(QString::fromUtf8("background-color: rgb(1, 187, 255);"));
        CartaJug1->setScaledContents(true);
        CartaCPU1 = new QLabel(oneplayer);
        CartaCPU1->setObjectName("CartaCPU1");
        CartaCPU1->setGeometry(QRect(70, 120, 101, 141));
        CartaCPU1->setStyleSheet(QString::fromUtf8("background-color: rgb(1, 187, 255);"));
        CartaCPU1->setScaledContents(true);
        label = new QLabel(oneplayer);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 900, 615));
        label->setMinimumSize(QSize(900, 615));
        label->setMaximumSize(QSize(900, 615));
        label->setScaledContents(true);
        totalJug = new QLabel(oneplayer);
        totalJug->setObjectName("totalJug");
        totalJug->setGeometry(QRect(780, 130, 63, 20));
        totalCPU = new QLabel(oneplayer);
        totalCPU->setObjectName("totalCPU");
        totalCPU->setGeometry(QRect(780, 240, 63, 20));
        algo = new QLabel(oneplayer);
        algo->setObjectName("algo");
        algo->setGeometry(QRect(700, 540, 63, 20));
        label->raise();
        sumaJug->raise();
        CartaJug3->raise();
        detenerse->raise();
        CartaCPU2->raise();
        Jug3Num2->raise();
        pedirCarta->raise();
        Jug3Num1->raise();
        CartaCPU3->raise();
        resultado->raise();
        sumaCPU->raise();
        Jug->raise();
        Casa->raise();
        CartaJug2->raise();
        CPU22->raise();
        CPU32->raise();
        CartaJug1->raise();
        CartaCPU1->raise();
        Jug1Num1->raise();
        Jug1Num2->raise();
        Jug2Num1->raise();
        Jug2Num2->raise();
        CPU11->raise();
        CPU12->raise();
        CPU21->raise();
        CPU31->raise();
        totalJug->raise();
        totalCPU->raise();
        algo->raise();

        retranslateUi(oneplayer);

        QMetaObject::connectSlotsByName(oneplayer);
    } // setupUi

    void retranslateUi(QDialog *oneplayer)
    {
        oneplayer->setWindowTitle(QCoreApplication::translate("oneplayer", "Dialog", nullptr));
        sumaJug->setText(QCoreApplication::translate("oneplayer", "Suma Jugador:", nullptr));
        CartaJug3->setText(QString());
        CPU11->setText(QString());
        detenerse->setText(QCoreApplication::translate("oneplayer", "Detenerse", nullptr));
        CPU31->setText(QString());
        CPU21->setText(QString());
        CartaCPU2->setText(QString());
        Jug3Num2->setText(QString());
        Jug2Num1->setText(QString());
        pedirCarta->setText(QCoreApplication::translate("oneplayer", "Pedir Carta", nullptr));
        Jug1Num1->setText(QString());
        CPU12->setText(QString());
        Jug3Num1->setText(QString());
        CartaCPU3->setText(QString());
        resultado->setText(QCoreApplication::translate("oneplayer", "Juego en proceso", nullptr));
        sumaCPU->setText(QCoreApplication::translate("oneplayer", "Suma Casa:", nullptr));
        Jug->setText(QCoreApplication::translate("oneplayer", " Jugador", nullptr));
        Jug2Num2->setText(QString());
        Casa->setText(QCoreApplication::translate("oneplayer", "    Casa", nullptr));
        CartaJug2->setText(QString());
        CPU22->setText(QString());
        Jug1Num2->setText(QString());
        CPU32->setText(QString());
        CartaJug1->setText(QString());
        CartaCPU1->setText(QString());
        label->setText(QString());
        totalJug->setText(QCoreApplication::translate("oneplayer", "TextLabel", nullptr));
        totalCPU->setText(QCoreApplication::translate("oneplayer", "TextLabel", nullptr));
        algo->setText(QCoreApplication::translate("oneplayer", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class oneplayer: public Ui_oneplayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONEPLAYER_H

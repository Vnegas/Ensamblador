/********************************************************************************
** Form generated from reading UI file 'credits.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITS_H
#define UI_CREDITS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_credits
{
public:
    QPushButton *Salir;
    QLabel *msgCredits;
    QLabel *credits_lbl;

    void setupUi(QDialog *credits)
    {
        if (credits->objectName().isEmpty())
            credits->setObjectName("credits");
        credits->resize(440, 440);
        credits->setMinimumSize(QSize(440, 440));
        credits->setMaximumSize(QSize(440, 440));
        Salir = new QPushButton(credits);
        Salir->setObjectName("Salir");
        Salir->setGeometry(QRect(10, 360, 83, 29));
        Salir->setStyleSheet(QString::fromUtf8("font: 11pt \"Rockwell\";\n"
"background-color: rgb(246, 215, 150);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(61, 61, 61);\n"
"selection-color: rgb(255, 255, 255);"));
        msgCredits = new QLabel(credits);
        msgCredits->setObjectName("msgCredits");
        msgCredits->setGeometry(QRect(60, 130, 301, 141));
        msgCredits->setStyleSheet(QString::fromUtf8("font: 13pt \"Rockwell\";\n"
"color: rgb(61, 61, 61);"));
        credits_lbl = new QLabel(credits);
        credits_lbl->setObjectName("credits_lbl");
        credits_lbl->setGeometry(QRect(0, 0, 440, 440));
        credits_lbl->setMinimumSize(QSize(440, 440));
        credits_lbl->setMaximumSize(QSize(440, 440));
        credits_lbl->setScaledContents(true);
        credits_lbl->raise();
        Salir->raise();
        msgCredits->raise();

        retranslateUi(credits);

        QMetaObject::connectSlotsByName(credits);
    } // setupUi

    void retranslateUi(QDialog *credits)
    {
        credits->setWindowTitle(QCoreApplication::translate("credits", "Cr\303\251ditos", nullptr));
        Salir->setText(QCoreApplication::translate("credits", "Atr\303\241s", nullptr));
        msgCredits->setText(QString());
        credits_lbl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class credits: public Ui_credits {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITS_H

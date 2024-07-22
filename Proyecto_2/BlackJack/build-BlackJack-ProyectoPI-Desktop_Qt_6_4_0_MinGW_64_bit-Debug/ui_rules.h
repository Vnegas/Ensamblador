/********************************************************************************
** Form generated from reading UI file 'rules.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RULES_H
#define UI_RULES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_rules
{
public:
    QPushButton *Salir;
    QLabel *msgRules;
    QLabel *label_rules;

    void setupUi(QDialog *rules)
    {
        if (rules->objectName().isEmpty())
            rules->setObjectName("rules");
        rules->resize(440, 440);
        rules->setMinimumSize(QSize(440, 440));
        rules->setMaximumSize(QSize(440, 440));
        Salir = new QPushButton(rules);
        Salir->setObjectName("Salir");
        Salir->setGeometry(QRect(10, 360, 83, 29));
        Salir->setStyleSheet(QString::fromUtf8("font: 11pt \"Rockwell\";\n"
"background-color: rgb(239, 217, 184);\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(61, 61, 61);\n"
"selection-color: rgb(255, 255, 255);"));
        msgRules = new QLabel(rules);
        msgRules->setObjectName("msgRules");
        msgRules->setGeometry(QRect(30, 80, 381, 241));
        msgRules->setStyleSheet(QString::fromUtf8("font: 11pt \"Rockwell\";\n"
"color: rgb(61, 61, 61);"));
        msgRules->setScaledContents(true);
        label_rules = new QLabel(rules);
        label_rules->setObjectName("label_rules");
        label_rules->setGeometry(QRect(0, 0, 440, 440));
        label_rules->setMinimumSize(QSize(440, 440));
        label_rules->setMaximumSize(QSize(440, 440));
        label_rules->setScaledContents(true);
        label_rules->raise();
        Salir->raise();
        msgRules->raise();

        retranslateUi(rules);

        QMetaObject::connectSlotsByName(rules);
    } // setupUi

    void retranslateUi(QDialog *rules)
    {
        rules->setWindowTitle(QCoreApplication::translate("rules", "Reglas", nullptr));
        Salir->setText(QCoreApplication::translate("rules", "Atr\303\241s", nullptr));
        msgRules->setText(QString());
        label_rules->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class rules: public Ui_rules {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RULES_H

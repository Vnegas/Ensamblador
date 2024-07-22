/********************************************************************************
** Form generated from reading UI file 'twoplayers.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TWOPLAYERS_H
#define UI_TWOPLAYERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_twoplayers
{
public:

    void setupUi(QDialog *twoplayers)
    {
        if (twoplayers->objectName().isEmpty())
            twoplayers->setObjectName("twoplayers");
        twoplayers->resize(400, 300);

        retranslateUi(twoplayers);

        QMetaObject::connectSlotsByName(twoplayers);
    } // setupUi

    void retranslateUi(QDialog *twoplayers)
    {
        twoplayers->setWindowTitle(QCoreApplication::translate("twoplayers", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class twoplayers: public Ui_twoplayers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TWOPLAYERS_H

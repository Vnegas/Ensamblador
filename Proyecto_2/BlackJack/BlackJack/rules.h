#ifndef RULES_H
#define RULES_H

#include <QDialog>

namespace Ui {
class rules;
}

class rules : public QDialog
{
    Q_OBJECT

public:
    explicit rules(QWidget *parent = nullptr);
    ~rules();

private slots:
    //Cierra la vetana actual.
    void on_Salir_clicked();

private:
    Ui::rules *ui;
};

#endif // RULES_H
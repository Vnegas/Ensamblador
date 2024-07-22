#ifndef CREDITS_H
#define CREDITS_H

#include <QDialog>

namespace Ui {
class credits;
}

class credits : public QDialog
{

    Q_OBJECT

public:
    explicit credits(QWidget *parent = nullptr);
    ~credits();

private slots:
    //Cierra la ventana actual.
    void on_Salir_clicked();

private:
    Ui::credits *ui;
};

#endif // CREDITS_H

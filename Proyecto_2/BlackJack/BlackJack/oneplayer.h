#ifndef ONEPLAYER_H
#define ONEPLAYER_H

#include <QDialog>


namespace Ui {
class oneplayer;
}

class oneplayer : public QDialog
{
    Q_OBJECT

public:
    explicit oneplayer(QWidget *parent = nullptr);
    //void obtenerCarta();
    ~oneplayer();
    int sumaJug;
    int sumaCPU;

private slots:

    void on_pedirCarta_clicked();

    void on_detenerse_clicked();

private:
    Ui::oneplayer *ui;
};

#endif // ONEPLAYER_H

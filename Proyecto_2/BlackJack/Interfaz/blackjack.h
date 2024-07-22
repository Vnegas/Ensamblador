#ifndef BLACKJACK_H
#define BLACKJACK_H

#include <QDialog>
#include <QPainter>
#include <qimage.h>
#include <QPixmap>
#include <QLabel>

namespace Ui {
class blackJack;
}

class blackJack : public QDialog
{
    Q_OBJECT

public:
    explicit blackJack(QWidget *parent = nullptr, int ptsJ = 0, int ptsM = 0,
                       int cartaJ1 = 0, int cartaJ2 = 0, int cartaJ3 = 0,
                       int cartaM1 = 0, int cartaM2 = 0, int cartaM3 = 0);
    ~blackJack();
     void paintEvent(QPaintEvent *event);

private slots:

    void on_pushButton_pedirCarta();
    void on_pushButton_detenerse();

    void on_pushButton_clicked();

private:
    int ptsJugador;
    int ptsMaquina;
    int cartaMaquina1;
    int cartaMaquina2;
    int cartaMaquina3;
    int cartaJugador1;
    int cartaJugador2;
    int cartaJugador3;

    Ui::blackJack *ui;
};

#endif // BLACKJACK_H

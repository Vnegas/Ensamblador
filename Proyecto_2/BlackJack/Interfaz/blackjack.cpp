#include "blackjack.h"
#include "ui_blackjack.h"
#include "mydialog.h"
#include <qlabel.h>


blackJack::blackJack(QWidget *parent, int ptsJ, int ptsM, int cartaJ1
                     , int cartaJ2, int cartaJ3, int cartaM1,
                     int cartaM2, int cartaM3) :
    QDialog(parent),
    ui(new Ui::blackJack)
{
    ptsJugador = ptsJ;
    ptsMaquina = ptsM;
    cartaJugador1 = cartaJ1;
    cartaJugador2 = cartaJ2;
    cartaJugador3 = cartaJ3;
    cartaMaquina1 = cartaM1;
    cartaMaquina2 = cartaM2;
    cartaMaquina3 = cartaM3;


    //Se define el tamannio de la ventana inicial.
    setMinimumSize(QSize(600, 530));
    setMaximumSize(QSize(600, 530));
    setFixedSize(QSize(600, 530));

    ui->setupUi(this);

    ui->label_ptsMaquina->setNum(ptsJugador);
    ui->label_ptsMaquina->show();
    ui->label_ptsJug->setNum(ptsMaquina);
    ui->label_ptsJug->show();
    //Carta1 J
    ui->labelCartaJ1->setNum(cartaJ1);
    ui->labelCartaJ1->show();

    ui->labelCartaJ1_2->setNum(cartaJ1);
    ui->labelCartaJ1_2->show();
    //Carta2 J
    ui->labelCartaJ2->setNum(cartaJ2);
    ui->labelCartaJ2->show();

    ui->labelCartaJ2_2->setNum(cartaJ2);
    ui->labelCartaJ2_2->show();
    //Carta3 J
    ui->labelCartaJ3->setNum(cartaJ3);
    ui->labelCartaJ3->show();

    ui->labelCartaJ3_2->setNum(cartaJ3);
    ui->labelCartaJ3_2->show();
    //Carta1 M
    ui->labelCartaM1->setNum(cartaM1);
    ui->labelCartaM1->show();

    ui->labelCartaM1_2->setNum(cartaM1);
    ui->labelCartaM1_2->show();
    //Carta2 M
    ui->labelCartaM2->setNum(cartaM2);
    ui->labelCartaM2->show();

    ui->labelCartaM2_2->setNum(cartaM2);
    ui->labelCartaM2_2->show();
    //Carta3 M
    ui->labelCartaM3->setNum(cartaM3);
    ui->labelCartaM3->show();

    ui->labelCartaM3_2->setNum(cartaM3);
    ui->labelCartaM3_2->show();
}

blackJack::~blackJack()
{
    delete ui;
}

void blackJack::paintEvent(QPaintEvent *event) {

   QPainter cart(this);

   //pintar contorno de las cartas
   QPen penEdgeCart("#FFFFFF");
   penEdgeCart.setWidth(2);
   cart.setPen((penEdgeCart));

   //contorno carta jugador
   cart.drawRect(115, 115, 110, 140);
   cart.drawRect(245, 115, 110, 140);
   cart.drawRect(375, 115, 110, 140);
   //contorno carta maquina
   cart.drawRect(115, 315, 110, 140);
   cart.drawRect(245, 315, 110, 140);
   cart.drawRect(375, 315, 110, 140);

   //Pinta las cartas
   QBrush brush("#F0FFFF");
   QPen penCarts("#000000");
   penCarts.setWidth(2);
   cart.setPen((penCarts));
   cart.setBrush(brush);

   //cartas jugador
   cart.drawRect(120, 120, 100, 130);
   cart.drawRect(250, 120, 100, 130);
   cart.drawRect(380, 120, 100, 130);
   //carts maquina
   cart.drawRect(120, 320, 100, 130);
   cart.drawRect(250, 320, 100, 130);
   cart.drawRect(380, 320, 100, 130);

}


 extern "C" int pedirCarta1(int);

void blackJack::on_pushButton_pedirCarta()
{
   ui->label_ptsJug->setText(QString::number(pedirCarta1(1)));
}

 //extern "C" int pedirCarta1(int);
void blackJack::blackJack::on_pushButton_detenerse()
{
    //ui->pushButton_pedirCarta(QString::number(pedirCarta1(2)));
}


void blackJack::on_pushButton_clicked()
{
    myDialog mydialog;
    mydialog.setModal(true);
    mydialog.exec();
}


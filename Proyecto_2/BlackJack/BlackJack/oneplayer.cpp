#include "oneplayer.h"
#include "ui_oneplayer.h"
#include <stdlib.h>
#include <iostream>
#include <time.h>

extern "C" int primeraCarta();
extern "C" int pedirCarta1(int);
extern "C" int turnoMaquina(int, int);
extern "C" int inteligenciaCPU();
extern "C" int comprobarGanador1(int, int);

oneplayer::oneplayer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::oneplayer)
{
    ui->setupUi(this);

    this->sumaCPU = 0;
    this->sumaJug = 0;

    QImage fondo;
    bool fondoV = fondo.load("D:/Universidad/PI/GIT/ProyectoIntegrador-Subgrupo3-Blackjack/imagenes/fondo7.png");
    if (fondoV) {
        ui->label->setPixmap(QPixmap::fromImage(fondo));
        fondo = fondo.scaledToWidth(ui->label->width(), Qt::SmoothTransformation);
    }

    QImage image;
    bool valid = image.load("D:/Universidad/PI/GIT/ProyectoIntegrador-Subgrupo3-Blackjack/imagenes/cartaJ.png");
    if (valid) {
        ui->CartaJug1->setPixmap(QPixmap::fromImage(image));
        image = image.scaledToWidth(ui->CartaJug1->width(), Qt::SmoothTransformation);
        ui->CartaJug1->resize(101,141);
        ui->CartaJug2->setPixmap(QPixmap::fromImage(image));
        image = image.scaledToWidth(ui->CartaJug1->width(), Qt::SmoothTransformation);
        ui->CartaJug3->setPixmap(QPixmap::fromImage(image));
        image = image.scaledToWidth(ui->CartaJug1->width(), Qt::SmoothTransformation);

        ui->CartaCPU1->setPixmap(QPixmap::fromImage(image));
        image = image.scaledToWidth(ui->CartaJug1->width(), Qt::SmoothTransformation);
        ui->CartaCPU2->setPixmap(QPixmap::fromImage(image));
        image = image.scaledToWidth(ui->CartaJug1->width(), Qt::SmoothTransformation);
        ui->CartaCPU3->setPixmap(QPixmap::fromImage(image));
        image = image.scaledToWidth(ui->CartaJug1->width(), Qt::SmoothTransformation);
    }

    int carta1 = 1 + primeraCarta() % 10;
    if (carta1 == 1) {
        carta1 = 11;
        ui->Jug1Num1->setText("A");
        ui->Jug1Num2->setText("A");
    } else if (carta1 == 10) {
        int num = 1 + pedirCarta1(1) % 5;
        switch (num) {
        case 1:
            ui->Jug1Num1->setText(QString::number(carta1));
            ui->Jug1Num2->setText(QString::number(carta1));
            break;
        case 2:
            ui->Jug1Num1->setText("J");
            ui->Jug1Num2->setText("J");
            break;
        case 3:
            ui->Jug1Num1->setText("Q");
            ui->Jug1Num2->setText("Q");
            break;
        case 4:
            ui->Jug1Num1->setText("K");
            ui->Jug1Num2->setText("K");
            break;
        default:
            break;
        }
    } else {
        ui->Jug1Num1->setText(QString::number(carta1)); //QString::number(carta1)
        ui->Jug1Num2->setText(QString::number(carta1));
    }
    this->sumaJug = carta1;
    int carta2 = 1 + primeraCarta() % 10;
    if (carta2 == 1) {
        if (this->sumaJug <= 10) {
            carta2 = 11;
        }
        ui->Jug2Num1->setText("A");
        ui->Jug2Num2->setText("A");
    } else if (carta2 == 10) {
        int num = 1 + pedirCarta1(1) % 5;
        switch (num) {
        case 1:
            ui->Jug2Num1->setText(QString::number(carta2));
            ui->Jug2Num2->setText(QString::number(carta2));
            break;
        case 2:
            ui->Jug2Num1->setText("J");
            ui->Jug2Num2->setText("J");
            break;
        case 3:
            ui->Jug2Num1->setText("Q");
            ui->Jug2Num2->setText("Q");
            break;
        case 4:
            ui->Jug2Num1->setText("K");
            ui->Jug2Num2->setText("K");
            break;
        default:
            break;
         }
    } else {
        ui->Jug2Num1->setText(QString::number(carta2));
        ui->Jug2Num2->setText(QString::number(carta2));
    }
    this->sumaJug += carta2;
    int cartaCPU1 = 1 + primeraCarta() % 10;
    if (cartaCPU1 == 1) {
        ui->CPU11->setText("A");
        ui->CPU12->setText("A");
    } else if (cartaCPU1 == 10) {
        int num = 1 + pedirCarta1(1) % 5;
        switch (num) {
        case 1:
            ui->CPU11->setText(QString::number(cartaCPU1));
            ui->CPU12->setText(QString::number(cartaCPU1));
            break;
        case 2:
            ui->CPU11->setText("J");
            ui->CPU12->setText("J");
            break;
        case 3:
            ui->CPU11->setText("Q");
            ui->CPU12->setText("Q");
            break;
        case 4:
            ui->CPU11->setText("K");
            ui->CPU12->setText("K");
            break;
        default:
            break;
        }
    } else {
        ui->CPU11->setText(QString::number(cartaCPU1)); //QString::number(carta1)
        ui->CPU12->setText(QString::number(cartaCPU1));
    }
    this->sumaCPU = cartaCPU1;
    int cartaCPU2 = 1 + primeraCarta() % 10;
    if (cartaCPU2 == 1) {
        if (this->sumaJug <= 10) {
            cartaCPU2 = 11;
        }
        ui->CPU21->setText("A");
        ui->CPU22->setText("A");
    } else if (cartaCPU2 == 10) {
        int num = 1 + pedirCarta1(1) % 5;
        switch (num) {
        case 1:
            ui->CPU21->setText(QString::number(cartaCPU2));
            ui->CPU22->setText(QString::number(cartaCPU2));
            break;
        case 2:
            ui->CPU21->setText("J");
            ui->CPU22->setText("J");
            break;
        case 3:
            ui->CPU21->setText("Q");
            ui->CPU22->setText("Q");
            break;
        case 4:
            ui->CPU21->setText("K");
            ui->CPU22->setText("K");
            break;
        default:
            break;
        }
    } else {
        ui->CPU21->setText(QString::number(cartaCPU2));
        ui->CPU22->setText(QString::number(cartaCPU2));
    }
    this->sumaCPU += cartaCPU2;
    ui->totalJug->setText(QString::number(this->sumaJug));
    ui->totalCPU->setText(QString::number(this->sumaCPU));
}

oneplayer::~oneplayer()
{
    delete ui;
}

void oneplayer::on_pedirCarta_clicked()
{
    if (this->sumaJug >= 21) {
        //ui->labelTurno->setText("Jugador de la Casa");
    } else {
        int carta = 1 + pedirCarta1(11) % 10;

        if (carta == 1) {
            if (this->sumaJug <= 10) {
                carta = 11;
            }
            ui->Jug3Num1->setText("A");
            ui->Jug3Num2->setText("A");
        } else if (carta == 10) {
            int num = 1 + pedirCarta1(1) % 5;
            switch (num) {
            case 1:
                ui->Jug3Num1->setText(QString::number(carta));
                ui->Jug3Num2->setText(QString::number(carta));
                break;
            case 2:
                ui->Jug3Num1->setText("J");
                ui->Jug3Num2->setText("J");
                break;
            case 3:
                ui->Jug3Num1->setText("Q");
                ui->Jug3Num2->setText("Q");
                break;
            case 4:
                ui->Jug3Num1->setText("K");
                ui->Jug3Num2->setText("K");
                break;
            default:
                break;
            }
        } else {
            ui->Jug3Num1->setText(QString::number(carta));
            ui->Jug3Num2->setText(QString::number(carta));
        }
        this->sumaJug += carta;
        ui->totalJug->setText(QString::number(this->sumaJug));
    }
}

void oneplayer::on_detenerse_clicked()
{
    int numDetenerse = inteligenciaCPU();
    int cartaCPU = 0;
    do{
        cartaCPU = turnoMaquina(this->sumaCPU, numDetenerse);
        if (cartaCPU != 0) {
            cartaCPU = 1 + cartaCPU % 10;
            if (cartaCPU == 1) {
                if (this->sumaCPU <= 10) {
                    cartaCPU = 11;
                }
                ui->CPU31->setText("A");
                ui->CPU32->setText("A");
            } else if (cartaCPU == 10) {
                int num = 1 + pedirCarta1(1) % 5;
                switch (num) {
                case 1:
                    ui->CPU31->setText(QString::number(cartaCPU));
                    ui->CPU32->setText(QString::number(cartaCPU));
                    break;
                case 2:
                    ui->CPU31->setText("J");
                    ui->CPU32->setText("J");
                    break;
                case 3:
                    ui->CPU31->setText("Q");
                    ui->CPU32->setText("Q");
                    break;
                case 4:
                    ui->CPU31->setText("K");
                    ui->CPU32->setText("K");
                    break;
                default:
                    break;
                }
            } else {
                ui->CPU31->setText(QString::number(cartaCPU));
                ui->CPU32->setText(QString::number(cartaCPU));
            }
            this->sumaCPU += cartaCPU;
            ui->totalCPU->setText(QString::number(this->sumaCPU));
        }
    } while(cartaCPU != 0);
    int ganador = comprobarGanador1(this->sumaJug, this->sumaCPU);
    ui->algo->setText(QString::number(ganador));
    if (ganador == 1) {
        ui->resultado->setText("GANO EL JUGADOR");
    } else {
        ui->resultado->setText("GANO LA CASA");
    }
}

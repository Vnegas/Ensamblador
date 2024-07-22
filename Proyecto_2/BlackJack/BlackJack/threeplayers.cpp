#include "threeplayers.h"
#include "ui_threeplayers.h"

threeplayers::threeplayers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::threeplayers)
{
    ui->setupUi(this);

    QImage fondo;
    bool fondoV = fondo.load("C:/Users/Tony/Pictures/Camera Roll/fondo05.png");
    if (fondoV) {
        ui->label->setPixmap(QPixmap::fromImage(fondo));
        fondo = fondo.scaledToWidth(ui->label->width(), Qt::SmoothTransformation);
    }

    QImage image;
    bool valid = image.load("C:/Users/Tony/Pictures/Camera Roll/cartaV1.png");
    if (valid) {

        ui->cartaCasaNum1->setPixmap(QPixmap::fromImage(image));
        image = image.scaledToWidth(ui->cartaCasaNum1->width(), Qt::SmoothTransformation);

        ui->cartaCasaNum3->setPixmap(QPixmap::fromImage(image));
        image = image.scaledToWidth(ui->cartaCasaNum3->width(), Qt::SmoothTransformation);

        //Cartas jugador UNO

        ui->cartaJug1Num2->setPixmap(QPixmap::fromImage(image));
        image = image.scaledToWidth(ui->cartaJug1Num2->width(), Qt::SmoothTransformation);

        //cartas jugador DOS
        ui->cartaJug2Num1->setPixmap(QPixmap::fromImage(image));
        image = image.scaledToWidth(ui->cartaJug2Num1->width(), Qt::SmoothTransformation);

        ui->cartaJug2Num3->setPixmap(QPixmap::fromImage(image));
        image = image.scaledToWidth(ui->cartaJug2Num3->width(), Qt::SmoothTransformation);

        //carta jugador TRES

        ui->cartaJug3Num1->setPixmap(QPixmap::fromImage(image));
        image = image.scaledToWidth(ui->cartaJug3Num1->width(), Qt::SmoothTransformation);

        ui->cartaJug3Num3->setPixmap(QPixmap::fromImage(image));
        image = image.scaledToWidth(ui->cartaJug3Num3->width(), Qt::SmoothTransformation);
    }

    QImage imagen02;
    bool validacion = imagen02.load("C:/Users/Tony/Pictures/Camera Roll/cartaV3.png");
    if (validacion) {

        //Cartas Casa
        ui->cartaCasaNum2->setPixmap(QPixmap::fromImage(imagen02));
        imagen02 = imagen02.scaledToWidth(ui->cartaCasaNum2->width(), Qt::SmoothTransformation);

        //cartas jugador UNO
        ui->cartaJug1Num1->setPixmap(QPixmap::fromImage(imagen02));
        imagen02 = imagen02.scaledToWidth(ui->cartaJug1Num1->width(), Qt::SmoothTransformation);

        ui->cartaJug1Num3->setPixmap(QPixmap::fromImage(imagen02));
        imagen02 = imagen02.scaledToWidth(ui->cartaJug1Num3->width(), Qt::SmoothTransformation);

        //cartas jugador DOS
        ui->cartaJug2Num2->setPixmap(QPixmap::fromImage(imagen02));
        imagen02 = imagen02.scaledToWidth(ui->cartaJug2Num2->width(), Qt::SmoothTransformation);

        //cartas jugador TRES
        ui->cartaJug3Num2->setPixmap(QPixmap::fromImage(image));
        image = image.scaledToWidth(ui->cartaJug3Num2->width(), Qt::SmoothTransformation);
    }

}

threeplayers::~threeplayers()
{
    delete ui;
}

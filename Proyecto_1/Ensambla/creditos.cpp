#include "creditos.h"
#include "ui_creditos.h"

#include <QApplication>

Creditos::Creditos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Creditos)
{
    ui->setupUi(this);
    QImage image;
    bool valid = image.load("C:/Users/sebas/Downloads/Ensambla/Imagenes/Créditos.jpg");
    if (valid) {
        ui->label->setPixmap(QPixmap::fromImage(image));
        image = image.scaledToWidth(ui->label->width(), Qt::SmoothTransformation);
    }
    setFixedSize(QSize(500, 400));
    ui->creditos_lbl->setText("Integrantes:\n  -Kenneth Osorio Masís\n  -Sebastián Venegas Brenes");
}

Creditos::~Creditos()
{
    delete ui;
}

void Creditos::on_atras_clicked()
{
    close();
}


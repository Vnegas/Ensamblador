#include "credits.h"
#include "ui_credits.h"

credits::credits(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::credits)
{
    ui->setupUi(this);
    QImage image;
    bool valid = image.load("C:/Users/Jimmy/Desktop/Jimmy/UCR/II Semestre 2022/PI Ensamblador/ProyectoIntegrador-Subgrupo3-Blackjack/Imagenes/FondoCreditos.jpg");
    if(valid){
        ui->credits_lbl->setPixmap(QPixmap::fromImage(image));
        image = image.scaledToWidth(ui->credits_lbl->width(), Qt::SmoothTransformation);
    }
    ui->msgCredits->setText("■ Jimmy Castro Barquero - B91808\n\n"
                            "■ Kenneth Osorio Masís - C15724\n\n"
                            "■ Antony Picado Alvarado - C15939\n\n"
                            "■ Sebastián Venegas Brenes - C18440");
}

credits::~credits()
{
    delete ui;
}

void credits::on_Salir_clicked()
{
    close();
}


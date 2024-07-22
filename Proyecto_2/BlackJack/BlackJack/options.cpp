#include "options.h"
#include "ui_options.h"
#include "oneplayer.h"
#include "twoplayers.h"


Options::Options(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Options)
{
    ui->setupUi(this);
    QImage image;
    bool valid = image.load("C:/Users/Jimmy/Desktop/Jimmy/UCR/II Semestre 2022/PI Ensamblador/ProyectoIntegrador-Subgrupo3-Blackjack/Imagenes/FondoOpciones.jpg");
    if (valid){        ui->label_opci->setPixmap(QPixmap::fromImage(image));
        image = image.scaledToWidth(ui->label_opci->width(), Qt::SmoothTransformation);

    }
}

Options::~Options()
{
    delete ui;
}

void Options::on_OnePlayer_clicked()
{
    oneplayer onePlayer;
    onePlayer.setModal(true);
    close();
    onePlayer.exec();
}

void Options::on_TwoPlayers_clicked()
{
    twoplayers twoPlayers;
    twoPlayers.setModal(true);
    close();
    twoPlayers.exec();
}


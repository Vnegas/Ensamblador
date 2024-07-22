#include "rules.h"
#include "ui_rules.h"

rules::rules(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rules)
{
    ui->setupUi(this);
    QImage image;
    bool valid = image.load("C:/Users/Jimmy/Desktop/Jimmy/UCR/II Semestre 2022/PI Ensamblador/ProyectoIntegrador-Subgrupo3-Blackjack/Imagenes/FondoReglas.jpg");
    if (valid){
        ui->label_rules->setPixmap(QPixmap::fromImage(image));
        image = image.scaledToWidth(ui->label_rules->width(), Qt::SmoothTransformation);
    }
        ui->msgRules->setText("■ El objetivo del juego es acumular un total o cercano\n"
                              "    a 21 con la suma de las cartas, sin sobrepasarse.\n\n "
                              "■ En cada turno puede pedir una carta en caso de \n"
                              "    verlo necesario.\n\n"
                              "■ En caso de que ocurra un empate contra la casa,\n "
                              "    gana la casa.\n\n"
                              "■ Quien se pase de una suma total de 21, perderá\n "
                              "    automáticamente.");
}

rules::~rules()
{
    delete ui;
}

void rules::on_Salir_clicked()
{
    close();
}


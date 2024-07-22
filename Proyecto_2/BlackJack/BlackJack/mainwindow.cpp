#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "options.h"
#include "credits.h"
#include "rules.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QImage image;
        bool valid = image.load("C:/Users/Jimmy/Desktop/Jimmy/UCR/II Semestre 2022/PI Ensamblador/ProyectoIntegrador-Subgrupo3-Blackjack/Imagenes/FondoMenu.jpg");
        if (valid) {
            ui->label->setPixmap(QPixmap::fromImage(image));
            image = image.scaledToWidth(ui->label->width(), Qt::SmoothTransformation);
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Jugar_clicked()
{
    Options options;
    options.setModal(true);
    options.exec();
}

void MainWindow::on_Creditos_clicked()
{
    credits c;
    c.setModal(true);
    c.exec();
}


void MainWindow::on_Salir_clicked()
{
    close();
}


void MainWindow::on_Reglas_clicked()
{
    rules r;
    r.setModal(true);
    r.exec();
}



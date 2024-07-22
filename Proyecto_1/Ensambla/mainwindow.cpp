#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "creditos.h"
#include "filtros.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(QSize(500, 400));

    QImage image;
    bool valid = image.load("C:/Users/sebas/Downloads/Ensambla/Imagenes/FondoMain.png");
    if (valid) {
        ui->imagen_menu->setPixmap(QPixmap::fromImage(image));
        image = image.scaledToWidth(ui->imagen_menu->width(), Qt::SmoothTransformation);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_salir_clicked()
{
    close();
}

void MainWindow::on_creditos_clicked()
{
    Creditos creditos;
    creditos.setModal(true);
    //close();
    creditos.exec();
}

void MainWindow::on_filtros_clicked()
{
    Filtros filtros;
    filtros.setModal(true);
    //close();
    filtros.exec();
}

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "blackjack.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //inicializacion de variables de clase
    ptsJugador = 0;
    ptsMaquina = 0;
    cartaJ1 = 0;
    cartaJ2 = 0;
    cartaJ3 = 0;
    cartaM1 = 0;
    cartaM2 = 0;
    cartaM3 = 0;

    //Se define el tamannio de la ventana inicial.
    setMinimumSize(QSize(380, 320));
    setMaximumSize(QSize(380, 320));
    setFixedSize(QSize(380, 320));

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Jugar_clicked()
{
    blackJack blackjack(nullptr, ptsMaquina, ptsJugador, cartaJ1, cartaJ2, cartaJ3, cartaM1, cartaM2, cartaM3);
    blackjack.setModal(true);
    blackjack.exec();
}

void MainWindow::on_pushButton_Salir_clicked()
{
    this->close();
}

void MainWindow::on_pushButton_reglas_clicked()
{
   QMessageBox::information(this, tr("Reglas"), tr("-El objetivo del juego es acumular con la suma de las cartas un valor cercano o igual a 21, sin sobrepasarse.\n-En cada turno puede pedir una carta en caso de verlo necesario.\n-En caso de haber un empate contra la casa, gana la casa\n-Quien se pase de una suma total de 21, perderá automáticamente."));
}

void MainWindow::setPtsJugador(int ptsJ) { ptsJugador = ptsJ; }

void MainWindow::setPtsMaquina(int ptsM) { ptsMaquina = ptsM; }

void MainWindow::setCartaM1(int carta1) { cartaM1 = carta1; }

void MainWindow::setCartaM2(int carta2) { cartaM2 = carta2; }

void MainWindow::setCartaM3(int carta3) { cartaM3 = carta3; }

void MainWindow::setCartaJ1(int carta1) { cartaJ1 = carta1; }

void MainWindow::setCartaJ2(int carta2) { cartaJ2 = carta2; }

void MainWindow::setCartaJ3(int carta3) { cartaJ3 = carta3; }


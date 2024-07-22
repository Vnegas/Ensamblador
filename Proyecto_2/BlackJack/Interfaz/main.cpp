#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.setPtsJugador(15);
    w.setPtsMaquina(21);

    w.setCartaJ1(10);
    w.setCartaJ2(3);
    w.setCartaJ3(2);

    w.setCartaM1(9);
    w.setCartaM2(5);
    w.setCartaM3(7);

    w.show();
    return a.exec();
}

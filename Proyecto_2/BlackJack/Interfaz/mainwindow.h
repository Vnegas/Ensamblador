#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setPtsJugador(int ptsJ);
    void setPtsMaquina(int ptsM);

    void setCartaM1(int carta1);
    void setCartaM2(int carta2);
    void setCartaM3(int carta3);

    void setCartaJ1(int carta1);
    void setCartaJ2(int carta2);
    void setCartaJ3(int carta3);


private slots:

    void on_pushButton_Jugar_clicked();

    void on_pushButton_Salir_clicked();

    void on_pushButton_reglas_clicked();

private:
    int ptsJugador;
    int ptsMaquina;
    int cartaM1;
    int cartaM2;
    int cartaM3;
    int cartaJ1;
    int cartaJ2;
    int cartaJ3;

    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

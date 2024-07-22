#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    //Crea un dialogo con las opciones de la cantidad de jugdores.
    void on_Jugar_clicked();
    //Crea un dialogo con los nombres de los dioses de la programacion.
    void on_Creditos_clicked();
    //Cierra la ventana.
    void on_Salir_clicked();
    //Crea un dialogo con las reglas del juego.
    void on_Reglas_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

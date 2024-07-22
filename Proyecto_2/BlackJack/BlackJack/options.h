#ifndef OPTIONS_H
#define OPTIONS_H

#include <QDialog>

namespace Ui {
class Options;
}

class Options : public QDialog
{
    Q_OBJECT

public:
    explicit Options(QWidget *parent = nullptr);
    ~Options();

private slots:
    //Crea un dialogo con la jugabilidad para un solo jugador.
    void on_OnePlayer_clicked();
    //Crea un dialogo con la jugabilidad para dos jugadores.
    void on_TwoPlayers_clicked();

private:
    Ui::Options *ui;
};

#endif // OPTIONS_H

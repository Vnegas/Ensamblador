#include "twoplayers.h"
#include "ui_twoplayers.h"

twoplayers::twoplayers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::twoplayers)
{
    ui->setupUi(this);
}

twoplayers::~twoplayers()
{
    delete ui;
}

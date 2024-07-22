#include "mydialog.h"
#include "ui_mydialog.h"

myDialog::myDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::myDialog)
{
    setMinimumSize(QSize(310, 300));
    setMaximumSize(QSize(310, 300));
    setFixedSize(QSize(310, 300));

    ui->setupUi(this);
}

myDialog::~myDialog()
{
    delete ui;
}


void myDialog::on_pushButton_cancelar_clicked()
{
    close();
}


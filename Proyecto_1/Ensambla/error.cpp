#include "error.h"
#include "ui_error.h"

Error::Error(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Error)
{
    ui->setupUi(this);
    QImage image;
    bool valid = image.load("C:/Users/sebas/Downloads/Ensambla/Imagenes/fondoError.jpg");
    if (valid) {
        ui->fondo->setPixmap(QPixmap::fromImage(image));
        image = image.scaledToWidth(ui->fondo->width(), Qt::SmoothTransformation);
    }
    setFixedSize(QSize(500, 400));
}

Error::~Error()
{
    delete ui;
}

void Error::on_pushButton_clicked()
{
    close();
}

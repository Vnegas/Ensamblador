#include "filtros.h"
#include "ui_filtros.h"
#include "error.h"

#include <fstream>
#include <iostream>

Filtros::Filtros(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Filtros)
{
    ui->setupUi(this);
    QImage fondo;
    bool valid = fondo.load("C:/Users/sebas/Downloads/Ensambla/Imagenes/FondoQt.jpg");
    if (valid) {
        ui->label->setPixmap(QPixmap::fromImage(fondo));
        fondo = fondo.scaledToWidth(ui->label->width(), Qt::SmoothTransformation);
    }
    QImage image;
    bool valid2 = image.load("C:/Users/sebas/Downloads/Ensambla/Imagenes/Imagen.bmp");
    if (valid2) {
        ui->imagen->setPixmap(QPixmap::fromImage(image));
        image = image.scaledToWidth(ui->imagen->width(), Qt::SmoothTransformation);
        ui->imagen->setGeometry(290,40,301,251);
    }
    setFixedSize(QSize(700, 400));
}

Filtros::~Filtros()
{
    delete ui;
}

void Filtros::calcularFact(uint32_t* factor, unsigned char* imagen, int tamano) {
  uint32_t factor1 = 0;
  uint32_t factor2 = 0;
  for(int i = 0; i < tamano; i++) {
    factor1 = 259 * (255 + imagen[i]);
    factor2 = 255 * (259 - imagen[i]);
    factor[i] = factor1/factor2;
  }
}

extern "C" void aumentarBrillo(unsigned char* imagen, char valor, int loop);
void Filtros::on_aumentarBrillo_clicked() {
    std::ifstream lector("C:/Users/sebas/Downloads/Ensambla/Imagenes/Imagen.bmp", std::ios::binary);
    FileHeader file_header;
    InfoHeader file_info;

    if (lector.is_open()) {
        lector.read((char*)&file_header, 14);
        lector.read((char*)&file_info, 40);
        if ((file_info.compression != 0) || (file_header.file_type != 0x4D42)) {
            Error error;
            error.setModal(true);
            error.exec();
        } else {
            int tamanoOriginal = (file_info.width * file_info.height)*3;
            int tamano = 0;
            tamano = tamanoOriginal;
            while((tamano%256) != 0) {
                tamano++;
            }
            unsigned char color_var;
            unsigned char image_color[tamano];
            for (int i = 0; i < tamano; i++) {
                lector.read((char*)&color_var, sizeof(char));
                image_color[i] = color_var;
            }
            //Comprobar cantidad de bits y rellenar si faltan
            if (tamano-tamanoOriginal != 0) {
                for (int i = tamanoOriginal; i < tamano; i++) {
                  image_color[i] = 0;
                }
            }

            const unsigned char valor = 150;
            int cantLoop = tamano/32;

            aumentarBrillo((unsigned char*)&image_color, valor, cantLoop);

            std::ofstream imagenRes("C:/Users/sebas/Downloads/Ensambla/Imagenes/Resultado.bmp", std::ofstream::binary);//D:\Universidad\Ensambla0\Imagenes

            imagenRes.write((char*)&file_header, 14);
            imagenRes.write((char*)&file_info, 40);
            for (int i = 0; i < tamanoOriginal; i++) {
                imagenRes.write((char*)&image_color[i], sizeof(char));
            }
            imagenRes.close();
        }
        lector.close();
    } else {
      Error error;
      error.setModal(true);
      error.exec();
    }
    QImage imagen;
    bool valid = imagen.load("C:/Users/sebas/Downloads/Ensambla/Imagenes/Resultado.bmp");
    if (valid) {
        ui->imagen->setPixmap(QPixmap::fromImage(imagen));
        imagen = imagen.scaledToWidth(ui->imagen->width(), Qt::SmoothTransformation);
        ui->imagen->setGeometry(290,40,301,251);
    }
}


extern "C" void disminuirBrillo(unsigned char* imagen, char valor, int loop);
void Filtros::on_disminuirBrillo_clicked()
{
    std::ifstream lector("C:/Users/sebas/Downloads/Ensambla/Imagenes/Imagen.bmp", std::ios::binary);
    FileHeader file_header;
    InfoHeader file_info;

    if (lector.is_open()) {
        lector.read((char*)&file_header, 14);
        lector.read((char*)&file_info, 40);
        if ((file_info.compression != 0) || (file_header.file_type != 0x4D42)) {
            Error error;
            error.setModal(true);
            error.exec();
        } else {
            int tamanoOriginal = (file_info.width * file_info.height)*3;
            int tamano = 0;
            tamano = tamanoOriginal;
            while((tamano%256) != 0) {
                tamano++;
            }
            unsigned char color_var;
            unsigned char image_color[tamano];
            for (int i = 0; i < tamano; i++) {
                lector.read((char*)&color_var, sizeof(char));
                image_color[i] = color_var;
            }
            //Comprobar cantidad de bits y rellenar si faltan
            if (tamano-tamanoOriginal != 0) {
                for (int i = tamanoOriginal; i < tamano; i++) {
                  image_color[i] = 0;
                }
            }

            const unsigned char valor = 150;
            int cantLoop = tamano/32;

            disminuirBrillo((unsigned char*)&image_color, valor, cantLoop);

            std::ofstream imagenRes("C:/Users/sebas/Downloads/Ensambla/Imagenes/Resultado.bmp", std::ofstream::binary);

            imagenRes.write((char*)&file_header, 14);
            imagenRes.write((char*)&file_info, 40);
            for (int i = 0; i < tamanoOriginal; i++) {
                imagenRes.write((char*)&image_color[i], sizeof(char));
            }
            imagenRes.close();
        }
        lector.close();
    } else {
      Error error;
      error.setModal(true);
      error.exec();
    }
    QImage imagen;
    bool valid = imagen.load("C:/Users/sebas/Downloads/Ensambla/Imagenes/Resultado.bmp");
    if (valid) {
        ui->imagen->setPixmap(QPixmap::fromImage(imagen));
        imagen = imagen.scaledToWidth(ui->imagen->width(), Qt::SmoothTransformation);
        ui->imagen->setGeometry(290,40,301,251);
    }
}

extern "C" void aumentarContraste(unsigned char* imagen, uint32_t* factor, int loop, uint16_t valor);
void Filtros::on_aumentarContraste_clicked()
{
    std::ifstream lector("C:/Users/sebas/Downloads/Ensambla/Imagenes/Imagen.bmp", std::ios::binary);
    FileHeader file_header;
    InfoHeader file_info;

    if (lector.is_open()) {
        lector.read((char*)&file_header, 14);
        lector.read((char*)&file_info, 40);
        if ((file_info.compression != 0) || (file_header.file_type != 0x4D42)) {
            Error error;
            error.setModal(true);
            error.exec();
        } else {
            int tamanoOriginal = (file_info.width * file_info.height)*3;
            int tamano = 0;
            tamano = tamanoOriginal;
            while((tamano%256) != 0) {
                tamano++;
            }
            unsigned char color_var;
            unsigned char image_color[tamano];
            for (int i = 0; i < tamano; i++) {
                lector.read((char*)&color_var, sizeof(char));
                image_color[i] = color_var;
            }
            //Comprobar cantidad de bits y rellenar si faltan
            if (tamano-tamanoOriginal != 0) {
                for (int i = tamanoOriginal; i < tamano; i++) {
                  image_color[i] = 0;
                }
            }

            uint32_t factor[tamano] = { 0 };
            calcularFact((unsigned int*)&factor, (unsigned char*)&image_color, tamano);
            int cantLoop = tamano/32;
            uint16_t valor = 128;

            aumentarContraste((unsigned char*)&image_color, factor, cantLoop, valor);

            std::ofstream imagenRes("C:/Users/sebas/Downloads/Ensambla/Imagenes/Resultado.bmp", std::ofstream::binary);

            imagenRes.write((char*)&file_header, 14);
            imagenRes.write((char*)&file_info, 40);
            for (int i = 0; i < tamanoOriginal; i++) {
                imagenRes.write((char*)&image_color[i], sizeof(char));
            }
            imagenRes.close();
        }
        lector.close();
    } else {
      Error error;
      error.setModal(true);
      error.exec();
    }
    QImage imagen;
    bool valid = imagen.load("C:/Users/sebas/Downloads/Ensambla/Imagenes/Resultado.bmp");
    if (valid) {
        ui->imagen->setPixmap(QPixmap::fromImage(imagen));
        imagen = imagen.scaledToWidth(ui->imagen->width(), Qt::SmoothTransformation);
        ui->imagen->setGeometry(290,40,301,251);
    }
}

extern "C" void disminuirContraste(unsigned char* imagen, uint32_t* factor, int loop, uint16_t valor);
void Filtros::on_disminuirContraste_clicked()
{
    std::ifstream lector("C:/Users/sebas/Downloads/Ensambla/Imagenes/Imagen.bmp", std::ios::binary);
    FileHeader file_header;
    InfoHeader file_info;

    if (lector.is_open()) {
        lector.read((char*)&file_header, 14);
        lector.read((char*)&file_info, 40);
        if ((file_info.compression != 0) || (file_header.file_type != 0x4D42)) {
            Error error;
            error.setModal(true);
            error.exec();
        } else {
            int tamanoOriginal = (file_info.width * file_info.height)*3;
            int tamano = 0;
            tamano = tamanoOriginal;
            while((tamano%256) != 0) {
                tamano++;
            }
            unsigned char color_var;
            unsigned char image_color[tamano];
            for (int i = 0; i < tamano; i++) {
                lector.read((char*)&color_var, sizeof(char));
                image_color[i] = color_var;
            }
            //Comprobar cantidad de bits y rellenar si faltan
            if (tamano-tamanoOriginal != 0) {
                for (int i = tamanoOriginal; i < tamano; i++) {
                  image_color[i] = 0;
                }
            }

            uint32_t factor[tamano] = { 0 };
            calcularFact((unsigned int*)&factor, (unsigned char*)&image_color, tamano);
            int cantLoop = tamano/32;
            uint16_t valor = 128;

            disminuirContraste((unsigned char*)&image_color, factor, cantLoop, valor);

            std::ofstream imagenRes("C:/Users/sebas/Downloads/Ensambla/Imagenes/Resultado.bmp", std::ofstream::binary);

            imagenRes.write((char*)&file_header, 14);
            imagenRes.write((char*)&file_info, 40);
            for (int i = 0; i < tamanoOriginal; i++) {
                imagenRes.write((char*)&image_color[i], sizeof(char));
            }
            imagenRes.close();
        }
        lector.close();
    } else {
      Error error;
      error.setModal(true);
      error.exec();
    }
    QImage imagen;
    bool valid = imagen.load("C:/Users/sebas/Downloads/Ensambla/Imagenes/Resultado.bmp");
    if (valid) {
        ui->imagen->setPixmap(QPixmap::fromImage(imagen));
        imagen = imagen.scaledToWidth(ui->imagen->width(), Qt::SmoothTransformation);
        ui->imagen->setGeometry(290,40,301,251);
    }
}

extern "C" void colorNegativo(unsigned char* imagen, char valor, int loop);
void Filtros::on_invertir_clicked()
{
    std::ifstream lector("C:/Users/sebas/Downloads/Ensambla/Imagenes/Imagen.bmp", std::ios::binary);
    FileHeader file_header;
    InfoHeader file_info;

    if (lector.is_open()) {
        lector.read((char*)&file_header, 14);
        lector.read((char*)&file_info, 40);
        if ((file_info.compression != 0) || (file_header.file_type != 0x4D42)) {
            Error error;
            error.setModal(true);
            error.exec();
        } else {
            int tamanoOriginal = (file_info.width * file_info.height)*3;
            int tamano = tamanoOriginal;
            while((tamano%256) != 0) {
                tamano++;
            }
            unsigned char color_var;
            unsigned char image_color[tamano];
            for (int i = 0; i < tamano; i++) {
                lector.read((char*)&color_var, sizeof(char));
                image_color[i] = color_var;
            }
            //Comprobar cantidad de bits y rellenar si faltan
            if (tamano-tamanoOriginal != 0) {
                for (int i = tamanoOriginal; i < tamano; i++) {
                  image_color[i] = 0;
                }
            }

            int cantLoop = tamano/32;
            unsigned char valor = 255;
            colorNegativo((unsigned char*)&image_color, valor, cantLoop);

            std::ofstream imagenRes("C:/Users/sebas/Downloads/Ensambla/Imagenes/Resultado.bmp", std::ofstream::binary);

            imagenRes.write((char*)&file_header, 14);
            imagenRes.write((char*)&file_info, 40);
            for (int i = 0; i < tamanoOriginal; i++) {
                imagenRes.write((char*)&image_color[i], sizeof(char));
            }
            imagenRes.close();
        }
        lector.close();
    } else {
      Error error;
      error.setModal(true);
      error.exec();
    }
    QImage imagen;
    bool valid = imagen.load("C:/Users/sebas/Downloads/Ensambla/Imagenes/Resultado.bmp");
    if (valid) {
        ui->imagen->setPixmap(QPixmap::fromImage(imagen));
        imagen = imagen.scaledToWidth(ui->imagen->width(), Qt::SmoothTransformation);
        ui->imagen->setGeometry(290,40,301,251);
    }
}

extern "C" void tamanoDuplicado(unsigned char* imagenDoble, unsigned char* imagen, int loop);
void Filtros::on_escalar_clicked()
{
    std::ifstream lector("C:/Users/sebas/Downloads/Ensambla/Imagenes/Imagen.bmp", std::ios::binary);
    FileHeader file_header;
    InfoHeader file_info;

    if (lector.is_open()) {
        lector.read((char*)&file_header, 14);
        lector.read((char*)&file_info, 40);
        if ((file_info.compression != 0) || (file_header.file_type != 0x4D42)) {
            Error error;
            error.setModal(true);
            error.exec();
        } else {
            int tamanoOriginal = (file_info.width * file_info.height)*3;
            int tamano = 0;
            tamano = tamanoOriginal;
            while((tamano%256) != 0) {
                tamano++;
            }
            unsigned char color_var;
            unsigned char image_color[tamano];
            for (int i = 0; i < tamano; i++) {
                lector.read((char*)&color_var, sizeof(char));
                image_color[i] = color_var;
            }
            //Comprobar cantidad de bits y rellenar si faltan
            if (tamano-tamanoOriginal != 0) {
                for (int i = tamanoOriginal; i < tamano; i++) {
                  image_color[i] = 0;
                }
            }

            unsigned char duplicado[tamano*4] = { };

            tamanoDuplicado((unsigned char*)&duplicado, (unsigned char*)&image_color, tamano/3);

            std::ofstream imagenRes("C:/Users/sebas/Downloads/Ensambla/Imagenes/Resultado.bmp", std::ofstream::binary);

            file_header.file_size = file_header.file_size*2;
            //file_info.height = file_info.height*2;
            file_info.width = file_info.width*2;
            imagenRes.write((char*)&file_header, 14);
            imagenRes.write((char*)&file_info, 40);
            for (int i = 0; i < tamano*4; i++) {
                imagenRes.write((char*)&duplicado[i], sizeof(char));
            }
        }
        lector.close();
    } else {
      Error error;
      error.setModal(true);
      error.exec();
    }
    QImage imagen;
    bool valid = imagen.load("C:/Users/sebas/Downloads/Ensambla/Imagenes/Resultado.bmp");
    if (valid) {
        ui->imagen->setPixmap(QPixmap::fromImage(imagen));
        imagen = imagen.scaledToWidth(ui->imagen->width(), Qt::SmoothTransformation);
        //ui->imagen->resize(391,321);
        ui->imagen->setGeometry(270,15,391,321);
    }
}

extern "C" void espejar(unsigned char* imagen);
void Filtros::on_espejar_clicked()
{
    std::ifstream lector("C:/Users/sebas/Downloads/Ensambla/Imagenes/Imagen.bmp", std::ios::binary);
    FileHeader file_header;
    InfoHeader file_info;

    if (lector.is_open()) {
        lector.read((char*)&file_header, 14);
        lector.read((char*)&file_info, 40);
        if ((file_info.compression != 0) || (file_header.file_type != 0x4D42)) {
            Error error;
            error.setModal(true);
            error.exec();
        } else {
            int tamanoOriginal = (file_info.width * file_info.height)*3;
            int tamano = 0;
            tamano = tamanoOriginal;
            while((tamano%256) != 0) {
                tamano++;
            }
            unsigned char color_var;
            unsigned char image_color[tamano];
            for (int i = 0; i < tamano; i++) {
                lector.read((char*)&color_var, sizeof(char));
                image_color[i] = color_var;
            }
            //Comprobar cantidad de bits y rellenar si faltan
            if (tamano-tamanoOriginal != 0) {
                for (int i = tamanoOriginal; i < tamano; i++) {
                  image_color[i] = 0;
                }
            }

            espejar((unsigned char*)&image_color);

            std::ofstream imagenRes("C:/Users/sebas/Downloads/Ensambla/Imagenes/Resultado.bmp", std::ofstream::binary);

            imagenRes.write((char*)&file_header, 14);
            imagenRes.write((char*)&file_info, 40);
            for (int i = 0; i < tamanoOriginal; i++) {
                imagenRes.write((char*)&image_color[i], sizeof(char));
            }
            imagenRes.close();
        }
        lector.close();
    } else {
      Error error;
      error.setModal(true);
      error.exec();
    }
    QImage imagen;
    bool valid = imagen.load("C:/Users/sebas/Downloads/Ensambla/Imagenes/Resultado.bmp");
    if (valid) {
        ui->imagen->setPixmap(QPixmap::fromImage(imagen));
        imagen = imagen.scaledToWidth(ui->imagen->width(), Qt::SmoothTransformation);
        ui->imagen->setGeometry(290,40,301,251);
    }
}

void Filtros::on_atras_clicked()
{
    close();
}

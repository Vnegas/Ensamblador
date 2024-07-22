#ifndef FILTROS_H
#define FILTROS_H

#include <QDialog>

//Struct para almacenar los valores de la sección FileHeader
struct FileHeader {
  uint16_t file_type{ 0x4D42 };        // File type always BM which is 0x4D42
  uint32_t file_size{ 0 };             // Size of the file (in bytes)
  uint16_t reserved1{ 0 };             // Reserved, always 0
  uint16_t reserved2{ 0 };             // Reserved, always 0
  uint32_t offset_data{ 0 };           // Start position of pixel data (bytes from the beginning of the file)
};

//Struct para almacenar los valores de la sección InfoHeader
struct InfoHeader {
  uint32_t size{ 0 };                  // Size of this header (in bytes)
  int32_t width{ 0 };                  // width of bitmap in pixels
  int32_t height{ 0 };                 // width of bitmap in pixels
  uint16_t planes{ 1 };                // No. of planes for the target device, this is always 1
  uint16_t bit_count{ 0 };             // No. of bits per pixel
  uint32_t compression{ 0 };           // 0 - uncompressed
  uint32_t size_image{ 0 };            // 0 - for uncompressed images
  int32_t x_pixels_per_meter{ 0 };
  int32_t y_pixels_per_meter{ 0 };
  uint32_t colors_used{ 0 };           // No. color indexes in the color table.
  uint32_t colors_important{ 0 };      // No. of colors used for displaying the bitmap.
};

namespace Ui {
class Filtros;
}

class Filtros : public QDialog
{
    Q_OBJECT

public:
    explicit Filtros(QWidget *parent = nullptr);
    ~Filtros();
    void calcularFact(uint32_t* factor, unsigned char* imagen, int tamano);

private slots:

    void on_aumentarBrillo_clicked();

    void on_disminuirBrillo_clicked();

    void on_aumentarContraste_clicked();

    void on_disminuirContraste_clicked();

    void on_invertir_clicked();

    void on_escalar_clicked();

    void on_espejar_clicked();

    void on_atras_clicked();

private:
    Ui::Filtros *ui;
    //void calcularFact(uint32_t* factor, unsigned char* imagen, int tamano);
};

#endif // FILTROS_H

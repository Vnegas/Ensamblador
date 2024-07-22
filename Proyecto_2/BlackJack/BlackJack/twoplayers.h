#ifndef TWOPLAYERS_H
#define TWOPLAYERS_H

#include <QDialog>

namespace Ui {
class twoplayers;
}

class twoplayers : public QDialog
{
    Q_OBJECT

public:
    explicit twoplayers(QWidget *parent = nullptr);
    ~twoplayers();

private:
    Ui::twoplayers *ui;
};

#endif // TWOPLAYERS_H

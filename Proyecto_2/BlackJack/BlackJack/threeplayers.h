#ifndef THREEPLAYERS_H
#define THREEPLAYERS_H

#include <QDialog>

namespace Ui {
class threeplayers;
}

class threeplayers : public QDialog
{
    Q_OBJECT

public:
    explicit threeplayers(QWidget *parent = nullptr);
    ~threeplayers();

private:
    Ui::threeplayers *ui;
};

#endif // THREEPLAYERS_H

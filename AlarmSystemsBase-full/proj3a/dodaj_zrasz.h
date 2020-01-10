#ifndef DODAJ_ZRASZ_H
#define DODAJ_ZRASZ_H

#include <QDialog>
#include <vector>
#include "backend/SysOchronne.h"

namespace Ui {
class Dodaj_zrasz;
}

class Dodaj_zrasz : public QDialog
{
    Q_OBJECT

public:
    explicit Dodaj_zrasz(QWidget *parent = nullptr);
    ~Dodaj_zrasz();
    vector <SysOchronne*> *wektor_obiektow;
    void przekazWektor(vector <SysOchronne*> *pWektor);

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dodaj_zrasz *ui;
};

#endif // DODAJ_ZRASZ_H

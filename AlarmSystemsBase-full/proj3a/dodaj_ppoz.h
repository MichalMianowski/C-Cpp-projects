#ifndef DODAJ_PPOZ_H
#define DODAJ_PPOZ_H

#include <QDialog>
#include <vector>
#include "backend/SysOchronne.h"

namespace Ui {
class dodaj_ppoz;
}

class dodaj_ppoz : public QDialog
{
    Q_OBJECT

public:
    explicit dodaj_ppoz(QWidget *parent = nullptr);
    ~dodaj_ppoz();
    vector <SysOchronne*> *wektor_obiektow;
    void przekazWektor(vector <SysOchronne*> *pWektor);

private slots:
    void on_pushButton_clicked();

private:
    Ui::dodaj_ppoz *ui;
};

#endif // DODAJ_PPOZ_H

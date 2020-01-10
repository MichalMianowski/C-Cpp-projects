#ifndef DODAJ_WYBOR_H
#define DODAJ_WYBOR_H

#include <QDialog>
#include <vector>
#include "backend/SysOchronne.h"

namespace Ui {
class Dodaj_wybor;
}

class Dodaj_wybor : public QDialog
{
    Q_OBJECT

public:
    explicit Dodaj_wybor(QWidget *parent = nullptr);
    ~Dodaj_wybor();
    vector <SysOchronne*> *wektor_obiektow;
    void przekazWektor(vector <SysOchronne*> *pWektor);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Dodaj_wybor *ui;
};

#endif // DODAJ_WYBOR_H

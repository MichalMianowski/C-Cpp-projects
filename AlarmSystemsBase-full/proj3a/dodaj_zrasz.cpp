#include "dodaj_zrasz.h"
#include "ui_dodaj_zrasz.h"
#include "backend/SysZraszaczy.h"
#include "backend/Biblioteka_obiektow.h"

Dodaj_zrasz::Dodaj_zrasz(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dodaj_zrasz)
{
    ui->setupUi(this);
}

Dodaj_zrasz::~Dodaj_zrasz()
{
    delete ui;
}
void Dodaj_zrasz::przekazWektor(vector <SysOchronne*> *pWektor){
    wektor_obiektow = pWektor;
}
void Dodaj_zrasz::on_pushButton_clicked()
{
    wektor_obiektow->push_back(new SysZraszaczy(ui->n_nazwa_systemu_2->text().toStdString(), ui->n_stan_2->value(), ui->n_liczba_zgloszen_2->value(), ui->n_klasa_systemu_2->value(), ui->n_liczba_czujek->value(), ui->n_wrazliwosc_czujek->value(), ui->n_liczba_zraszaczy->value()));
    //wektor_obiektow[wektor_obiektow.size()-1]->zapisz();
    close();
}

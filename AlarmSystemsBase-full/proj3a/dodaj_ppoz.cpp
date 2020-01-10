#include "dodaj_ppoz.h"
#include "ui_dodaj_ppoz.h"
#include "backend/SysPpoz.h"
#include "backend/Biblioteka_obiektow.h"
#include "dodaj_wybor.h"

dodaj_ppoz::dodaj_ppoz(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dodaj_ppoz)
{
    ui->setupUi(this);
}

dodaj_ppoz::~dodaj_ppoz()
{
    delete ui;
}

void dodaj_ppoz::przekazWektor(vector <SysOchronne*> *pWektor){
    wektor_obiektow = pWektor;
}
void dodaj_ppoz::on_pushButton_clicked()
{
    wektor_obiektow->push_back(new SysPpoz(ui->n_nazwa_systemu_2->text().toStdString(), ui->n_stan_2->value(), ui->n_liczba_zgloszen_2->value(), ui->n_klasa_systemu_2->value(), ui->n_liczba_czujek->value(), ui->n_wrazliwosc_czujek->value()));
    //wektor_obiektow[wektor_obiektow->size()-1].zapisz();
    close();
}

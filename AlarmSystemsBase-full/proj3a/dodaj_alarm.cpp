#include "dodaj_alarm.h"
#include "ui_dodaj_alarm.h"
#include "backend/SysAlarm.h"
//#include "backend/Biblioteka_obiektow.h"

using namespace std;

Dodaj_alarm::Dodaj_alarm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dodaj_alarm)
{
    ui->setupUi(this);
}

Dodaj_alarm::~Dodaj_alarm()
{
    delete ui;
}
void Dodaj_alarm::przekazWektor(vector <SysOchronne*> *pWektor){
    wektor_obiektow = pWektor;
}
void Dodaj_alarm::on_pushButton_clicked()
{
    wektor_obiektow->push_back(new SysAlarm(ui->n_nazwa_systemu->text().toStdString(), ui->n_stan->value(), ui->n_liczba_zgloszen->value(), ui->n_klasa_systemu->value(), ui->n_nazwa_modelu->text().toStdString(), ui->n_pobor_mocy->value(), ui->n_przycisk_napadowy->checkState(), ui->n_zasilacz_awaryjny->checkState()));
    //SysAlarm kolol;
    //kolol.setSysAlarm(ui->n_nazwa_systemu->text().toStdString(), ui->n_stan->value(), ui->n_liczba_zgloszen->value(), ui->n_klasa_systemu->value(), ui->n_nazwa_modelu->text().toStdString(), ui->n_pobor_mocy->value(), ui->n_przycisk_napadowy, ui->n_zasilacz_awaryjny);
    close();
}

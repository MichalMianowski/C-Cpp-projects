#include "dodaj_wybor.h"
#include "ui_dodaj_wybor.h"
#include "dodaj_alarm.h"
#include "dodaj_ppoz.h"
#include "dodaj_zrasz.h"

Dodaj_wybor::Dodaj_wybor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dodaj_wybor)
{
    ui->setupUi(this);
}

Dodaj_wybor::~Dodaj_wybor()
{
    delete ui;
}
void Dodaj_wybor::przekazWektor(vector <SysOchronne*> *pWektor){
    wektor_obiektow = pWektor;
}
void Dodaj_wybor::on_pushButton_clicked()
{
    Dodaj_alarm b;
    b.setModal(true);
    b.przekazWektor(wektor_obiektow);
    b.exec();
    hide();
}

void Dodaj_wybor::on_pushButton_2_clicked()
{
    dodaj_ppoz b;
    b.setModal(true);
    b.przekazWektor(wektor_obiektow);
    b.exec();
    close();
}

void Dodaj_wybor::on_pushButton_3_clicked()
{
    Dodaj_zrasz b;
    b.setModal(true);
    b.przekazWektor(wektor_obiektow);
    b.exec();
    hide();
}

void Dodaj_wybor::on_pushButton_4_clicked()
{
    close();
}



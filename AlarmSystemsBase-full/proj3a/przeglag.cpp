#include "przeglag.h"
#include "ui_przeglag.h"
#include "backend/SysAlarm.h"
#include <QPixmap>
#include <QBitmap>
#include <QGraphicsScene>

vector <SysOchronne*>::iterator it;

Przeglag::Przeglag(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Przeglag)
{
    ui->setupUi(this);
}

Przeglag::~Przeglag()
{
    delete ui;
}
void Przeglag::przekazWektor(vector <SysOchronne*> *pWektor){
    wektor_obiektow = pWektor;
    it = wektor_obiektow->begin();
}
void Przeglag::wyswietl(){
    if (wektor_obiektow->size() >0){

//        ui->p_tytul;
//        ui->p_nazwa;
//        ui->p_stan;
//        ui->p_liczba_zgloszen;
//        ui->p_klasa;
//        ui->p_nazwa_modelu;
//        ui->p_pobor;
//        ui->p_przycisk;
//        ui->p_zasilacz;
//        ui->p_liczba_czujek;
//        ui->p_wrazliwosc_czujek;
//        ui->p_liczba_zraszaczy;
        ui->foto_alarm->hide();
        ui->foto_ppoz->hide();
        ui->foto_zrasz->hide();

        ui->p_nazwa->setText(QString::fromStdString((*it)->get_nazwa_systemu()));
        ui->p_stan->setText(QString::fromStdString((*it)->get_stan()));
        ui->p_liczba_zgloszen->display((*it)->get_liczba_zgloszen());
        ui->p_klasa->display((*it)->get_klasa_systemu());

        if ((*it)->zwrocSymbol() == 'D'){
            ui->foto_alarm->show();
            ui->p_tytul->setText("System Alarmowy");
            SysAlarm* wsk;
            wsk = dynamic_cast<SysAlarm*>((*it));
            ui->l_nazwa_modelu->show();
            ui->p_nazwa_modelu->show();
            ui->l_pobor->show();
            ui->l_poborW->show();
            ui->p_pobor->show();
            ui->l_przycisk->show();
            ui->p_przycisk->show();
            ui->l_zasilacz->show();
            ui->p_zasilacz->show();

            ui->p_nazwa_modelu->setText(QString::fromStdString(wsk->get_nazwa_modelu()));
            ui->p_pobor->display(wsk->get_pobor_mocy());
            ui->p_przycisk->setBinMode();
            ui->p_zasilacz->setBinMode();
            ui->p_przycisk->display(wsk->get_przycisk_napadowy());
            ui->p_zasilacz->display(wsk->get_zasilacz_awaryjny());

            ui->p_liczba_czujek->hide();
            ui->l_liczba_czujek->hide();
            ui->p_wrazliwosc_czujek->hide();
            ui->l_wrazliwosc_czujek->hide();
            ui->p_liczba_zraszaczy->hide();
            ui->l_liczba_zraszaczy->hide();
        }
        else if ((*it)->zwrocSymbol() == 'B'){
            ui->foto_ppoz->show();
            ui->p_tytul->setText("System PPOŻ");
            SysPpoz* wsk;
            wsk = dynamic_cast<SysPpoz*>((*it));

            ui->l_nazwa_modelu->hide();
            ui->p_nazwa_modelu->hide();
            ui->l_pobor->hide();
            ui->l_poborW->hide();
            ui->p_pobor->hide();
            ui->l_przycisk->hide();
            ui->p_przycisk->hide();
            ui->l_zasilacz->hide();
            ui->p_zasilacz->hide();
            ui->p_liczba_zraszaczy->hide();
            ui->l_liczba_zraszaczy->hide();

            ui->p_liczba_czujek->show();
            ui->l_liczba_czujek->show();
            ui->p_wrazliwosc_czujek->show();
            ui->l_wrazliwosc_czujek->show();

            ui->p_liczba_czujek->display(wsk->get_liczba_czujek());
            ui->p_wrazliwosc_czujek->display(wsk->get_wrazliwosc_czujek());
        }
        else if((*it)->zwrocSymbol() == 'C'){
            ui->foto_zrasz->show();
            SysZraszaczy* wsk;
            ui->p_tytul->setText("System Zraszaczy");
            wsk = dynamic_cast<SysZraszaczy*>((*it));

            ui->l_nazwa_modelu->hide();
            ui->p_nazwa_modelu->hide();
            ui->l_pobor->hide();
            ui->l_poborW->hide();
            ui->p_pobor->hide();
            ui->l_przycisk->hide();
            ui->p_przycisk->hide();
            ui->l_zasilacz->hide();
            ui->p_zasilacz->hide();

            ui->p_liczba_zraszaczy->show();
            ui->l_liczba_zraszaczy->show();
            ui->p_liczba_czujek->show();
            ui->l_liczba_czujek->show();
            ui->p_wrazliwosc_czujek->show();
            ui->l_wrazliwosc_czujek->show();


            ui->p_liczba_czujek->display(wsk->get_liczba_czujek());
            ui->p_wrazliwosc_czujek->display(wsk->get_wrazliwosc_czujek());
            ui->p_liczba_zraszaczy->display(wsk->get_liczba_zraszaczy());
            ui->p_nazwa_modelu->hide();
            ui->p_pobor->hide();
            ui->p_przycisk->hide();
            ui->p_zasilacz->hide();
        }
    }
}

void Przeglag::on_prevButton_clicked()
{
    if (it==wektor_obiektow->begin())
    {
        ui->prevButton->setDisabled(1);
    }
    else {
        ui->nextButton->setEnabled(1);
        it--;
        wyswietl();
    }
}

void Przeglag::on_nextButton_clicked()
{
    if (it==wektor_obiektow->end()-1)
    {
        ui->nextButton->setDisabled(1);
    }
    else {
        ui->prevButton->setEnabled(1);
        it++;
        wyswietl();
    }
}

void Przeglag::on_doMenuButton_clicked()
{
    close();
}

void Przeglag::on_usunButton_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Usuwanie", "Czy na pewno chcesz usunąć ten system?",
                                                              QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes){
        vector <SysOchronne*>::iterator itEnd;
        itEnd = wektor_obiektow->end();
        itEnd--;
        swap (*it, *itEnd);
        wektor_obiektow->pop_back();
        close();
    }
}

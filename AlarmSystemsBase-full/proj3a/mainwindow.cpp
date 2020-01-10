#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dodaj_wybor.h"
#include "przeglag.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{
    Dodaj_wybor a;
    a.setModal(true);
    a.przekazWektor(&wektor_obiektow);
    a.exec();
}

void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Wyjście", "Czy na pewno chcesz wyjść z programu?",
                                                              QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes){
        this->close();
    }
}

void MainWindow::on_pushButton_clicked()
{
    Przeglag p;
    p.przekazWektor(&wektor_obiektow);
    p.wyswietl();
    p.setModal(true);
    p.exec();
}


void MainWindow::on_zapisButton_clicked()
{
    if (wektor_obiektow.size() != 0) {
                    ofstream plik("SystemyOchronne.txt");
                    plik << (int)wektor_obiektow.size() << endl;
                    for (int i=0; i<wektor_obiektow.size(); i++)
                    {
                        plik << wektor_obiektow[i]->zwrocSymbol() <<endl;
                        wektor_obiektow[i]->zapisz(plik);
                    }
                    plik.close();
                    QMessageBox::about(this,"Zapis", "Zapisywanie zakończone");
                }
}

void MainWindow::on_wczytButton_clicked()
{
    int l_obj;
    char symbol;
    ifstream plik("SystemyOchronne.txt", ios::in);
    if (plik.fail())
        cout << "blad wczytywania pliku" << endl;
    else {
        plik >> l_obj;
        wektor_obiektow.clear();
        for (int i = 0; i < l_obj; i++) {
            plik >> symbol;
            if (symbol == 'D') {
                wektor_obiektow.push_back(new SysAlarm);
                wektor_obiektow[i]->wczytaj(plik);
                //SysAlarm* wsk;
                //wsk = dynamic_cast<SysAlarm*>(wektor_obiektow[i]);
                //wsk->wczytaj(plik);
            }
            else if (symbol == 'B') {
                wektor_obiektow.push_back(new SysPpoz);
                wektor_obiektow[i]->wczytaj(plik);
                //SysPpoz* wsk;
                //wsk = dynamic_cast<SysPpoz*>(wektor_obiektow[i]);
                //wsk->wczytaj(plik);
            }
            else if (symbol == 'C') {
                wektor_obiektow.push_back(new SysZraszaczy);
                wektor_obiektow[i]->wczytaj(plik);
                //SysZraszaczy* wsk;
                //wsk = dynamic_cast<SysZraszaczy*>(wektor_obiektow[i]);
                //wsk->wczytaj(plik);
            }
        }
        plik.close();
        QMessageBox::about(this,"Wczyt", "Wczytywanie zakończone");
                }
}

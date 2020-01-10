#include "Czujka.h"
#include <iostream>
using namespace std;

int Czujka::liczbaStworzonychCzujek = 0;
int Czujka::liczbaIstniejacychCzujek = 0;

Czujka::Czujka() {
#ifdef _DEBUG
	cout << "Wywolano konstruktor Czujka" << endl;
#endif // _DEBUG
	ruchu = false;
	zbiciaSzkla = false;
	wsztrzasow = false;
	podczerwieni = false;
	pozaru = false;
	czadu = false;
	liczbaStworzonychCzujek++;
	liczbaIstniejacychCzujek++;	
}

Czujka::Czujka(bool nRuch, bool nZbiciaSzkla, bool nWstrzasow, bool nPodczerwieni, bool nPozaru, bool nCzadu){
#ifdef _DEBUG
	cout << "Wywolano konstruktor Czujka" << endl;
#endif // _DEBUG
	ruchu = nRuch;
	zbiciaSzkla = nZbiciaSzkla;
	wsztrzasow = nWstrzasow;
	podczerwieni = nPodczerwieni;
	pozaru = nPozaru;
	czadu = nCzadu;
	liczbaStworzonychCzujek++;
	liczbaIstniejacychCzujek++;
}


Czujka::~Czujka() {
#ifdef _DEBUG
	cout << "Wywolano destruktor ~Czujka	|	Usunieto modul czujek" << endl;
#endif // _DEBUG
	liczbaIstniejacychCzujek--;
}

void Czujka::addRuchu() {
	ruchu = true;
}
void Czujka::addZbiciaSzkla() {
	zbiciaSzkla = true;
}
void Czujka::addWsztrzasow() {
	wsztrzasow = true;
}
void Czujka::addPodczerwieni() {
	podczerwieni = true;
}
void Czujka::addPozaru() {
	pozaru = true;
}
void Czujka::addCzadu() {
	czadu = true;
}
void Czujka::removeRuchu() {
	ruchu = false;
}
void Czujka::removeZbiciaSzkla() {
	zbiciaSzkla = false;
}
void Czujka::removeWsztrzasow() {
	wsztrzasow = false;
}
void Czujka::removePodczerwieni() {
	podczerwieni = false;
}
void Czujka::removePozaru() {
	pozaru = false;
}
void Czujka::removeCzadu() {
	czadu = false;
}
string Czujka::getListaCzujek() {
	string listaCzujek = " czujniki ";
	if (ruchu || zbiciaSzkla || wsztrzasow || podczerwieni || pozaru || czadu) {
		if (ruchu)
			listaCzujek += "ruchu |";
		if (zbiciaSzkla)
			listaCzujek += "zbicia szkla |";
		if (wsztrzasow)
			listaCzujek += "wstrzasow |";
		if (podczerwieni)
			listaCzujek += "podczerwieni |";
		if (pozaru)
			listaCzujek += "pozaru |";
		if (czadu)
			listaCzujek += "czadu |";
	}
	else
		listaCzujek = " pusty modul czujek";
	return listaCzujek;
}

Czujka & Czujka::operator = (const Czujka &czuj) {
	if (&czuj != this) {
		ruchu = czuj.ruchu;
		zbiciaSzkla = czuj.zbiciaSzkla;
		wsztrzasow = czuj.wsztrzasow;
		podczerwieni = czuj.podczerwieni;
		pozaru = czuj.pozaru;
		czadu = czuj.czadu;
	}
	return *this;
}

int Czujka::ileIstnieje() {
	return liczbaIstniejacychCzujek;
}

std::ostream& operator << (std::ostream &wyj, Czujka &czuj) {
	wyj << czuj.ruchu << " " << czuj.zbiciaSzkla << " " << czuj.wsztrzasow << " " << czuj.podczerwieni << " " << czuj.pozaru << " " << czuj.czadu;
	return wyj;
}
std::istream& operator >> (std::istream &wej, Czujka &czuj) {
	wej >> czuj.ruchu >> czuj.zbiciaSzkla >> czuj.wsztrzasow >> czuj.podczerwieni >> czuj.pozaru >> czuj.czadu;
	return wej;
}
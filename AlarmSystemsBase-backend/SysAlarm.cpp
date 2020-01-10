#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>	////
#include "SysAlarm.h"

using namespace std;

int SysAlarm::liczba_stworzonych = 0;
int SysAlarm::liczba_istniejacych = 0;

SysAlarm::SysAlarm() {
#ifdef _DEBUG
	cout << "Wywolano domyslny konstruktor SysAlarm" << endl;
#endif
	pobor_mocy = 100;
	nazwa_modelu = "Atlas";
	przycisk_napadowy = false;
	zasilacz_awaryjny = false;

	liczba_stworzonych++;
	liczba_istniejacych++;
}

SysAlarm::SysAlarm(string nazwa) {
#ifdef _DEBUG
	cout << "Wywolano konstruktor SysAlarm" << endl;
#endif // _DEBUG
	pobor_mocy = 100;
	nazwa_modelu = nazwa;
	przycisk_napadowy = false;
	zasilacz_awaryjny = false;
	czujkaFlag = false;
	lacznoscFlag = false;

	liczba_stworzonych++;
	liczba_istniejacych++;
}

//klonowanie
SysAlarm::SysAlarm(const SysAlarm &sysAlarm) {
	nazwa_modelu = sysAlarm.nazwa_modelu;
	klasa_systemu = sysAlarm.klasa_systemu;
	pobor_mocy = sysAlarm.pobor_mocy;
	przycisk_napadowy = sysAlarm.przycisk_napadowy;
	zasilacz_awaryjny = sysAlarm.zasilacz_awaryjny;

	czujkaFlag = sysAlarm.czujkaFlag;
	lacznoscFlag = sysAlarm.lacznoscFlag;

	if (lacznoscFlag)
		lacznosc = sysAlarm.lacznosc;
	if (czujkaFlag)
		czujka = sysAlarm.czujka;		
}

//destruktor
SysAlarm::~SysAlarm() {
#ifdef _DEBUG
	cout << "Wywolano destruktor ~SysAlarm	|	Usunieto system alarmowy" << endl;
#endif // _DEBUG
	liczba_istniejacych = max(--liczba_istniejacych, 0);

}

void SysAlarm::setNazwaModelu(string model) {
	nazwa_modelu = model;
}

int SysAlarm::getIstniejace() {
	return liczba_istniejacych;
}

int SysAlarm::getStworzone() {
	return liczba_stworzonych;
}

int SysAlarm::getPoborMocy() {
	return pobor_mocy;
}

void SysAlarm::addPrzycisk() {
	przycisk_napadowy = true;
	klasa_systemu++;
}

void SysAlarm::addZasilaczAwaryjny() {
	zasilacz_awaryjny = true;
	klasa_systemu++;
}

void SysAlarm::removePrzycisk() {
	przycisk_napadowy = false;
	if (klasa_systemu > 1)
		klasa_systemu--;
}

void SysAlarm::removeZasilaczAwaryjny() {
	zasilacz_awaryjny = false;
	if (klasa_systemu > 1)
		klasa_systemu--;
}

void SysAlarm::addModulLacznosci(bool nGSM, bool nWifi, bool nEthernet, bool nAplikacja) {
	if (!lacznoscFlag)
		Lacznosc lacznosc = Lacznosc::Lacznosc();
	lacznoscFlag = true;
}
void SysAlarm::addModulCzujek(bool nRuch, bool nZbiciaSzkla, bool nWstrzasow, bool nPodczerwieni, bool nPozaru, bool nCzadu) {
	if (!czujkaFlag)
		czujka = Czujka::Czujka(nRuch, nZbiciaSzkla, nWstrzasow, nPodczerwieni, nPozaru, nCzadu); //Czujka czujka;
	czujkaFlag = true;
}
void SysAlarm::removeModulLacznosci() {
	if (lacznoscFlag)
		lacznosc.~Lacznosc();
	lacznoscFlag = false;
}
void SysAlarm::removeModulCzujek() {
	if (czujkaFlag)
		czujka.~Czujka();
	czujkaFlag = false;
}

string SysAlarm::getInfo() {
	string ans;
	ans = "System alarmowy " + nazwa_modelu + " o klasie " + to_string(klasa_systemu) + " i poborze mocy " + to_string(pobor_mocy) + "W";
	if (czujkaFlag || lacznoscFlag || zasilacz_awaryjny) {
		ans += " zawiera: ";
		if (czujkaFlag)
			ans += czujka.getListaCzujek();
		if (lacznoscFlag)
			ans += lacznosc.getListaModulow();
		if (zasilacz_awaryjny)
			ans += " zasilacz awaryjny	|";
		if (przycisk_napadowy)
			ans += " przycisk napadowy";
	}
	return ans;
}


bool SysAlarm::operator == (const SysAlarm &sysAlarm) {
	return sysAlarm.klasa_systemu == klasa_systemu;
}

bool SysAlarm::operator < (const SysAlarm &sysAlarm) {
	return sysAlarm.klasa_systemu < klasa_systemu;
}

bool SysAlarm::operator > (const SysAlarm &sysAlarm) {
	return sysAlarm.klasa_systemu > klasa_systemu;
}

bool SysAlarm::operator != (const SysAlarm &sysAlarm) {
	return sysAlarm.klasa_systemu != klasa_systemu;
}

SysAlarm SysAlarm::operator + (const SysAlarm &sysAlarm) {
	SysAlarm result;
	result.klasa_systemu = klasa_systemu + sysAlarm.klasa_systemu;
	result.pobor_mocy = pobor_mocy + sysAlarm.pobor_mocy;
	result.przycisk_napadowy = przycisk_napadowy || sysAlarm.przycisk_napadowy;
	result.zasilacz_awaryjny = zasilacz_awaryjny || sysAlarm.zasilacz_awaryjny;
	return result;
}

SysAlarm SysAlarm::operator - (const SysAlarm &sysAlarm) {
	SysAlarm result;
	result.klasa_systemu = max(klasa_systemu - sysAlarm.klasa_systemu, 1);
	result.pobor_mocy = max(pobor_mocy - sysAlarm.pobor_mocy, 100);
	result.przycisk_napadowy = false;
	result.zasilacz_awaryjny = false;
	return result;
}

SysAlarm SysAlarm::operator ++ (int) {
	//zwiêksza klasê sprzetu o 1
	klasa_systemu++;
	return *this;
}

SysAlarm SysAlarm::operator -- (int) {
	//zmniejsza klase sprzetu o 1
	klasa_systemu = max(klasa_systemu--, 1);
	return *this;
}

SysAlarm SysAlarm::operator += (const SysAlarm &sysAlarm) {
	//dodaje zawaryjny zasilacz???		dodaje swoja klase
	klasa_systemu += klasa_systemu;
	pobor_mocy += pobor_mocy;
	zasilacz_awaryjny = true;
	return *this;
}

SysAlarm SysAlarm::operator -= (const SysAlarm &sysAlarm) {
	klasa_systemu = 1;
	pobor_mocy = 100;
	przycisk_napadowy = false;
	zasilacz_awaryjny = false;
	return *this;
}

SysAlarm & SysAlarm::operator = (const SysAlarm &sysAlarm) {
	if (&sysAlarm != this) {
		nazwa_modelu = sysAlarm.nazwa_modelu;
		klasa_systemu = sysAlarm.klasa_systemu;
		pobor_mocy = sysAlarm.pobor_mocy;
		przycisk_napadowy = sysAlarm.przycisk_napadowy;
		zasilacz_awaryjny = sysAlarm.zasilacz_awaryjny;
		czujkaFlag = sysAlarm.czujkaFlag;
		lacznoscFlag = sysAlarm.lacznoscFlag;

		czujka = sysAlarm.czujka;
		lacznosc = sysAlarm.lacznosc;
	}	
	return *this;
}

int SysAlarm::ileIstniejeSysAlarm() {
	return liczba_istniejacych;
}

void SysAlarm::zmienKlase(int nowa_klasa) {
	klasa_systemu = nowa_klasa;
}

void SysAlarm::zglos() {
	SysOchronne::zglos();
	cout << "Policja wezwana" << endl;
}

void SysAlarm::getOut(ostream &wyj) {
	SysOchronne::getOut(wyj);
	wyj << nazwa_modelu << endl << pobor_mocy << endl << przycisk_napadowy << " " << zasilacz_awaryjny << " "
	 << endl << lacznosc
	 << endl << czujka << endl;
}
void SysAlarm::getIn(istream &wej) {
	SysOchronne::getIn(wej);
	wej >> nazwa_modelu >> pobor_mocy >> przycisk_napadowy >> zasilacz_awaryjny
		>> lacznosc >> czujka;
}
char SysAlarm::zwrocSymbol()
{
	return naSchem;
}
std::ostream& operator << (std::ostream &wyj, SysAlarm &sysalarm) {
	sysalarm.getOut(wyj);
	return wyj;
}
std::istream& operator >> (std::istream &wej, SysAlarm &sysalarm) {
	sysalarm.getIn(wej);
	return wej;
}

#include "Lacznosc.h"
#include <string>
#include <iostream>

using namespace std;

int Lacznosc::liczbaStworzonychModLacz = 0;
int Lacznosc::liczbaIstniejacychModLacz = 0;

Lacznosc::Lacznosc(){
//#ifdef _DEBUG
	cout << "Wywolano konstruktor Lacznosc" << endl;
//#endif // _DEBUG
	GSM = false;
	wifi = false;
	ethernet = false;
	aplikacja_mobilna = false;
	liczbaStworzonychModLacz++;
	liczbaIstniejacychModLacz++;
}

Lacznosc::Lacznosc(bool nGSM, bool nWifi, bool nEthernet, bool nAplikacja) { //bool GSM, Wifi, Ethernet, Aplikacja
//#ifdef _DEBUG
	cout << "Wywolano konstruktor Lacznosc" << endl;
//#endif // _DEBUG
	GSM = nGSM;
	wifi = nWifi;
	ethernet = nEthernet;
	aplikacja_mobilna = nAplikacja;
	liczbaStworzonychModLacz++;
	liczbaIstniejacychModLacz++;
}

Lacznosc::~Lacznosc(){
#ifdef _DEBUG
	cout << "Wywolano destruktor ~Lacznosc	|	Usunieto modul lacznosci" << endl;
#endif // _DEBUG
	liczbaIstniejacychModLacz--;
}

void Lacznosc::addGSM() {
	GSM = true;
}
void Lacznosc::addWifi() {
	wifi = true;
}
void Lacznosc::addEthernet() {
	ethernet = true;
}
void Lacznosc::addAplikacja_mobilna() {
	aplikacja_mobilna = true;
}
void Lacznosc::removeGSM() {
	GSM = false;
}
void Lacznosc::removeWifi() {
	wifi = false;
}
void Lacznosc::removeEthernet() {
	ethernet = false;
}
void Lacznosc::removeAplikacja_mobilna() {
	aplikacja_mobilna = false;
}
string Lacznosc::getListaModulow() {
	string modulesList = " lacznosc ";
	if (GSM || wifi || ethernet || aplikacja_mobilna) {
		if (GSM)
			modulesList += "GSM |";
		if (wifi)
			modulesList += "WiFi |";
		if (ethernet)
			modulesList += "Ethernet |";
		if (aplikacja_mobilna)
			modulesList += "aplikacja mobilna |";
	}
	else
		modulesList = " pusty modul lacznosci";

	return modulesList;
}

Lacznosc & Lacznosc::operator = (const Lacznosc &laczn) {
	if (&laczn != this) {
		GSM = laczn.GSM;
		wifi = laczn.wifi;
		ethernet = laczn.ethernet;
		aplikacja_mobilna = laczn.aplikacja_mobilna;
	}
	return *this;
}

int Lacznosc::ileIstnieje( ) {
	return liczbaIstniejacychModLacz;
}

std::ostream& operator << (std::ostream &wyj, Lacznosc &lacz) {
	wyj << lacz.GSM << " " << lacz.wifi << " " << lacz.ethernet << " " << lacz.aplikacja_mobilna;
	return wyj;
}
std::istream& operator >> (std::istream &wej, Lacznosc &lacz) {
	wej >> lacz.GSM >> lacz.wifi >> lacz.ethernet >> lacz.aplikacja_mobilna;
	return wej;
}
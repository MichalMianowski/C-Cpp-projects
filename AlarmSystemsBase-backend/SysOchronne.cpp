#include <string>
#include <iostream>
#include <fstream>
#include "SysOchronne.h"

using namespace std;

SysOchronne::SysOchronne()
{
}
SysOchronne::~SysOchronne()
{
}

void SysOchronne::wlacz() {
	stan = "wl";
}
void SysOchronne::wylacz() {
	stan = "wyl";
}
void SysOchronne::zglos() {
	liczba_zgloszen++;
}
void SysOchronne::zmienNazwe(string nowa_nazwa) {
	nazwa_systemu = nowa_nazwa;
}

void SysOchronne::getOut(ostream &wyj) const {
	wyj << nazwa_systemu << endl << stan << endl << liczba_zgloszen << endl;
}
void SysOchronne::getIn(istream &wej) {
	wej >> nazwa_systemu >> stan >> liczba_zgloszen;
}
std::ostream& operator << (std::ostream &wyj, SysOchronne &sysochr) {
	sysochr.getOut(wyj);
	return wyj;
}
std::istream& operator >> (std::istream &wej, SysOchronne &sysochr) {
	sysochr.getIn(wej);
	return wej;
}
void SysOchronne::zapisz(ofstream &plik) {
	plik << *this;
}
void SysOchronne::wczytaj(ifstream &plik) {
	plik >> *this;
}
void SysOchronne::ustaw(string nnazwa_systemu, string nstan, int nliczba_zgloszen, int klasa_systemu) {
	nazwa_systemu = nnazwa_systemu;
	stan = nstan;
	liczba_zgloszen = nliczba_zgloszen;
	klasa_systemu = klasa_systemu;
}
char SysOchronne::zwrocSymbol() {
	return naSchem;
}
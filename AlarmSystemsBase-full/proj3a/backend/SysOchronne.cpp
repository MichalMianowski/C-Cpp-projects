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
SysOchronne::SysOchronne(string n_nazwa_systemu, int n_stan, int n_liczba_zgloszen, int n_klasa_systemu)
{
	nazwa_systemu = n_nazwa_systemu;
	if (n_stan == 1)
		stan = "Wl";
	else if (n_stan == 0)
		stan = "Wyl";
	liczba_zgloszen = n_liczba_zgloszen;
	klasa_systemu = n_klasa_systemu;
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
//void SysOchronne::zapisz(ofstream &plik) {
//	plik << *this;
//}
//void SysOchronne::wczytaj(ifstream &plik) {
//	plik >> *this;
//}
void SysOchronne::zapisz()
{
	ofstream plik("SystemyOchronne.txt");
	plik << *this;
}

void SysOchronne::wczytaj()
{
	ifstream plik("SystemyOchronne.txt");
	plik >> *this;
}

string SysOchronne::get_nazwa_systemu()
{
	return nazwa_systemu;
}
string SysOchronne::get_stan()
{
	return stan;
}
int SysOchronne::get_liczba_zgloszen()
{
	return liczba_zgloszen;
}
int SysOchronne::get_klasa_systemu()
{
	return klasa_systemu;
}
void SysOchronne::ustaw(string nnazwa_systemu, string nstan, int nliczba_zgloszen, int klasa_systemu) {
	nazwa_systemu = nnazwa_systemu;
	stan = nstan;
	liczba_zgloszen = nliczba_zgloszen;
	klasa_systemu = klasa_systemu;
}
#include <string>
#include <iostream>
#include "SysZraszaczy.h"
using namespace std;
string plik_stanu_sz = "Sys_Zraszaczy.txt";

SysZraszaczy::SysZraszaczy()
{
}

SysZraszaczy::SysZraszaczy(string n_nazwa_systemu, int n_stan, int n_liczba_zgloszen, int n_klasa_systemu, int n_liczba_czujek, float n_wrazliwosc_czujek, int n_liczba_zraszaczy)
{
	nazwa_systemu = n_nazwa_systemu;
	if (n_stan == 1)
		stan = "Wl";
	else if (n_stan == 0)
		stan = "Wyl";
	liczba_zgloszen = n_liczba_zgloszen;
	klasa_systemu = n_klasa_systemu;
	liczba_czujek = n_liczba_czujek;
	wrazliwosc_czujek = n_wrazliwosc_czujek;
	liczba_zraszaczy = n_liczba_zraszaczy;
}

SysZraszaczy::~SysZraszaczy()
{
}

void SysZraszaczy::setLiczba_zraszaczy(int nowa_liczba_zraszaczy) {
	liczba_zraszaczy = nowa_liczba_zraszaczy;
}
void SysZraszaczy::zglos() {
	SysPpoz::zglos();
	cout << "Wlaczono zraszacze" << endl;
}

void SysZraszaczy::getOut(ostream &wyj) const {
	SysPpoz::getOut(wyj);
	wyj << liczba_zraszaczy << endl;
}
void SysZraszaczy::getIn(istream &wej) {
	SysPpoz::getIn(wej);
	wej >> liczba_zraszaczy;
}
char SysZraszaczy::zwrocSymbol()
{
	return naSchem;
}
void SysZraszaczy::zapisz(ofstream & plik)
{
	plik << *this;
}
void SysZraszaczy::wczytaj(ifstream & plik)
{
	plik >> *this;
}
int SysZraszaczy::get_liczba_zraszaczy()
{
	return liczba_zraszaczy;
}
std::ostream& operator << (std::ostream &wyj, SysZraszaczy &syszrasz) {
	syszrasz.getOut(wyj);
	return wyj;
}
std::istream& operator >> (std::istream &wej, SysZraszaczy &syszrasz) {
	syszrasz.getIn(wej);
	return wej;
}
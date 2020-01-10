#include <string>
#include "SysPpoz.h"
#include "SysOchronne.h"
using namespace std;
string plik_stanu_sp = "Sys_Ppoz.txt";

SysPpoz::SysPpoz()
{
}

SysPpoz::~SysPpoz()
{
}


void SysPpoz::zmienKlase(int nowa_klasa) {
	klasa_systemu = nowa_klasa;
}

void SysPpoz::zglos() {
	SysOchronne::zglos();
	cout << "Stra¿ Po¿arna wezwana." << endl;
}

int SysPpoz::getLiczba_czujek() {
	return liczba_czujek;
}
float SysPpoz::getWrazliwosc_czujek() {
	return wrazliwosc_czujek;
}
void SysPpoz::setLiczba_czujek(int nowa_liczba_czujek) {
	liczba_czujek = nowa_liczba_czujek;
}
void SysPpoz::setWrazliwosc_czujek(float nowa_wrazliwosc) {
	wrazliwosc_czujek = nowa_wrazliwosc;
}

void SysPpoz::getOut(ostream &wyj) const {
	SysOchronne::getOut(wyj);
	wyj << liczba_czujek << endl << wrazliwosc_czujek << endl;
}
void SysPpoz::getIn(istream &wej) {
	SysOchronne::getIn(wej);
	wej >> liczba_czujek >> wrazliwosc_czujek;
}
char SysPpoz::zwrocSymbol()
{
	return naSchem;
}
std::ostream& operator << (std::ostream &wyj, SysPpoz &sysppoz) {
	sysppoz.getOut(wyj);
	return wyj;	
}
std::istream& operator >> (std::istream &wej, SysPpoz &sysppoz) {
	sysppoz.getIn(wej);
	return wej;
}
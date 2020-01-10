#include <string>
#include <iostream>
#include "SysZraszaczy.h"
using namespace std;
string plik_stanu_sz = "Sys_Zraszaczy.txt";

SysZraszaczy::SysZraszaczy()
{
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
std::ostream& operator << (std::ostream &wyj, SysZraszaczy &syszrasz) {
	syszrasz.getOut(wyj);
	return wyj;
}
std::istream& operator >> (std::istream &wej, SysZraszaczy &syszrasz) {
	syszrasz.getIn(wej);
	return wej;
}
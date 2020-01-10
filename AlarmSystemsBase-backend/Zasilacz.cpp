#include "Zasilacz.h"
#include <iostream>

using namespace std;

int Zasilacz::liczbaStworzonychZasil = 0;
int Zasilacz::liczbaIstniejacychZasil = 0;

Zasilacz::Zasilacz() {
#ifdef _DEBUG
	cout << "Wywolano konstruktor Zasilacz" << endl;
#endif // _DEBUG
	liczbaStworzonychZasil++;
	liczbaIstniejacychZasil++;
}

Zasilacz::Zasilacz(int moc) {
#ifdef _DEBUG
	cout << "Wywolano konstruktor Zasilacz" << endl;
#endif // _DEBUG
	mocW = moc;
	liczbaStworzonychZasil++;
	liczbaIstniejacychZasil++;
}

Zasilacz::~Zasilacz()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor ~Zasilacz	|	Usunieto zasilacz" << endl;
#endif // _DEBUG
	liczbaIstniejacychZasil--;
}

void Zasilacz::setMocW(int nowaMoc){
	mocW = nowaMoc;
}

int Zasilacz::getMocW() {
	return mocW;
}

Zasilacz & Zasilacz::operator = (const Zasilacz &zasil) {
	if (&zasil != this)
		mocW = zasil.mocW;
	return *this;
}

int Zasilacz::ileIstnieje(){
	return liczbaIstniejacychZasil;
}
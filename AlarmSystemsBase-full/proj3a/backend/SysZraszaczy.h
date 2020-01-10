#pragma once
#include "SysPpoz.h"
class SysZraszaczy :
	public SysPpoz
{
private:
	int liczba_zraszaczy = 1;
	char naSchem = 'C';
public:
	SysZraszaczy();
	SysZraszaczy(string n_nazwa_systemu, int n_stan, int n_liczba_zgloszen, int n_klasa_systemu, int n_liczba_czujek, float n_wrazliwosc_czujek, int n_liczba_zraszaczy);
	~SysZraszaczy();
	///metoda przypisujaca nowa liczbe zraszaczy
	/**
	\param nowa_liczba_zraszaczy zmienna int bedaca nowa liczba zroaszaczy w systemie
	*/
	void setLiczba_zraszaczy(int nowa_liczba_zraszaczy);
	void zglos();
	///metoda strumieniowania out
	virtual void getOut(ostream &wyj) const;
	///metoda strumieniowania in
	virtual void getIn(istream &wej);
	///Operator strumieniowy <<
	friend std::ostream& operator << (std::ostream &wyj, SysZraszaczy &syszrasz);
	///Operator strumieniowy >>
	friend std::istream& operator >> (std::istream &wej, SysZraszaczy &syszrasz);

	char zwrocSymbol();
	void zapisz(ofstream &plik);
	void wczytaj(ifstream &plik);
	int get_liczba_zraszaczy();
};


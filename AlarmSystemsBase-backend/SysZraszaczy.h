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
};


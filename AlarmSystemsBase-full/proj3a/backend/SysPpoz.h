#pragma once
#include "SysOchronne.h"
class SysPpoz :
	public SysOchronne
{
protected:
	///zmienna przechowujaca liczbe czujek
	int liczba_czujek = 1;
	///zmienna float przechowujaca wartosc sumarycznej wrazliwosci czujek w systemie
	float wrazliwosc_czujek = 2.30;
	char naSchem = 'B';
public:
	///domyslny konstruktor
	SysPpoz();
	SysPpoz(string n_nazwa_systemu, int n_stan, int n_liczba_zgloszen, int n_klasa_systemu, int n_liczba_czujek, float n_wrazliwosc_czujek);
	///dumyślny destruktor
	~SysPpoz();
	///metoda zmieniajaca klase systemu
	void zmienKlase(int nowa_klasa);
	///metoda zglaszajaca incydent
	/**metoda oprocz standardowej inkrementacji wzywa Straz Pozarna
	*/
	void zglos();
	///metoda do pobrania liczby czujek w systemie
	/**
	\return zwraca int z liczba czujek w systemie
	*/
	int getLiczba_czujek();
	///metoda do pobrania sumarycznej wartosci wrazliwosci czujek w systemie
	/**
	\return zwraca float z sumaryczna wrazliwoscia systemu
	*/
	float getWrazliwosc_czujek();
	///metoda do przypisania liczby czujek
	/**
	\param nowa_liczba_czujek wprowadza nowa liczbe czujek w systemie
	*/
	void setLiczba_czujek(int nowa_liczba_czujek);
	///metoda do przypisania wrazliwosci systemu
	/**
	\param nowa_wrazliwosc wprowadza nowa wartosc czulosci systemu
	*/
	void setWrazliwosc_czujek(float nowa_wrazliwosc);
	///metoda strumieniowania out
	virtual void getOut(ostream &wyj) const;
	///metoda strumieniowania in
	virtual void getIn(istream &wej);
	///Operator strumieniowy <<
	friend std::ostream& operator << (std::ostream &wyj, SysPpoz &sysppoz);
	///Operator strumieniowy >>
	friend std::istream& operator >> (std::istream &wej, SysPpoz &sysppoz);

	char zwrocSymbol();
	void zapisz(ofstream &plik);
	void wczytaj(ifstream &plik);
	int get_liczba_czujek();
	float get_wrazliwosc_czujek();
	void zapisz();
	void wczytaj();
};


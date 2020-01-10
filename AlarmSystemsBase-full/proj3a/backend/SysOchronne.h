#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class SysOchronne
{
protected:
	string nazwa_systemu = "system bez nazwy";
	string stan = "wyl";	///<stan urzadzenia
	int liczba_zgloszen = 0; ///<zmienna przechowujaca liczbe zgloszen
	int klasa_systemu = 1; ///<zmienna int przechowuje wartość klasy systemu
    char naSchem;
public:
	
	///konstruktor domyslny
	SysOchronne();
	SysOchronne(string n_nazwa_systemu, int n_stan, int n_liczba_zgloszen, int n_klasa_systemu);
	///destruktor domyslny wirtualny
	virtual ~SysOchronne();
	///metoda wlaczajaca system
	void wlacz();
	///metoda wylaczajaca system
	void wylacz();
	///metoda zglaszajaca
	void zglos();
	///metoda zmieniajaca nazwe systemu
	/**
	\param nowa_nazwa przyjmuje nowa wartosc pola nazwa_systemu
	\return metoda nic nie zwraca
	*/
	void zmienNazwe(string nowa_nazwa);
	///metoda strumieniowania out
	virtual void getOut(ostream &wyj) const;
	///metoda strumieniowania in
	virtual void getIn(istream &wej);
	///operator strumieniowy <<
	friend std::ostream& operator << (std::ostream &wyj, SysOchronne &sysochr);
	///operator strumieniowy >>
	friend std::istream& operator >> (std::istream &wej, SysOchronne &sysochr);
	///metoda virtualna do zmiany klasy systemu
	virtual void zmienKlase(int nowa_klasa)=0;
	///metoda ustawiajaca parametry objektu
	virtual void ustaw(string nnazwa_systemu, string nstan, int nliczba_zgloszen, int klasa_systemu);
	///zwraca symbol klasy obiektu ze schematu
	virtual char zwrocSymbol()=0;
	///metoda do zapisu
	virtual void zapisz(ofstream &plik)=0;
	///metoda do wczytywania
	virtual void wczytaj(ifstream &plik)=0;

	void zapisz();
	void wczytaj();
	string get_nazwa_systemu();
	string get_stan();
	int get_liczba_zgloszen();
	int get_klasa_systemu();
};


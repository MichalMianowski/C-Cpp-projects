#pragma once
#include <fstream>
#include "SysOchronne.h"

using std::string;

class SysAlarm : public SysOchronne {
private:
	string nazwa_modelu;
	int pobor_mocy;				
	bool przycisk_napadowy;
	bool zasilacz_awaryjny;
	char naSchem = 'D';
public:
	static int liczba_stworzonych;
	static int liczba_istniejacych;
	SysAlarm();				//konstruktor
	void setSysAlarm(string n_nazwa_systemu, int n_stan, int n_liczba_zgloszen, int n_klasa_systemu,
		string n_nazwa_modelu, int n_pobor_mocy, bool n_przycisk_napadowy, bool n_zasilacz_awaryjny);
	SysAlarm(string n_nazwa_systemu, int n_stan, int n_liczba_zgloszen, int n_klasa_systemu,
		string n_nazwa_modelu, int n_pobor_mocy, bool n_przycisk_napadowy, bool n_zasilacz_awaryjny);
	
	SysAlarm(string nazwaModelu);
	virtual ~SysAlarm();				//destruktor
	SysAlarm(const SysAlarm &sysAlarm);	//klonowanie (kopiowanie)
	void setNazwaModelu(string model);
	int getIstniejace();
	int getStworzone();
	int getPoborMocy();
	void addPrzycisk();
	void addZasilaczAwaryjny();
	void removePrzycisk();
	void removeZasilaczAwaryjny();

	static int ileIstniejeSysAlarm();
	string getInfo();

	
	//operatory
	bool operator == (const SysAlarm &sysAlarm);	//porownoje klase
	bool operator < (const SysAlarm &sysAlarm);
	bool operator > (const SysAlarm &sysAlarm);
	bool operator != (const SysAlarm &sysAlarm);
	SysAlarm operator + (const SysAlarm &sysAlarm);		//dodaj� swoje moduly i wartosc klasy
	SysAlarm operator - (const SysAlarm &sysAlarm);		//dodaj� swoje moduly i wartosc klasy
	SysAlarm operator ++ (int);			//zwi�ksza klas� sprzetu o 1
	SysAlarm operator -- (int);			//zmniejsza klase sprzetu o 1
	SysAlarm operator += (const SysAlarm &sysAlarm);	//dodaje zawaryjny zasilacz???		dodaje swoja klase
	SysAlarm operator -= (const SysAlarm &sysAlarm);
	SysAlarm & operator = (const SysAlarm &sysAlarm);

	///metoda do zmiany klasy systemu
	/**metoda przyjmuje 1 parametr: nowa_klasa
	\parametr nowa_klasa jest now� warto�ci� klasy danego systemu
	funkcja nic nie zwraca
	*/
	void zmienKlase(int nowa_klasa);

	///metoda zgloszenie wlamania
	/**metoda oprocz zliczania zgloszen zawiadamia policje*/
	void zglos();

	///metoda strumieniowania out
	virtual void getOut(ostream &wyj);
	///metoda strumieniowania in
	virtual void getIn(istream &wej);
	///operator strumieniowy <<
	friend std::ostream& operator << (std::ostream &wyj, SysAlarm &sysalarm);
	///operator strumieniowy >>
	friend std::istream& operator >> (std::istream &wej, SysAlarm &sysalarm);

	char zwrocSymbol();
	void zapisz(ofstream &plik);
	void wczytaj(ifstream &plik);

	string get_nazwa_modelu();
	int get_pobor_mocy();
	bool get_przycisk_napadowy();
	bool get_zasilacz_awaryjny();
};
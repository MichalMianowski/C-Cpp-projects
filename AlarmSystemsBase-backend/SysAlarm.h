#pragma once
#include <fstream>
#include "Lacznosc.h"
#include "Czujka.h"
#include "Zasilacz.h"
#include "SysOchronne.h"

using std::string;

class SysAlarm : public SysOchronne {
private:
	string nazwa_modelu;
	int pobor_mocy;				
	bool przycisk_napadowy;
	bool zasilacz_awaryjny;
	bool czujkaFlag; //true jezeli system alarmowy posiada modul czujnikow
	bool lacznoscFlag;
	Lacznosc lacznosc;
	Czujka czujka;
	char naSchem = 'D';
public:
	static int liczba_stworzonych;
	static int liczba_istniejacych;
	SysAlarm();				//konstruktor
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

	void addModulLacznosci(bool nGSM=0, bool nWifi=0, bool nEthernet=0, bool nAplikacja=0);
	void addModulCzujek(bool nRuch = 0, bool nZbiciaSzkla = 0, bool nWstrzasow = 0, bool nPodczerwieni = 0, bool nPozaru = 0, bool nCzadu = 0);
	void removeModulLacznosci();
	void removeModulCzujek();
	static int ileIstniejeSysAlarm();
	string getInfo();

	
	//operatory
	bool operator == (const SysAlarm &sysAlarm);	//porownoje klase
	bool operator < (const SysAlarm &sysAlarm);
	bool operator > (const SysAlarm &sysAlarm);
	bool operator != (const SysAlarm &sysAlarm);
	SysAlarm operator + (const SysAlarm &sysAlarm);		//dodaj¹ swoje moduly i wartosc klasy
	SysAlarm operator - (const SysAlarm &sysAlarm);		//dodaj¹ swoje moduly i wartosc klasy
	SysAlarm operator ++ (int);			//zwiêksza klasê sprzetu o 1
	SysAlarm operator -- (int);			//zmniejsza klase sprzetu o 1
	SysAlarm operator += (const SysAlarm &sysAlarm);	//dodaje zawaryjny zasilacz???		dodaje swoja klase
	SysAlarm operator -= (const SysAlarm &sysAlarm);
	SysAlarm & operator = (const SysAlarm &sysAlarm);

	///metoda do zmiany klasy systemu
	/**metoda przyjmuje 1 parametr: nowa_klasa
	\parametr nowa_klasa jest now¹ wartoœci¹ klasy danego systemu
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
};
#include <iostream>
#include <fstream>
#include <string>
#include "SysAlarm.h"
#include "Czujka.h"
#include "Lacznosc.h"
#include "Zasilacz.h"

using std::string;
using namespace std;

void test_ogolny() {
	cout << "###############" << endl << "test ogolny" << endl << "############" << endl;
	cout << "Tworze 3 obiekty SysAlarm" << endl;
	SysAlarm pierwszy("pierwszy");
	SysAlarm drugi;
	SysAlarm trzeci;
	cout << endl << "trzeci nazywam atlas i drukuje informacje o nim" << endl;
	trzeci.setNazwaModelu("atlas");
	cout << endl << trzeci.getInfo() << endl;
	cout << endl << "do trzeciego dodaje zasilacz awaryjny i pelen modul czujek i pusty modul lacznosci" << endl;
	trzeci.addZasilaczAwaryjny();
	trzeci.addModulCzujek(1,1,1,1,1,1);
	trzeci.addModulLacznosci();
	cout << endl << trzeci.getInfo() << endl;
	cout << "do drugiego dodaje modul z kilkoma czujkami";
	drugi.addModulCzujek(1,1,0,1);
	cout << endl << drugi.getInfo() << endl;

	cout << "tworze 4. sysAlarm, ktory jest kopia drugiego i zmieniam jego nazwe na dupikat" << endl;
	SysAlarm czwarty;
	czwarty = drugi;
	czwarty.setNazwaModelu("duplikat");
	cout << endl << czwarty.getInfo() << endl;
	cout << endl << pierwszy.getInfo() << endl;
	cout << "liczba obiektow obecnie istniejacych: " << SysAlarm::liczba_istniejacych << endl;
}

void stanKoncowy() {

	cout << endl << "###############" << endl << "Po zakonczeniu dzialan pozostalo: " << endl;
	cout << SysAlarm::ileIstniejeSysAlarm() << " obiektow SysAlarm" << endl;
	cout << Czujka::ileIstnieje() << " obiektow Czujka" << endl;
	cout << Lacznosc::ileIstnieje() << " obiektow Lacznosc" << endl;
	cout << Zasilacz::ileIstnieje() << " obiektow Zasilacz" << endl;

	system("pause");
}
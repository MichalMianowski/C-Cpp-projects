#include <iostream>
#include <string>
#include "SysAlarm.h"
#include "Czujka.h"
#include "Lacznosc.h"
#include "Zasilacz.h"


using std::string;

using namespace std;

void test_operatorow() {
	cout << endl << "############" << endl << "test operatorow" << endl << "#############" << endl;
	cout << endl << "Tworze 3 obiekty SysAlarm" << endl << endl;
	SysAlarm pierwszy("pierwszy");
	SysAlarm drugi("drugi");
	SysAlarm trzeci("trzeci");
	cout << endl << "Inkrementuje klase pierwszego, drugiemu dodaje modul lacznosci oraz przycisk napadowy" << endl;
	pierwszy++;
	drugi.addModulLacznosci(1, 1, 1);
	drugi.addPrzycisk();
	cout << endl << drugi.getInfo() << endl;
	
	cout << endl << pierwszy.getInfo() << endl;
	cout << endl << "czy 1. = 3. ?	odp:" + to_string(pierwszy == trzeci) << endl;
	cout << endl << "pierwszy += trzeci :" << endl;
	pierwszy += trzeci;
	cout << endl << pierwszy.getInfo() << endl;
	cout << endl << "drugi -= trzeci :" << endl;
	drugi -= trzeci;
	cout << endl << drugi.getInfo() << endl;
}

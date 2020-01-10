#include <iostream>
#include <string>
#include <vector>
#include "SysOchronne.h"
#include "SysAlarm.h"
#include "SysPpoz.h"
#include "SysZraszaczy.h"

using namespace std;
int wybor = 0;
vector <SysOchronne*> wektor_obiektow;
vector <SysOchronne*>::iterator iter;
string p;
void menu() {
	cout << endl << "------------------------------" << endl
		<< "Wybierz opcje" << endl
		<< "------------------------------" << endl
		<< "	1 - dodaj obiekt" << endl
		<< "	2 - modyfikuj obiekt" << endl
		<< "	3 - usun obiekt(y)" << endl
		<< "	4 - prezentacja polimorfizmu" << endl
		<< "	5 - zapisz" << endl
		<< "	6 - wczytaj" << endl
		<< "	7 - wyswietl" << endl
		<< "	-1 - zakoncz" << endl;
}
void menuTyp() {
	cout << endl << "............................." << endl
		<< "Wybierz typ obiektu" << endl
		<< "............................." << endl
		<< "	1 - System Alarmowy" << endl
		<< "	2 - System PPOZ (przeciwpozarowy)" << endl
		<< "	3 - System zraszaczy" << endl;
}
void wyswietl() {
	int j = 0;
	cout << "---   obiekty w wektorze:   ---" << endl;
	for (int i=0; i != (int)wektor_obiektow.size(); i++){
		cout << "      " << i + 1 << "." << endl;
		wektor_obiektow[i]->getOut(cout);
	}
}


int main() {
	string nnwazwa_systemu, nstan;
	int nliczba_zgloszen, nklasa;

	do {
		menu();
		cin >> wybor;
		switch (wybor) {
		case 0: {
			 
			break; } 
		case 1: {//dodaj obiekt
			do {
				menuTyp();
				cin >> wybor;
				switch (wybor) {
				case 1:
					//sys alarm
					wektor_obiektow.push_back(new SysAlarm());
					break;
				case 2:
					//sys ppoz
					wektor_obiektow.push_back(new SysPpoz());
					break;
				case 3:
					//sys zraszaczy
					wektor_obiektow.push_back(new SysZraszaczy);
					break;
				default:
					wybor = 0;
					break;
				}
			} while (wybor == 0);
				break;	}
			//dodaj obiekt
		case 2: {//modyfikuj
			cout << (int)wektor_obiektow.size();
			if (wektor_obiektow.size() == 0) {
				cout << "wektor jest pusty" << endl;
				wybor = 0;
				break;
			}
			else {
				do {
					wyswietl();
					cout << "wybierz który objekt w wektorze chcesz modyfikowaæ" << endl;
					cin >> wybor;
					if (wybor <1 || wybor >(int)wektor_obiektow.size()) {
						cout << "wybrano nieprawidlowa pozycje" << endl;
					}
				} while (wybor <1 || wybor >(int)wektor_obiektow.size());
				cout << "modyfikujesz obiekt: " << wybor << endl;
				wybor--;
				wektor_obiektow[wybor]->getOut(cout);
				cout << "wprowadz nowa nazwa" << endl;
				cin >> nnwazwa_systemu;
				cout << "wprowadz nowy stan - wl lub wyl" << endl;
				cin >> nstan;
				cout << "wprowadz nowa liczbe zgloszen" << endl;
				cin >> nliczba_zgloszen;
				cout << "wprowadz nowa klase" << endl;
				cin >> nklasa;
				wektor_obiektow[wybor]->ustaw(nnwazwa_systemu, nstan, nliczba_zgloszen, nklasa);
			}
			wybor = 0;
			break; } 
			//modyfikuj
		case 3: {//usun
			if (wektor_obiektow.size() == 0) {
				cout << "wektor jest pusty" << endl;
				wybor = 0;
				break;
			}
			cout << "Liczba obiektow w wektorze: " << wektor_obiektow.size() << endl;
			wyswietl();
			cout << "0 -	usun wszystkie" << endl;
			do {
				cout << endl << "wybierz obiekt do usuniecia" << endl;
				cin >> wybor;
				if (wybor == 0) {
					wektor_obiektow.clear();
					cout << "usunieto wszystkie elem"<<endl;
				}
				if (wybor<0 || wybor> wektor_obiektow.size()) {
					cout << "wprowadzono zle dane" << endl;
				}
			} while (wybor<0 || wybor> wektor_obiektow.size());
			
			if (wybor != 0) {
				cout << "usuwanie obiektu";
				swap(wektor_obiektow[wybor-1], wektor_obiektow[wektor_obiektow.size() - 1]);
				wektor_obiektow.pop_back();

				cout << "stan po usunieciu obiektu"<<endl;
				wyswietl();
			}
			wybor = 0;
			 
			break;
			}
			//usun
		case 4: { //prezentacja polimorfizmu
			cout << "prezentacja polimorfizmu:" << endl;
			SysOchronne *s;
			SysPpoz sys_ppoz;
			s = &sys_ppoz;
			s->getOut(cout);

			wybor = 0;
			 
			break; }
			//prezentacja polimorfizmu
		case 5: { //zapis kolekcji
			if (wektor_obiektow.size() != 0) {
				ofstream plik("SystemyOchronne.txt");
				plik << (int)wektor_obiektow.size() << endl;
				for (int i = 0; i != (int)wektor_obiektow.size(); i++) {
					plik << wektor_obiektow[i]->zwrocSymbol() << endl;
					wektor_obiektow[i]->zapisz(plik);
				}
				plik.close();
				cout << "zapisano do pliku SystemyOchronne.txt" << endl;
			}
			wybor = 0;
			 
			break; }
			//zapis kolekcji
		case 6: { //odczyt kolekcji
			int l_obj;
			char symbol;
			ifstream plik("SystemyOchronne.txt", ios::in);
			if (plik.fail())
				cout << "blad wczytywania pliku" << endl;
			else {
				plik >> l_obj;
				wektor_obiektow.clear();
				for (int i = 0; i < l_obj; i++) {
					plik >> symbol;
					if (symbol == 'D') {
						wektor_obiektow.push_back(new SysAlarm);
						wektor_obiektow[i]->wczytaj(plik);
					}
					else if (symbol == 'B') {
						wektor_obiektow.push_back(new SysPpoz);
						wektor_obiektow[i]->wczytaj(plik);
					}
					else if (symbol == 'C') {
						wektor_obiektow.push_back(new SysZraszaczy);
						wektor_obiektow[i]->wczytaj(plik);
					}
				}
				plik.close();
				cout << "wczytano obiekty z pliku" << endl;
			}
			wybor = 0;
			 
			break; }
			//odczyt kolekcji
		case 7: {//wypisanie wszystkich obiektow z wektora
			wyswietl();
			wybor = 0;
			 
			break; }
			//wypisz
		case -1:
			break;
		default:
			cout << "Wprowadzono zly numer, sprobuj ponownie" << endl;
			wybor = 0;
			 
			break;
		}

	} while (wybor != -1);
	return 0;
}
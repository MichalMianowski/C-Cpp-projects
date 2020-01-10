#include <iostream>
#include <string>
#include <vector>
#include "Biblioteka_obiektow.h"

using namespace std;

void wyswietl() {
	int j = 0;
	cout << "---   obiekty w wektorze:   ---" << endl;
	for (int i = 0; i != (int)wektor_obiektow.size(); i++) {
		cout << "      " << i + 1 << "." << endl;
		wektor_obiektow[i]->getOut(cout);
	}
}


void dodajObiekt() {
//				case 1:
//					//sys alarm
//					wektor_obiektow.push_back(new SysAlarm());
//					break;
//				case 2:
//					//sys ppoz
//					wektor_obiektow.push_back(new SysPpoz());
//					break;
//				case 3:
//					//sys zraszaczy
//					wektor_obiektow.push_back(new SysZraszaczy);
//					break;
//				default:
//					wybor = 0;
}
				//dodaj obiekt
//case 2: {//modyfikuj
//			cout << (int)wektor_obiektow.size();
//			if (wektor_obiektow.size() == 0) {
//				cout << "wektor jest pusty" << endl;
//				wybor = 0;
//				break;
//			}
//			else {
//				do {
//					wyswietl();
//					cout << "wybierz kt�ry objekt w wektorze chcesz modyfikowa�" << endl;
//					cin >> wybor;
//					if (wybor <1 || wybor >(int)wektor_obiektow.size()) {
//						cout << "wybrano nieprawidlowa pozycje" << endl;
//					}
//				} while (wybor <1 || wybor >(int)wektor_obiektow.size());
//				cout << "modyfikujesz obiekt: " << wybor << endl;
//				wybor--;
//				wektor_obiektow[wybor]->getOut(cout);
//				cout << "wprowadz nowa nazwa" << endl;
//				cin >> nnwazwa_systemu;
//				cout << "wprowadz nowy stan - wl lub wyl" << endl;
//				cin >> nstan;
//				cout << "wprowadz nowa liczbe zgloszen" << endl;
//				cin >> nliczba_zgloszen;
//				cout << "wprowadz nowa klase" << endl;
//				cin >> nklasa;
//				wektor_obiektow[wybor]->ustaw(nnwazwa_systemu, nstan, nliczba_zgloszen, nklasa);
//			}
//			wybor = 0;
//			break; }
//				//modyfikuj
void usun(int wybor) {//usun
			if (wektor_obiektow.size() == 0) {
				cout << "wektor jest pusty" << endl;
			}
			cout << "Liczba obiektow w wektorze: " << wektor_obiektow.size() << endl;
			wyswietl();
			cout << "0 -	usun wszystkie" << endl;
			do {
				cout << endl << "wybierz obiekt do usuniecia" << endl;
				cin >> wybor;
				if (wybor == 0) {
					wektor_obiektow.clear();
					cout << "usunieto wszystkie elem" << endl;
				}
				if (wybor<0 || wybor> wektor_obiektow.size()) {
					cout << "wprowadzono zle dane" << endl;
				}
			} while (wybor<0 || wybor> wektor_obiektow.size());

			if (wybor != 0) {
				cout << "usuwanie obiektu";
				swap(wektor_obiektow[wybor - 1], wektor_obiektow[wektor_obiektow.size() - 1]);
				wektor_obiektow.pop_back();

				cout << "stan po usunieciu obiektu" << endl;
				wyswietl();
			}
			wybor = 0;
		}
				//usun
void zapis() { //zapis kolekcji
			if (wektor_obiektow.size() != 0) {
				ofstream plik("SystemyOchronne.txt");
				plik << (int)wektor_obiektow.size() << endl;
				for (int i = 0; i != (int)wektor_obiektow.size(); i++) {
					plik << wektor_obiektow[i]->zwrocSymbol() << endl;
					wektor_obiektow[i]->zapisz(plik);
				}
				plik.close();
				cout << "zapisano do pliku SystemyOchronne.txt" << endl;
            }}

				//zapis kolekcji
void odczyt() { //odczyt kolekcji
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
            }}
            //odczyt kolekcji

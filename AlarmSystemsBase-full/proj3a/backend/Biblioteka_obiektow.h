#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "SysOchronne.h"
#include "SysAlarm.h"
#include "SysPpoz.h"
#include "SysZraszaczy.h"

using namespace std;
static vector <SysOchronne*>::iterator iter;

void wyswietl();

void dodajObiekt();
void usun(int wybor);
void zapis();
void odczyt();

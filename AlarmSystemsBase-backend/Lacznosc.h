#pragma once
#include <string>

using std::string;

class Lacznosc{
private:
	bool GSM;
	bool wifi;
	bool ethernet;
	bool aplikacja_mobilna;

public:
	static int liczbaStworzonychModLacz;
	static int liczbaIstniejacychModLacz;
	Lacznosc();
	Lacznosc(bool nGSM, bool nWifi, bool nEthernet, bool nAplikacja);
	virtual ~Lacznosc();
	void addGSM();
	void addWifi();
	void addEthernet();
	void addAplikacja_mobilna();
	void removeGSM();
	void removeWifi();
	void removeEthernet();
	void removeAplikacja_mobilna();
	string getListaModulow();
	Lacznosc & operator = (const Lacznosc &laczn);
	static int ileIstnieje();
	///operator strumieniowy <<
	friend std::ostream& operator << (std::ostream &wyj, Lacznosc &lacz);
	///operator strumieniowy >>
	friend std::istream& operator >> (std::istream &wej, Lacznosc &lacz);
};


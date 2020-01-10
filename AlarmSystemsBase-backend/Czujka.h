#pragma once
#include <string>

using std::string;

class Czujka{
private:
	bool ruchu;
	bool zbiciaSzkla;
	bool wsztrzasow;
	bool podczerwieni;
	bool pozaru;
	bool czadu;

public:
    static int liczbaStworzonychCzujek;
	static int liczbaIstniejacychCzujek;
	Czujka();
	Czujka(bool nRuch, bool nZbiciaSzkla, bool nWstrzasow, bool nPodczerwieni, bool nPozaru, bool nCzadu);
	virtual ~Czujka();

	void addRuchu();
	void addZbiciaSzkla();
	void addWsztrzasow();
	void addPodczerwieni();
	void addPozaru();
	void addCzadu();
	void removeRuchu();
	void removeZbiciaSzkla();
	void removeWsztrzasow();
	void removePodczerwieni();
	void removePozaru();
	void removeCzadu();
	string getListaCzujek();
	Czujka & operator = (const Czujka &czuj);
	static int ileIstnieje();

	///operator strumieniowy <<
	friend std::ostream& operator << (std::ostream &wyj, Czujka &czuj);
	///operator strumieniowy >>
	friend std::istream& operator >> (std::istream &wej, Czujka &czuj);
};


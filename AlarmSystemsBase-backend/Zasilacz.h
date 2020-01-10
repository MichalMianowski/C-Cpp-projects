#pragma once
#include <string>
#include <iostream>
#include <fstream>

class Zasilacz{
private:
	int mocW;

public:
	static int liczbaStworzonychZasil;
	static int liczbaIstniejacychZasil;
	Zasilacz();
	Zasilacz(int moc);
	virtual ~Zasilacz();
	void setMocW(int nowaMoc);
	int getMocW();
	Zasilacz & operator = (const Zasilacz &zasil);
	static int ileIstnieje();
};


#pragma once
#include<string>
#include <vector>
using namespace std;
class osoba {
private:
	string imie;
	string naz;
	string pesel;
public:
	void setName(string _imie);
	void setNaz(string _naz);
	int setPesel(string _pesel);

	string getName();
	string getNaz();
	string getPesel();

};

class student:public osoba, Identifiable {
private:
	string nrindeksu;

public:
	void setNrIndeksu(string _nrindeksu);
	string getNrIndeksu();
	string getId();
	string getType();
};

class pracownik :public osoba, Identifiable {
private:
	string nrpracownika;

public:
	void setNrPracownika(string _nrpracownika);
	string getNrPracownika();
	string getId();
	string getType();
};

class ludzie {
private:
	vector <osoba*> spis;
public:
	void dodaj(osoba &add);
	void wypisz();
};

class Identifiable {
public:
	virtual string getType() = 0;
	virtual string getId() = 0;
};

class ListaOsob {

};
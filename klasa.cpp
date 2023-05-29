#include <iostream>
#include "klasa.h"
#include <string>
using namespace std;

void osoba::setName(string _imie) {
	imie = _imie;
}

void osoba::setNaz(string _naz) {
	naz = _naz;
}

int osoba::setPesel(string _pesel) {
	if (_pesel.length() == 11) {
		pesel = _pesel;
		return 0;
	}
	else if (_pesel.length() < 11) {
		return 1;
	}
	else {
		return 2;
	}
}

string osoba::getName() {
	return imie;
}

string osoba::getNaz() {
	return naz;
}

string osoba::getPesel() {
	return pesel;
}

void student::setNrIndeksu(string _nrindeksu) {
	nrindeksu = _nrindeksu;
}

string student::getNrIndeksu() {
	return nrindeksu;
}

void pracownik::setNrPracownika(string _nrpracownika) {
	nrpracownika = _nrpracownika;
}

string pracownik::getNrPracownika() {
	return nrpracownika;
}

void ludzie::dodaj(osoba& add) {
	spis.push_back(add);
}

void ludzie::wypisz() {
	cout << "imie nazwisko pesel\n";
	for (int i = 0; i < spis.size(); i++) {
		cout << spis[i]->getName() << " ";
		cout << spis[i]->getNaz() << " ";
		cout << spis[i]->getPesel() << "\n";
	}
}

string student::getType() {
	cout << "Student";
}

string student::getId() {
	return nrindeksu;
}

string pracownik::getType() {
	cout << "Pracownik";
}

string pracownik::getId() {
	return nrpracownika;
}
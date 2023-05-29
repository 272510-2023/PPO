#include <iostream>
#include <string>
#include "klasa.h"
#include "ui.h"
using namespace std;

void dodajludzia(ludzie& listaLudzi) {
	string imie, naz, pesel;
	int x;
	do {
		cout << "Kogo dodaæ? 1 - student, 2 - pracownik";
		cin >> x;
	} while (x != 1 || x != 2);
	if (x == 1) {
		student *DoDodania = new student();
		cout << "Podaj imiê: ";
		cin >> imie;
		DoDodania->setName(imie);
		cout << "Podaj nazwisko: ";
		cin >> naz;
		DoDodania->setNaz(naz);
		int y = 0;
		do {
			if (y == 1) {
				cout << "za ma³y";
			}
			if (y == 2) {
				cout << "za du¿y";
			}
			cout << "Podaj pesel: ";
			cin >> pesel;
			y = DoDodania->setPesel(pesel);
		} while (y);
		string index;
		cout << "Podaj index: ";
		cin >> index;
		DoDodania->setNrIndeksu(index);
		listaLudzi.dodaj(DoDodania);
	}
	cout << "Podaj imiê: ";
	cin >> imie;
	cout << "Podaj nazwisko: ";
	cin >> naz;
	cout << "Podaj pesel: ";
	cin >> pesel;

}


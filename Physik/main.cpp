#include <iostream>
#include "Berechnungen.h"

using namespace std;

void ReihenschaltungMitBetriebsspannung(float r1, float r2)
{
	cout << "Geben sie bitte jetzt an, wie gross die Betriebsspannung ist: ";
	float uB;
	cin >> uB;
	cout << endl;

	int test = Berechnungen::reihenschaltungBetriebsspannung(r1, r2, uB);
}

void ReihenschaltungMitGesamtstrom(float r1, float r2)
{
	cout << "Geben sie bitte jetzt an, wie gross der Gesamtstrom ist: ";
	float iges;
	cin >> iges;
	cout << endl;

	int test = Berechnungen::reihenschaltungStrom(r1, r2, iges);
}


int main()
{
	cout << "Willkommen bei der Berechnung von eine Reihenschaltung!" << endl;
	cout << "Dieses Projekt befindet sich momentan in eine sehr Frühen Version" << endl;
	cout << "Bitte geben sie ein, wie gross der erste Widerstand ist: ";
	int r1;
	cin >> r1;
	cout << endl;

	cout << "Bitte geben sie jetzt an, wie gross der zweite Widerstand ist: ";
	int r2;
	cin >> r2;
	cout << endl;

	cout << "Wollen sie mit der Betriebsspannung[1] oder mit dem GEsamtstrom[2] rechnen?" << endl;
	cout << "Auswahl(1 oder 2): ";
	int auswahl;
	cin >> auswahl;
	cout << endl;
	
	switch (auswahl)
	{
	case 1:
		ReihenschaltungMitBetriebsspannung(r1, r2);
		break;
	case 2:
		ReihenschaltungMitGesamtstrom(r1, r2);
		break;
	}

	return 0;
}
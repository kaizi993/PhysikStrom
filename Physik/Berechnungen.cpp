#include "Berechnungen.h"

float Berechnungen::spannungBerechnen(float strom, float widerstand)
{
	return strom * widerstand;
}

float Berechnungen::stromBerechnen(float spannung, float widerstand)
{
	return spannung / widerstand;
}

float Berechnungen::widerstandBerechnen(float spannung, float strom)
{
	return spannung / strom;
}

void Berechnungen::reihenschaltung(float r1, float r2, float uB)
{
	float iges;

	float u1;
	float u2;

	float rges;

	//Gesamter Widerstand berechnen
	rges = r1 + r2;

	//Gesamtstrom berechnen
	iges = stromBerechnen(uB, rges);
	
	//Spannung an Widerstand 1
	u1 = spannungBerechnen(iges, r1);

	//Spannung an Widerstand 2
	u2 = spannungBerechnen(iges, r2);
	
	cout << "Reihenschaltung wurde berechnet!" << endl;
	cout << "Widerstand R1: " << r1 << " Ohm" << endl;
	cout << "Widerstand R2: " << r2 << " Ohm" << endl;
	cout << "Betriebsspannung: " << uB << " Volt" << endl;
	cout << "Strom: " << iges << " Ampere" << endl;
	cout << "Strom in Milliampere: " << (iges * 1000) << " Milliampere" << endl;
	cout << "Spannung an R1: " << u1 << " Volt" << endl;
	cout << "Spannung an R2: " << u2 << " Volt" << endl;
	cout << endl;
	cout << "ENDE!" << endl;
}

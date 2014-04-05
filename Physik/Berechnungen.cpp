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
	float i1;
	float i2;
	float iges;

	float u1;
	float u2;


}

#pragma once
#include <iostream>
#include <string>

using namespace std;

static class Berechnungen
{
public:
	static float widerstandBerechnen(float, float);
	static float stromBerechnen(float, float);
	static float spannungBerechnen(float, float);

	static int reihenschaltungBetriebsspannung(float, float, float);
	static int reihenschaltungStrom(float, float, float);
};


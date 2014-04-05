#pragma once
#include <iostream>

using namespace std;

static class Berechnungen
{
public:
	static float widerstandBerechnen(float, float);
	static float stromBerechnen(float, float);
	static float spannungBerechnen(float, float);

	static void reihenschaltung(float, float, float);
};


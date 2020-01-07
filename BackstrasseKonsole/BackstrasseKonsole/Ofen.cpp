#include "Ofen.h"
#include <iostream>
using namespace std;


Ofen::Ofen() : BackraumL{0.0}, OfenT {0.0}
{
}

Ofen::Ofen(float L, float T) : BackraumL {L}, OfenT {T}
{
}


void Ofen::setLaenge(float L)
{
	BackraumL = L;
}

void Ofen::setTemperatur(float T)
{
	OfenT = T;
}

float Ofen::getLaenge()
{
	return BackraumL;
}

float Ofen::getTemperatur()
{
	return OfenT;
}


Ofen::~Ofen()
{
}

#include "Ofen.h"
#include <iostream>
using namespace std;


Ofen::Ofen() : backraumLaenge{0.0}, ofenTemperatur {0.0}
{
}

Ofen::Ofen(float L, float T) : backraumLaenge {L}, ofenTemperatur {T}
{
}


void Ofen::setLaenge(float L)
{
	backraumLaenge = L;
}

void Ofen::setTemperatur(float T)
{
	ofenTemperatur = T;
}

float Ofen::getLaenge()
{
	return backraumLaenge;
}

float Ofen::getTemperatur()
{
	return ofenTemperatur;
}


Ofen::~Ofen()
{
}

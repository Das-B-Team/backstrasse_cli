#include "Ofen.h"
#include <iostream>
using namespace std;


Ofen::Ofen() : backraumLaenge{0.0}, ofenTemperatur {0.0}
{
}

Ofen::Ofen( float T) :  ofenTemperatur {T}
{
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

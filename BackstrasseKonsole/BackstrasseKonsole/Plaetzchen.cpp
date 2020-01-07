#include "Plaetzchen.h"



Plaetzchen::Plaetzchen()
{
}


Plaetzchen::~Plaetzchen()
{
}

void Plaetzchen::setAnzahl(int i)
{
	anzahl = i;
}

void Plaetzchen::setX(float f)
{
	x = f;
}

void Plaetzchen::setY(float f)
{
	x = f;
}

void Plaetzchen::setBackzeit(float f)
{
	backzeit = f;
}

void Plaetzchen::setBacktemperatur(float f)
{
	backtemperatur = f;
}

void Plaetzchen::setForm(string s)
{
	form = s;
}

int Plaetzchen::getAnzahl()
{
	return anzahl;
}

float Plaetzchen::getX()
{
	return x;
}

float Plaetzchen::getY()
{
	return y;
}

float Plaetzchen::getBackzeit()
{
	return backzeit;
}

float Plaetzchen::setBacktemperatur()
{
	return backtemperatur;
}

string Plaetzchen::getForm()
{
	return form;
}

#include "Verzierung.h"



Verzierung::Verzierung()
{
}


Verzierung::~Verzierung()
{
}

void Verzierung::setForm(string s)
{
	form = s;
}

void Verzierung::setNo(int i)
{
	no = i;
}

void Verzierung::setZucker(float f)
{
	zucker = f;
}

void Verzierung::setMehl(float f)
{
	mehl = f;
}

void Verzierung::setNuesse(float f)
{
	nuesse = f;
}

void Verzierung::setFarbe(string s)
{
	farbe = s;
}

string Verzierung::getForm()
{
	return form;
}

int Verzierung::getNo()
{
	return no;
}

float Verzierung::getZucker()
{
	return zucker;
}

float Verzierung::getMehl()
{
	return mehl;
}

float Verzierung::getNuesse()
{
	return nuesse;
}

string Verzierung::getFarbe()
{
	return farbe;
}

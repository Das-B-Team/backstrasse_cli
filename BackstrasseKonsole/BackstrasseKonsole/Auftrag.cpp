#include "Auftrag.h"


Auftrag::Auftrag()
{
	v0 = nullptr;
	v1 = nullptr;
	v2 = nullptr;
}


Auftrag::~Auftrag()
{
}

void Auftrag::setGesamtMehl(float f)
{
	gesamtMehl = f;
}

void Auftrag::setGesamtMilch(float f)
{
	gesamtMilch = f;
}

void Auftrag::setGesamtEier(float f)
{
	gesamtEier = f;
}

void Auftrag::setGesamtBackpulver(float f)
{
	gesamtBackpulver = f;
}

void Auftrag::setGesamtZucker(float f)
{
	gesamtZucker = f;
}

void Auftrag::setGesamtNuesse(float f)
{
	gesamtNuesse = f;
}

void Auftrag::setGesamtKakao(float f)
{
	gesamtKakao = f;
}

void Auftrag::setAnzPlaetzchen(int i)
{
	anzPlaetzchen = i;
}

void Auftrag::setPlaetzchenX(float f)
{
	plaetzchenX = f;
}

void Auftrag::setPlaetzchenY(float f)
{
	plaetzchenY = f;
}

void Auftrag::setBackzeit(float f)
{
	backzeit = f;
}

void Auftrag::setBacktemperatur(float f)
{
	backtemperatur = f;
}

void Auftrag::setPlaetzchenForm(string s)
{
	plaetzchenForm = s;
}

void Auftrag::setAnzBackbleche(int i)
{
	anzBackbleche = i;
}

void Auftrag::setV0(Verzierung* v)
{
	v0 = v;
}

void Auftrag::setV1(Verzierung* v)
{
	v1 = v;
}

void Auftrag::setV2(Verzierung* v)
{
	v2 = v;
}


float Auftrag::getGesamtMehl()
{
	return gesamtMehl;
}

float Auftrag::getGesamtMilch()
{
	return gesamtMilch;
}

float Auftrag::getGesamtEier()
{
	return gesamtEier;
}

float Auftrag::getGesamtBackpulver()
{
	return gesamtBackpulver;
}

float Auftrag::getGesamtZucker()
{
	return gesamtZucker;
}

float Auftrag::getGesamtNuesse()
{
	return gesamtNuesse;
}

float Auftrag::getGesamtKakao()
{
	return gesamtKakao;
}

int Auftrag::getAnzPlaetzchen()
{
	return anzPlaetzchen;
}

float Auftrag::getPlaetzchenX()
{
	return plaetzchenX;
}

float Auftrag::getPlaetzchenY()
{
	return plaetzchenY;
}

float Auftrag::getBackzeit()
{
	return backzeit;
}

float Auftrag::getBacktemperatur()
{
	return backtemperatur;
}

string Auftrag::getPlaetzchenForm()
{
	return plaetzchenForm;
}

int Auftrag::getAnzBackbleche()
{
	return anzBackbleche;
}

Verzierung* Auftrag::getV0()
{
	return v0;
}

Verzierung* Auftrag::getV1()
{
	return v1;
}

Verzierung* Auftrag::getV2()
{
	return v2;
}

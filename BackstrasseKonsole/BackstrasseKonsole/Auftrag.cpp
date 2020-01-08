#include "Auftrag.h"


Auftrag::Auftrag()
{
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
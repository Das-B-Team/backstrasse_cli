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

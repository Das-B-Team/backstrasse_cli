#include "Auftrag.h"



Auftrag::Auftrag()
{
}


Auftrag::~Auftrag()
{
}

void Auftrag::setBedarfMehl(float f)
{
	bedarfMehl = f;
}

void Auftrag::setBedarfMilch(float f)
{
	bedarfMilch = f;
}

void Auftrag::setBedarfEier(float f)
{
	bedarfEier = f;
}

void Auftrag::setBedarfBackpulver(float f)
{
	bedarfBackpulver = f;
}

void Auftrag::setBedarfZucker(float f)
{
	bedarfZucker = f;
}

void Auftrag::setBedarfNuesse(float f)
{
	bedarfNuesse = f;
}

void Auftrag::setBedarfKakao(float f)
{
	bedarfKakao = f;
}

float Auftrag::getBedarfMehl()
{
	return bedarfMehl;
}

float Auftrag::getBedarfMilch()
{
	return bedarfMilch;
}

float Auftrag::getBedarfEier()
{
	return bedarfEier;
}

float Auftrag::getBedarfBackpulver()
{
	return bedarfBackpulver;
}

float Auftrag::getBedarfZucker()
{
	return bedarfZucker;
}

float Auftrag::getBedarfNuesse()
{
	return bedarfNuesse;
}

float Auftrag::getBedarfKakao()
{
	return bedarfKakao;
}

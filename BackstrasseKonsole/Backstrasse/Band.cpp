#include "Band.h"
#include <iostream>
using namespace std;


Band::Band(): 
	bandgsw {0}
{
}


Band::Band(float b) :
	bandgsw {b}
{
}

void Band::setSpeed(float b)
{
	bandgsw = b;
}


float Band::getSpeed()
{
	return bandgsw;
}

Band::~Band()
{
}




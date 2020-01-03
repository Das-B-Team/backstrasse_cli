#include "Band.h"
#include <iostream>
using namespace std;

Band::Band(): 
	bandgsw {0}
{
}

Band::Band(double b) :
	bandgsw {b}
{
}

void Band::setSpeed(double b)
{
	bandgsw = b;
}


double Band::getSpeed()
{
	return bandgsw;
}




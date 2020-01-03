#include "Band.h"
#include <iostream>
using namespace std;

Band::Band(): 
	geschwind {0}
{
}

Band::Band(double b) :
	geschwind {b}
{
}

void Band::setSpeed(double b)
{
	geschwind = b;
}


double Band::getSpeed()
{
	return 	 0;
}




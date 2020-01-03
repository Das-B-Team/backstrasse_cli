#include "Band.h"
#include <iostream>
using namespace std;

Band::Band(): 
	bandgeschwind {0}
{
}

Band::Band(double b) :
	bandgeschwind {b}
{
}

void Band::setSpeed(double b)
{
	bandgeschwind = b;
}


double Band::getSpeed()
{
	return 	 0;
}




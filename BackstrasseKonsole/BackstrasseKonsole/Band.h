#pragma once
#include <iostream>
//- Eine Klasse für Band-//
class Band
{
	double  bandgeschwind;



public:
	Band();
	Band(double);
	void setSpeed(double);
	double getSpeed();


	~Band();
};


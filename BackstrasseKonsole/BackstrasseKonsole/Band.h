#pragma once
#include <iostream>
//- Eine Klasse f�r Band-//
class Band
{
	double  geschwind;



public:
	Band();
	Band(double);
	void setSpeed(double);
	double getSpeed();


	~Band();
};


#pragma once
#include <iostream>
//- Eine Klasse für Band-//
class Band
{
	float  bandgsw;



public:
/**default constructor
*/
	Band();
/**constractor to create a Band object
Parameter: b speed of the belt*/
	Band(float);
/**this functin set the speed of the belt in m/sec
Parameter: b the speed in m/sec
Return: none*/
	void setSpeed(float);
/**this function gives the speed of the belt
	Parameter: none
	Return: speed in m/sec*/
	float getSpeed();


	~Band();
};


#pragma once
#include <iostream>

using namespace std;

class Plaetzchen
{
private:
	int anzahl;
	float x;
	float y;
	float backzeit;
	float backtemperatur;
	string form; // TODO: Replace this with an enum somewhere
public:
	Plaetzchen();
	~Plaetzchen();

	void setAnzahl(int);
	void setX(float);
	void setY(float);
	void setBackzeit(float);
	void setBacktemperatur(float);
	void setForm(string);

	int getAnzahl();
	float getX();
	float getY();
	float getBackzeit();
	float setBacktemperatur();
	string getForm();

};


#pragma once
#include <iostream>

using namespace std;

class Verzierung
{
private:
	string form;
	int no;
	float mehl;
	float zucker;
	float nuesse;
	string farbe;
public:
	Verzierung();
	~Verzierung();
	void setForm(string);
	void setNo(int);
	void setZucker(float);
	void setMehl(float);
	void setNuesse(float);
	void setFarbe(string);

	string getForm();
	int getNo();
	float getZucker();
	float getMehl();
	float getNuesse();
	string getFarbe();
};


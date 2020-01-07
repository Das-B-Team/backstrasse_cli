#pragma once
#include <iostream>
using namespace std;

class Auftrag
{
private:
	float gesamtMehl;
	float gesamtMilch;
	float gesamtEier;
	float gesamtBackpulver;
	float gesamtZucker;
	float gesamtNuesse;
	float gesamtKakao;
	int anzPlaetzchen;
	float plaetzchenX;
	float plaetzchenY;
	float backzeit;
	float backtemperatur;
	string plaetzchenForm;
	int anzBachbleche;

public:
	Auftrag();
	~Auftrag();
	void setGesamtMehl(float);
	void setGesamtMilch(float);
	void setGesamtEier(float);
	void setGesamtBackpulver(float);
	void setGesamtZucker(float);
	void setGesamtNuesse(float);
	void setGesamtKakao(float);

	void setAnzPlaetzchen(int);
	void setPlaetzchenX(float);
	void setPlaetzchenY(float);
	void setBackzeit(float);
	void setBacktemperatur(float);
	void setPlaetzchenForm(string);

	void setAnzBachbleche(int);

	float getGesamtMehl();
	float getGesamtMilch();
	float getGesamtEier();
	float getGesamtBackpulver();
	float getGesamtZucker();
	float getGesamtNuesse();
	float getGesamtKakao();

	int getAnzPlaetzchen();
	float getPlaetzchenX();
	float getPlaetzchenY();
	float getBackzeit();
	float getBacktemperatur();
	string getPlaetzchenForm();

	int getAnzBachbleche();

};


#pragma once

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
	float temperatur;

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
	float getGesamtMehl();
	float getGesamtMilch();
	float getGesamtEier();
	float getGesamtBackpulver();
	float getGesamtZucker();
	float getGesamtNuesse();
	float getGesamtKakao();
};


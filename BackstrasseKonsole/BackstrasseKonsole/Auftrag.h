#pragma once
class Auftrag
{
private:
	float bedarfMehl;
	float bedarfMilch;
	float bedarfEier;
	float bedarfBackpulver;
	float bedarfZucker;
	float bedarfNuesse;
	float bedarfKakao;
public:
	Auftrag();
	~Auftrag();
	void setBedarfMehl(float);
	void setBedarfMilch(float);
	void setBedarfEier(float);
	void setBedarfBackpulver(float);
	void setBedarfZucker(float);
	void setBedarfNuesse(float);
	void setBedarfKakao(float);
	float getBedarfMehl();
	float getBedarfMilch();
	float getBedarfEier();
	float getBedarfBackpulver();
	float getBedarfZucker();
	float getBedarfNuesse();
	float getBedarfKakao();
};


#pragma once
class Vorrat
{
private:
	float mehl;
	float eier;
	float backpulver;
	float zucker;
	float nuesse;
	float kakao;
public:
	Vorrat();
	~Vorrat();
	void setMehl(float);
	void setEier(float);
	void setBackpulver(float);
	void setZucker(float);
	void setNuesse(float);
	void setKakao(float);
};


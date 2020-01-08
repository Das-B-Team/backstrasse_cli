#pragma once
class Ofen
{
	//Ofen Parameter, T=Temperatur und L=Laenge würde deklariert 

	float OfenT;
	float BackraumL;


public:
      
	Ofen();
	Ofen(float, float);
	void setLaenge(float);
        void setTemperatur(float);

	float getLaenge();
	float getTemperatur();
	~Ofen();
};


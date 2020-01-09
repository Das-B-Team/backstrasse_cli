#pragma once
class Ofen
{
	//Ofen Parameter, T=Temperatur und L=Laenge würde deklariert 

	float ofenTemperatur;
	const float backraumLaenge = 10.0; //10m Backraumlaenge
	

public:
      
	Ofen();
	Ofen(float);
	
        void setTemperatur(float);

	float getLaenge();
	float getTemperatur();
	~Ofen();
};


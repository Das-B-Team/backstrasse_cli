#pragma once
class Ofen
{
	//Ofen Parameter, T=Temperatur und L=Laenge würde deklariert 

	float ofenTemperatur;
	const float backraumLaenge = 10.0; //10m Backraumlaenge
	

public:
    /** default consturctor */
	Ofen();
	/**constructor to create a Ofen object
	Parameter: float temperature of the oven*/
	Ofen(float);
	/**function set the temperature of the oven
	Parameter: temperature
	Return: void */
    void setTemperatur(float);
	/**function return the length of the oven
	Parameter: length
	Return: none */
	float getLaenge();
	/**function return the temperature of the oven
	Parameter: none
	Return: temperature */
	float getTemperatur();
	~Ofen();
};


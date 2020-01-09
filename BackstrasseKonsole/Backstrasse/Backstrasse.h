#pragma once
#include<exception>
#include "Auftrag.h"
#include"Datei.h"
#include"Band.h"
#include "Ofen.h"
#include "Exception.h"

class Backstrasse
{
private:
	
	 Ofen* of;
	 Band* ba;
	
	int lager_backbleche;
	float lager_mehl;
	float lager_milch;
	float lager_eier;
	float lager_backpulver;
	float lager_zucker;
	float lager_nuesse;
	float lager_kakao;

// Ofentemperatur 
	
	float ofentemp;

	// Bandgeschwindigkeit in m/s
	float speed;
	

	
	Auftrag* a;
public:
	/** Default constructor*/
	Backstrasse();
	/** Constructor to create a Backstrasse 
	Parameter: Mehl Milch Eier Backpulver Zucker Nuesse Kakao Backblech ofen_temp bandgeswindigkeit*/
	Backstrasse( float Mehl ,float Milch,float Eier,float Backpulver,float Zucker,float Nuesse,float Kakao,int Backblech,  float ofen_temp, float bandgeswindigkeit);
	~Backstrasse();
	/**configLesen read the konfig file and put the data in the Auftrag object
	Parameter: none
	Return: bool true if reading success otherwise false
	*/
	bool configLesen(Auftrag*);
	/**this function start the backen process
	Parameter: none
	Return: none*/
	void backen();
	/**this function check the minimum requirement needed to produce the cookies
	Return: true if enough material is available */
	bool checkBedarf();

	
	//void verzieren();
};


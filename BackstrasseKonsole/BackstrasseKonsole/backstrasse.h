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
	//int anzahlBackblech;
	//int configPfad;
	 Ofen* of;
	 Band* ba;
	// Vorrat* Vr;
	int lager_backbleche;
	float lager_mehl;
	float lager_milch;
	float lager_eier;
	float lager_backpulver;
	float lager_zucker;
	float lager_nuesse;
	float lager_kakao;

// Backtemperatur 
	float backtemp;
	float ofentemp;

	// Bandgeschwindigkeit in m/s
	float speed;
	

	
	Auftrag* a;
public:
	Backstrasse();
	Backstrasse( float Mehl ,float Milch,float Eier,float Backpulver,float Zucker,float Nuesse,float Kakao,int Backblech, float Backtemp, float ofen_temp, float bandgeswindigkeit);
	~Backstrasse();
	/**configLesen read the konfig file and put the data in the Auftrag object
	*/
	bool configLesen();
	//void teigHerstellen();
	//void plaetzchenformeinstellen();
	void backen();
	bool checkBedarf();

	void ofen_configurieren();
	void band_configurieren();
	//void verzieren();
};


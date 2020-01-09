#include "Backstrasse.h"
#include <string>




Backstrasse::Backstrasse()
{
}

Backstrasse::Backstrasse(float Mehl, float Milch, float Eier, float Backpulver, float Zucker, float Nuesse, float Kakao, int Backblech, float Backtemp, float ofen_temp, float bandgeschwindigkeit) :
	lager_mehl{ Mehl }, lager_milch{ Milch }, lager_eier{ Eier }, lager_backpulver{ Backpulver }, lager_zucker{ Zucker }, lager_nuesse{Nuesse}, lager_kakao{Kakao}, lager_backbleche{Backblech}, ofentemp{ofen_temp}, backtemp{Backtemp}, speed{bandgeschwindigkeit}
{
	ba = new Band(bandgeschwindigkeit);
	of = new Ofen(ofen_temp);
	if (!configLesen())
	{
		cout << "Problem reading config" << endl;
	}
}



Backstrasse::~Backstrasse()
{
}

bool Backstrasse::configLesen()
{
	a = new Auftrag();
	Datei d("b_team_config.txt");

	try
	{
		d.dateiLesen(a);
	}
	catch (exception e)
	{
		cout <<  e.what() << endl;
	}

	
	/* "Mehl = " << a->getGesamtMehl() << endl;
	erg "Milch = " << a->getGesamtMilch() << endl;
	erg "Eier = " << a->getGesamtEier() << endl;
	erg "Backpulver = " << a->getGesamtBackpulver() << endl;
	erg "Zucker = " << a->getGesamtZucker() << endl;
	erg "Nuesse = " << a->getGesamtNuesse() << endl;
	erg "Kakao = " << a->getGesamtKakao() << endl;

	erg endl; */

	return true;
}


void Backstrasse::backen()
{
	cout << "Backe " << a->getAnzPlaetzchen() << " bei Temp " << a->getBacktemperatur() <<
		 " in der Groesse " << a->getPlaetzchenX() << " x " << a->getPlaetzchenY() << endl;
	cout << "In der Form " << a->getPlaetzchenForm() << " Backzeit " << a->getBackzeit() << " Backtemperatur " <<
		a->getBacktemperatur() << endl;
	cout << "benutzte Backbleche : " << a->getAnzBackbleche() << endl;
}

bool Backstrasse::checkBedarf()
{
	bool ret = true;
	string erg = "";
	if (lager_mehl < a->getGesamtMehl())
	{

		
		erg = "zuwenig Mehl";

	}
	if (lager_milch < a->getGesamtMilch())
	{
		erg = "zuwenig Milch";

	}
	if (lager_eier < a->getGesamtEier())
	{
		erg = "zuwenig Eier";

	}
	if (lager_backpulver < a->getGesamtBackpulver())
	{
		erg = "zuwenig Backpulver";

	}
	if (lager_zucker < a->getGesamtZucker())
	{
		erg = "zuwenig Zucker";

	}
	if (lager_nuesse < a->getGesamtNuesse())
	{
		erg = "zuwenig Nuesse";
	}

		if (lager_kakao < a->getGesamtKakao())
		{
			erg ="zuwenig Kakao";

		}
		if (lager_backbleche < a->getAnzBackbleche())
		{
			erg = "zuwenig Backbleche";

		}
		//test
		// benoetige Geschwindigkeit
		if ( (of->getLaenge()/(a->getBackzeit()*60)) != speed)
		{
			cout << of->getLaenge() / (a->getBackzeit() * 60) << endl;
			erg = "Geschwindigkeit ist falsch, sollte " + to_string(of->getLaenge()/(a->getBackzeit() * 60) ) + " sein";
				
			
		}

		if (!erg.empty())
		{
			ret = false;
			throw BackstrasseException(erg.c_str());
			
		}
		return ret;
	}




 


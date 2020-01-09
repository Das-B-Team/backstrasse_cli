#include "Backstrasse.h"
#include <string>




Backstrasse::Backstrasse()
{
}

Backstrasse::Backstrasse(float Mehl, float Milch, float Eier, float Backpulver, float Zucker, float Nuesse, float Kakao, int Backblech, float ofen_temp, float bandgeschwindigkeit) :
	lager_mehl{ Mehl }, lager_milch{ Milch }, lager_eier{ Eier }, lager_backpulver{ Backpulver }, lager_zucker{ Zucker }, lager_nuesse{Nuesse}, lager_kakao{Kakao}, lager_backbleche{Backblech}, ofentemp{ofen_temp}, speed{bandgeschwindigkeit}
{
	ba = new Band(bandgeschwindigkeit);
	of = new Ofen(ofen_temp);
	
}



Backstrasse::~Backstrasse()
{
	delete ba;
	delete of;
}

bool Backstrasse::configLesen(Auftrag *auftrag)
{
	a = auftrag;
	

	return true;
}


void Backstrasse::backen()
{
	cout << "Backe " << a->getAnzPlaetzchen() << " Plaetzchen bei Temp " << a->getBacktemperatur() <<
		 " in der Groesse " << a->getPlaetzchenX() << " x " << a->getPlaetzchenY() << endl;
	cout << "In der Form " << a->getPlaetzchenForm() << " Backzeit " << a->getBackzeit() <<
		" Min. " << " Backtemperatur " <<a->getBacktemperatur() << endl;
	cout << "benutzte Backbleche : " << a->getAnzBackbleche() << endl;
	if (a->getV0() != nullptr)
	{
		cout << "Verzierung " << a->getV0()->getForm() << " in Farbe " << a->getV0()->getFarbe() << endl;
	}

	if (a->getV1() != nullptr)
	{
		cout << "Verzierung " << a->getV1()->getForm() << " in Farbe " << a->getV1()->getFarbe() << endl;
	}
	if (a->getV2() != nullptr)
	{
		cout << "Verzierung " << a->getV2()->getForm() << " in Farbe " << a->getV2()->getFarbe() << endl;
	}
}

bool Backstrasse::checkBedarf()
{
	bool ret = true;
	string erg = "";
	if (lager_mehl < a->getGesamtMehl())
	{

		
		erg = "zuwenig Mehl";
		cout << "Mehl mind " << a->getGesamtMehl() << endl;

	}
	if (lager_milch < a->getGesamtMilch())
	{
		erg = "zuwenig Milch";
		cout << "Milch mind. " << a->getGesamtMilch() << endl;

	}
	if (lager_eier < a->getGesamtEier())
	{
		erg = "zuwenig Eier";
		cout << "Eier mind." << a->getGesamtEier() << endl;

	}
	if (lager_backpulver < a->getGesamtBackpulver())
	{
		erg = "zuwenig Backpulver";
		cout << "Backpulver mind. " << a->getGesamtBackpulver() << endl;

	}
	if (lager_zucker < a->getGesamtZucker())
	{
		erg = "zuwenig Zucker";
		cout << "Zucker mind. " << a->getGesamtZucker() << endl;

	}
	if (lager_nuesse < a->getGesamtNuesse())
	{
		erg = "zuwenig Nuesse";
		cout << "Nuesse mind. " << a->getGesamtNuesse() << endl;
	}

		if (lager_kakao < a->getGesamtKakao())
		{
			erg ="zuwenig Kakao";
			cout << "Kakao mind. " << a->getGesamtKakao() << endl;

		}
		if (lager_backbleche < a->getAnzBackbleche())
		{
			erg = "zuwenig Backbleche";
			cout << "Backbleche mind. " << a->getAnzBackbleche() << endl;
		}
		
		// benoetige Geschwindigkeit
		float toleranz = 0.0002222;
		if ( ((of->getLaenge()/(a->getBackzeit()*60.0))-toleranz ) > speed || ((of->getLaenge() / (a->getBackzeit() * 60.0)) + toleranz) < speed)
		{
			
			
			erg = "Geschwindigkeit ist falsch, sollte " + to_string(of->getLaenge()/(a->getBackzeit() * 60) ) + " sein";
				
			
		}
		if (of->getTemperatur() != a->getBacktemperatur())
		{
			erg = "Temperatur des Ofens stimmt nicht ueberein mit der Backtemperatur, sollte " + to_string(a->getBacktemperatur()) + " sein.";
		}

		if (!erg.empty())
		{
			ret = false;
			throw BackstrasseException(erg.c_str());
			
		}
		return ret;
	}




 


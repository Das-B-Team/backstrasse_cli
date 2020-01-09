#include <cstdlib>
#include <iostream>
#include <locale>
#include "Auftrag.h"
#include "Datei.h"
#include "Backstrasse.h"
#include <string>



using namespace std;

int main(int argc, char* argv[])
{
	locale::global(locale(""));
	locale::global(locale(""));
	//cout.imbue(locale(""));
	//cin.imbue(locale(""));

	if (argc < 12)
	{
		cout << "zu wenige Argumente" << endl;
		cout << "Ausfruf: " << argv[0] << " Mehl Milch Eier Backpulver Zucker Nuesse Kakao Backblech Ofentemperatur Backtemp Bandgeschwindigkeit" << endl;
		cout << "Alle Anbgaben in KG, außer die Anzahl der Backbleche Integer" << endl;
		exit(0);
	}
	string arg1 = argv[1]; //Mehl
	string arg2 = argv[2]; //Milch
	string arg3 = argv[3]; //Eier
	string arg4 = argv[4]; // Backpulver
	string arg5 = argv[5]; // Zucker
	string arg6 = argv[6]; // Nuesse
	string arg7 = argv[7]; //Kakao
	string arg8 = argv[8]; // Backblech
	string arg9 = argv[9]; // Ofentemperatur 
	string arg10 = argv[10]; // Backtemp.
	string arg11 = argv[11]; // Bandgeschwindigkeit



	Backstrasse* b = new Backstrasse(strtof(arg1.c_str(), 0), strtof(arg2.c_str(), 0), strtof(arg3.c_str(), 0), strtof(arg4.c_str(), 0),
		strtof(arg5.c_str(), 0), strtof(arg6.c_str(), 0), strtof(arg7.c_str(), 0), stoi(arg8.c_str(), 0), strtof(arg9.c_str(), 0),
		strtof(arg10.c_str(), 0), strtof(arg11.c_str(), 0));


	try
	{
		b->configLesen();

		cout << "Datei-backzeit = " << b->getAuftrag()->getBackzeit() << endl;
		cout << "Datei-backtemperatur = " << b->getAuftrag()->getBacktemperatur() << endl;
		cout << "Ofenlaenge = " << b->getOfen()->getLaenge() << endl;
		cout << "Bandgeschwindigkeit = " << b->getBand()->getSpeed() << endl;

		if (b->getAuftrag()->getV0() == 0)
		{
			cout << "verzierung0 ist null pointer!!!!!" << endl;
		}
		else
		{
			cout << "v0 form = " << b->getAuftrag()->getV0()->getForm() << endl;
			cout << "v0 no = " << b->getAuftrag()->getV0()->getNo() << endl;
			cout << "v0 mehl = " << b->getAuftrag()->getV0()->getMehl() << endl;
			cout << "v0 zucker = " << b->getAuftrag()->getV0()->getZucker() << endl;
			cout << "v0 nuesse = " << b->getAuftrag()->getV0()->getNuesse() << endl;
			cout << "v0 farbe = " << b->getAuftrag()->getV0()->getFarbe() << endl;
		}

		if (b->getAuftrag()->getV1() == 0)
		{
			cout << "verzierung1 ist null pointer!!!!!" << endl;
		}
		else
		{
			cout << "v1 form = " << b->getAuftrag()->getV1()->getForm() << endl;
			cout << "v1 no = " << b->getAuftrag()->getV1()->getNo() << endl;
			cout << "v1 mehl = " << b->getAuftrag()->getV1()->getMehl() << endl;
			cout << "v1 zucker = " << b->getAuftrag()->getV1()->getZucker() << endl;
			cout << "v1 nuesse = " << b->getAuftrag()->getV1()->getNuesse() << endl;
			cout << "v1 farbe = " << b->getAuftrag()->getV1()->getFarbe() << endl;
		}

		if (b->getAuftrag()->getV2() == 0)
		{
			cout << "verzierung2 ist null pointer!!!!!" << endl;
		}
		else
		{
			cout << "v2 form = " << b->getAuftrag()->getV2()->getForm() << endl;
			cout << "v2 no = " << b->getAuftrag()->getV2()->getNo() << endl;
			cout << "v2 mehl = " << b->getAuftrag()->getV2()->getMehl() << endl;
			cout << "v2 zucker = " << b->getAuftrag()->getV2()->getZucker() << endl;
			cout << "v2 nuesse = " << b->getAuftrag()->getV2()->getNuesse() << endl;
			cout << "v2 farbe = " << b->getAuftrag()->getV2()->getFarbe() << endl;
		}


		if (b->checkBedarf())
		{
			b->backen();
		}

	}
	catch (exception e)
	{
		cout << e.what() << endl;
		exit(-1);
		//return 255;
	}
	cout << "Dieser code wird nicht ausgefuert bei exeptions" << endl;

	return 0;
}

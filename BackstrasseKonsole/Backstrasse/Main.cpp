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
	if (argc < 11)
	{
		cout << "zu wenige Argumente" << endl;
		cout << "Ausfruf: " << argv[0] << " Mehl Milch Eier Backpulver Zucker Nuesse Kakao Backblech Ofentemeratur Bandgeschwindigkeit" << endl;
		cout << "Alle Anbgaben in KG, außer die Anzahl der Backbleche Integer"  << endl;
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
	string arg9 = argv[9]; // Backtemp.
	string arg10 = argv[10]; // Bandgeschwindigkeit
	
	
	
	
	//Backstrasse *b = new Backstrasse();
	
	Backstrasse *b = new Backstrasse(strtof(arg1.c_str(),0), strtof(arg2.c_str(), 0), strtof(arg3.c_str(), 0), strtof(arg4.c_str(), 0), 
	                strtof(arg5.c_str(), 0), strtof(arg6.c_str(), 0), strtof(arg7.c_str(), 0), stoi(arg8.c_str(), 0), strtof(arg9.c_str(), 0),
		            strtof(arg10.c_str(),0));
	Datei d("b_team_config.txt");
	Auftrag* a = new Auftrag();
	try
	{
		d.dateiLesen(a);
	}
	catch (exception e)
	{
		cout << "Exception: Fehler beim Lesen der Konfig Datei " << e.what() << endl;
		exit(255);
	}
	try
	{
		b->configLesen(a);
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
	
	return 0;
	
		return 0;
}

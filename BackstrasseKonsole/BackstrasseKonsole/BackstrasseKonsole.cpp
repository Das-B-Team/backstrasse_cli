#include <iostream>
#include <locale>
#include "Auftrag.h"
#include "Datei.h"
#include "Backstrasse.h"
#include "Datei.h"

using namespace std;

int main()
{
	locale::global(locale(""));
	cout.imbue(locale(""));
	cin.imbue(locale(""));

	Auftrag* a = new Auftrag();

	Datei d("b_team_config.txt");

	try
	{
		d.dateiLesen(a);
	}
	catch (exception e)
	{
		cout << "Lesen von Daten aus der Config fehlgeschlagen:" << endl;
		cout << e.what() << endl;
		return -1;
	}

	cout << "Mehl = " << a->getGesamtMehl() << endl;
	cout << "Milch = " << a->getGesamtMilch() << endl;
	cout << "Eier = " << a->getGesamtEier() << endl;
	cout << "Backpulver = " << a->getGesamtBackpulver() << endl;
	cout << "Zucker = " << a->getGesamtZucker() << endl;
	cout << "Nuesse = " << a->getGesamtNuesse() << endl;
	cout << "Kakao = " << a->getGesamtKakao() << endl;

	cout << endl;

	cout << "anzahlPlaetchen = " << a->getAnzPlaetzchen() << endl;
	cout << "plaetzchenX = " << a->getPlaetzchenX() << endl;
	cout << "plaetzchenY = " << a->getPlaetzchenY() << endl;
	cout << "backzeit = " << a->getBackzeit() << endl;
	cout << "backtemperatur = " << a->getBacktemperatur() << endl;
	cout << "form = " << a->getPlaetzchenForm() << endl;

	cout << endl;

	cout << "anzBackbleche = " << a->getAnzBackbleche() << endl;

	//  Datei* my_datei = new Datei("b_team_config.txt");
	  // my_datei->dateiLesen();
	  // my_datei->berechneZeilen();

	return 0;
}

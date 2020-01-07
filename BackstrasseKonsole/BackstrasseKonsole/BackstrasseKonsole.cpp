#include <iostream>
#include <locale>
#include "Auftrag.h"
#include "DateiHandel.h"

using namespace std;

int main()
{
	locale::global(locale(""));  // f�r deutsche Umlaute
	cout.imbue(locale(""));  // f�r das Komma
	cin.imbue(locale(""));  // f�r das Komma

	Auftrag* a = new Auftrag();

	DateiHandel d("b_team_config.txt");

	try
	{
		d.dateiLesen(a);
	}
	catch (exception e)
	{
		cout << e.what() << endl;
	}


	//cout << "Mehl = " << a->getGesamtMehl() << endl;
	//cout << "Milch = " << a->getGesamtMilch() << endl;
	//cout << "Eier = " << a->getGesamtEier() << endl;
	//cout << "Backpulver = " << a->getGesamtBackpulver() << endl;
	//cout << "Zucker = " << a->getGesamtZucker() << endl;
	//cout << "Nuesse = " << a->getGesamtNuesse() << endl;
	//cout << "Kakao = " << a->getGesamtKakao() << endl;

	//cout << endl;

    return 0; 
}
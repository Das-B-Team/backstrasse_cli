#include <iostream>
#include <locale>
#include "Auftrag.h"
#include "DateiHandel.h"

using namespace std;

int main()
{
	locale::global(locale(""));  // für deutsche Umlaute
	cout.imbue(locale(""));  // für das Komma
	cin.imbue(locale(""));  // für das Komma

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
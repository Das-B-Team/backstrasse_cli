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

	d.dateiLesen(a);

	cout << "Mehl = " << a->getBedarfMehl() << endl;
	cout << "Milch = " << a->getBedarfMilch() << endl;
	cout << "Eier = " << a->getBedarfEier() << endl;
	cout << "Backpulver = " << a->getBedarfBackpulver() << endl;
	cout << "Zucker = " << a->getBedarfZucker() << endl;
	cout << "Nuesse = " << a->getBedarfNuesse() << endl;
	cout << "Kakao = " << a->getBedarfKakao() << endl;

    return 0; 
}
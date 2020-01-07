#include <iostream>

#include "Auftrag.h"
#include "DateiHandel.h"


using namespace std;

int main()
{
	Auftrag* a = new Auftrag();

	DateiHandel d("b_team_config.txt");

	d.dateiLesen(a);

    return 0; 
}
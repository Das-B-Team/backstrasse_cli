#include <iostream>
#include "Backstrasse.h"
#include "Datei.h"

using namespace std;

int main()
{
    
    Datei* my_datei = new Datei("b_team_config.txt");
	my_datei->dateiLesen();
	my_datei->berechneZeilen();
    
    return 0; 
}

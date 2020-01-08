#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include "Auftrag.h"

using namespace std;

class Datei
{
private:
	string pfad;
	fstream* f;
	void Dateioffenpruefen(fstream* );
public:
	Datei();
	Datei(string);
	void setPfad(string);
	string getPfad();
	void dateiLesen(Auftrag* );
	~Datei();
};
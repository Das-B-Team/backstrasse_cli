#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include "Auftrag.h"

using namespace std;

class DateiHandel
{
private:
	string pfad;
	fstream* f;
	void Dateioffenpruefen(fstream* );
public:
	DateiHandel();
	DateiHandel(string);
	void setPfad(string);
	string getPfad();
	void dateiLesen(Auftrag* );
	~DateiHandel();
};
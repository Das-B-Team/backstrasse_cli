#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include "Auftrag.h"

using namespace std;

/// Klasse Datei
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
	/// Liest Plaetzchen-Auftrag Daten aus einer Textdatei und uebertraegt sie auf eine Instanz von Auftrag
	void dateiLesen(Auftrag* );
	~Datei();
};
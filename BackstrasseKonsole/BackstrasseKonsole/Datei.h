#pragma once
#include<iostream>
#include<fstream>
using namespace std;
class Datei
{
private:
	string pfad;
	fstream* f;
	char str[260];
	bool Dateioffenpruefen();

public:
	Datei();
	Datei(string);

	void dateiLesen();
	void berechneZeilen();
	~Datei();
};


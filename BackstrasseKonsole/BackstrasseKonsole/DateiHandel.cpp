#include "DateiHandel.h"



void DateiHandel::Dateioffenpruefen(fstream* f)
{
	if (!f->is_open())
	{
		throw exception("Datei nicht zu oeffnen!...");
	}
}

DateiHandel::DateiHandel() : pfad{ "" }, f{ f = new fstream() }
{
}

DateiHandel::DateiHandel(string p) : pfad{ p }, f{ f = new fstream() }
{
}

void DateiHandel::setPfad(string p)
{
	pfad = p;
}

string DateiHandel::getPfad()
{
	return pfad;
}

void DateiHandel::dateiLesen(Auftrag * a)
{
	string st;
	f->open(pfad, ios::in);
	Dateioffenpruefen(f);

	//regex re("\\|([\d]+)\\|([a-zA-Z]+)\\|([a-zA-Z]+)\\|([0-9]+)\\|([a-zA-Z]+)\\|([a-zA-Z\\.]+)\\|([0-9])+\\|?([a-zA-Z@_\\-\\.]+)?");
	regex re("\\|([\d]+)\\|");


	smatch match;

	while (getline(*f, st))
	{
		regex_search(st, match, re);
		cout << match.size() << endl;
		if (match.size == 1)
		{

		}
		/*
		// change following line to correct match condition (7 pipe-separated
		if (match.str(1) == to_string(kd->getKnr()))
		{
			a->setBedarfMehl(stof(match.str(1)));
			a->setBedarfMilch(stof(match.str(2)));
			a->setBedarfEier(stof(match.str(3)));
			a->setBedarfBackpulver(stof(match.str(4)));
			a->setBedarfZucker(stof(match.str(5)));
			a->setBedarfNuesse(stof(match.str(6)));
			a->setBedarfKakao(stof(match.str(7)));
			break;
		}
		*/
	}

	f->close();
}


DateiHandel::~DateiHandel()
{
	delete(f);
}

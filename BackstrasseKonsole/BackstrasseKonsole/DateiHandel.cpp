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

	// Regex fuer den Gesamtbedarf
	regex reGes("\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|");

	// Regex fuer die Plaetzchen-Daten
	// regex rePl("\\|(Plaetzchen)\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|([\\w]+)\\|");
	
	smatch match;

	while (getline(*f, st))
	{
		regex_search(st, match, reGes);
		if (!match.empty())
		{
			a->setGesamtMehl(stof(match.str(1)));
			a->setGesamtMilch(stof(match.str(2)));
			a->setGesamtEier(stof(match.str(3)));
			a->setGesamtBackpulver(stof(match.str(4)));
			a->setGesamtZucker(stof(match.str(5)));
			a->setGesamtNuesse(stof(match.str(6)));
			a->setGesamtKakao(stof(match.str(7)));
		}

		//regex_search(st, match, rePl);
		//if (!match.empty())
		//{
		//}
	}

	f->close();
}


DateiHandel::~DateiHandel()
{
	delete(f);
}

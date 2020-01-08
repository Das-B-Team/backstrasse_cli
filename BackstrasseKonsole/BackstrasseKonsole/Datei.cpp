#include "Datei.h"



void Datei::Dateioffenpruefen(fstream* f)
{
	if (!f->is_open())
	{
		throw exception("Datei nicht zu oeffnen!...");
	}
}

Datei::Datei() : pfad{ "" }, f{ f = new fstream() }
{
}

Datei::Datei(string p) : pfad{ p }, f{ f = new fstream() }
{
}

void Datei::setPfad(string p)
{
	pfad = p;
}

string Datei::getPfad()
{
	return pfad;
}

void Datei::dateiLesen(Auftrag * a)
{
	string st;
	f->open(pfad, ios::in);
	Dateioffenpruefen(f);

	int reGesMatches{ 0 };
	int rePlMatches{ 0 };
	int reBbMatches{ 0 };

	// Regex fuer den Gesamtbedarf
	regex reGes("\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|");
	// Regex fuer die Plaetzchen-Daten
	regex rePl("\\|Plaetzchen\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|([\\w]+)\\|");
	// Regex fuer die Backblech-Daten
	regex reBb("\\|Backblech\\|([\\d,.E-]+)\\|");

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
			reGesMatches += 1;
			continue;
		}

		regex_search(st, match, rePl);
		if (!match.empty())
		{
			a->setAnzPlaetzchen(stoi(match.str(1)));
			a->setPlaetzchenX(stof(match.str(2)));
			a->setPlaetzchenY(stof(match.str(3)));
			a->setBackzeit(stof(match.str(4)));
			a->setBacktemperatur(stof(match.str(5)));
			a->setPlaetzchenForm(match.str(6));
			rePlMatches += 1;
			continue;
		}

		regex_search(st, match, reBb);
		if (!match.empty())
		{
			a->setAnzBachbleche(stoi(match.str(1)));
			reBbMatches += 1;
			continue;
		}

	}

	if (reGesMatches < 1)
	{
		throw exception("Gesamtbedarf-Zeile in der Configdatei wurde nicht gefunden!");
	}
	if (rePlMatches < 1)
	{
		throw exception("Plaetzchen-Zeile in der Configdatei wurde nicht gefunden!");
	}
	if (reBbMatches < 1)
	{
		throw exception("Bachbleche-Zeile in der Configdatei wurde nicht gefunden!");
	}


	f->close();
}


Datei::~Datei()
{
	delete(f);
}

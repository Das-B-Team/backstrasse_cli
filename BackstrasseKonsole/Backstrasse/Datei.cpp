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
	regex reGes("\\|Gesamt\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|");
	// Regex fuer die Plaetzchen-Daten
	regex rePl("\\|Plaetzchen\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|([\\w]+)\\|");
	// Regex fuer die Backblech-Daten
	regex reBb("\\|Backblech\\|([\\d,.E-]+)\\|");
	// Regex fuer die Verzierung
	regex reVe("\\|Verzierung\\|([\\w]+)\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|([\\d,.E-]+)\\|([\\w]+)\\|");

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
			a->setAnzBackbleche(stoi(match.str(1)));
			reBbMatches += 1;
			continue;
		}

		regex_search(st, match, reVe);
		if (!match.empty())
		{
			if (stoi(match.str(2)) == 0)
			{
				a->setV0((new Verzierung()));
				a->getV0()->setForm(match.str(1));
				a->getV0()->setNo(stoi(match.str(2)));
				a->getV0()->setMehl(stof(match.str(3)));
				a->getV0()->setZucker(stof(match.str(4)));
				a->getV0()->setNuesse(stof(match.str(5)));
				a->getV0()->setFarbe(match.str(6));
			}
			else if (stoi(match.str(2)) == 1)
			{
				a->setV1((new Verzierung()));
				a->getV1()->setForm(match.str(1));
				a->getV1()->setNo(stoi(match.str(2)));
				a->getV1()->setMehl(stof(match.str(3)));
				a->getV1()->setZucker(stof(match.str(4)));
				a->getV1()->setNuesse(stof(match.str(5)));
				a->getV1()->setFarbe(match.str(6));
			}
			else if (stoi(match.str(2)) == 2)
			{
				a->setV2((new Verzierung()));
				a->getV2()->setForm(match.str(1));
				a->getV2()->setNo(stoi(match.str(2)));
				a->getV2()->setMehl(stof(match.str(3)));
				a->getV2()->setZucker(stof(match.str(4)));
				a->getV2()->setNuesse(stof(match.str(5)));
				a->getV2()->setFarbe(match.str(6));
			}
		}

	}

	string errmsg{ "" };
	if (reGesMatches < 1)
	{
		errmsg += "Gesamtbedarf\n";
	}
	if (rePlMatches < 1)
	{
		errmsg += "Plaetzchen\n";
	}
	if (reBbMatches < 1)
	{
		errmsg += "Backbleche\n";
	}
	if (!errmsg.empty())
	{
		errmsg = "Folgende notwendige Zeile(n) wurde(n) in der Configdatei nicht gefunden:\n" + errmsg;
		throw exception(errmsg.c_str());
	}


	f->close();
}


Datei::~Datei()
{
	delete(f);
}

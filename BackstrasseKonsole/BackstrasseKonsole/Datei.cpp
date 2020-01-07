#include "Datei.h"


Datei::Datei()
{
}

Datei::Datei(string dateiname) : pfad{ dateiname }, f{ new fstream }
{

}


bool Datei::Dateioffenpruefen()
{
	f->open(pfad);
	if (f->is_open())
	{
		return true;
	}
	return false;
	f->close();
}


void Datei ::dateiLesen()
{
	if (Dateioffenpruefen())
	{
		
			while (f->getline(str, 260))
			{
				cout << str << endl;
			}
	}

f->close();
}

void Datei::berechneZeilen()
{
	f->open(pfad);

	if (!f->good())
	{
		cout << "error" << endl;
	}


	int anzahlZeichen{ 0 };
	int anzahlZeilen{ 1 };
	char zeichen;
	char vorherigesZeichen{ '\0' };

	while (f->get(zeichen))
	{
		if (zeichen == '\n')
		{
			anzahlZeilen++;
		}
		else
		{
			anzahlZeichen++;
		}

		
	}

	cout << "Anzahl der Zeichen: " << anzahlZeichen << endl;
	cout << "Anzahl der Zeilen: " << anzahlZeilen << endl;
}



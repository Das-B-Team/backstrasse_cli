#include <iostream>

using namespace std;


class BackstrasseException :public exception
{
public:
	BackstrasseException(const char* e) : exception(e) {}

};



class Backstrasseexception_T : public BackstrasseException
{
public:
	Backstrasseexception_T(const char* e) : BackstrasseException(e) {}

};


class Backstrasseexception_L : public BackstrasseException
{
public:
	Backstrasseexception_L(const char* e) : BackstrasseException(e) {}

};


/*
int main()

{
	int i;
	int T;
	int L;




	try
	{
		cout << "Ofen temperatur eingabe" << endl;
		cin >> T;

		if (T <= 0 | T >= 100)
		{
			throw Backstrasseexception_T(".T. is impossible");

		}
	}
	catch (Backstrasseexception_T e)
	{
		cout << e.what() << endl;
		cout << "Bereichsverletzung für Temperatur..." << endl;
	}


	try

	{

		cout << "Backraumlange" << endl;
		cin >> L;

		if ((L = 0 && L <= 1000) | (L = 3000 && L <= 4000))
		{
			throw Backstrasseexception_L(".L. is  out of Oven configuration");
		}

	}

	catch (Backstrasseexception_L e)
	{
		cout << e.what() << endl;
		cout << " Oven out of configuration" << endl;
	}

}
*/












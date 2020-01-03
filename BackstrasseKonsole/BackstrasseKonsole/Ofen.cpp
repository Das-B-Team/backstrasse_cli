#include "Ofen.h"
#include <iostream>
using namespace std;


Ofen::Ofen() : OfenT {0.0}, BackraumL{0.0}
{
}

Ofen::Ofen(float T, float L) : OfenT {T}, BackraumL {L}
{
}

Ofen::~Ofen()
{
}

#include "Wilk.h"


char Wilk::getSymbol()
{
	return 'W';
}


Wilk::Wilk(Swiat* swiat, int pozycjaX, int pozycjaY) : Zwierze(swiat)
{
	sila = 9;
	inicjatywa = 5;
	gatunek = 'wilk';
	setPozycja(pozycjaX, pozycjaY);
}


Wilk::~Wilk()
{
}

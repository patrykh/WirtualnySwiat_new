#include "Jez.h"

char Jez::getSymbol()
{
	return 'J';
}

Jez::Jez(Swiat* swiat, int pozycjaX, int pozycjaY) : Zwierze(swiat)
{
	sila = 2;
	inicjatywa = 3;
	gatunek = 'jez';
	setPozycja(pozycjaX, pozycjaY);
}

Jez::~Jez()
{
}

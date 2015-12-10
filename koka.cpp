#include "koka.h"


char Koka::getSymbol()
{
	return 'K';
}

Koka::Koka(Swiat* swiat, int pozycjaX, int pozycjaY) : Roslina(swiat)
{
	sila = 0;
	gatunek = 'Koks';
	setPozycja(pozycjaX, pozycjaY);
}


Koka::~Koka()
{
}

#include "Trawa.h"

char Trawa::getSymbol()
{
	return '#';
}

Trawa::Trawa(Swiat* swiat, int pozycjaX, int pozycjaY) : Roslina(swiat)
{
	sila = 0;
	gatunek = 'traw';
	setPozycja(pozycjaX, pozycjaY);
}

Trawa::~Trawa()
{
}

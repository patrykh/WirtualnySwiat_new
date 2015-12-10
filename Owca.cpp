#include "Owca.h"


char Owca::getSymbol()
{
	return 'O';
}

Owca::Owca(Swiat* swiat, int pozycjaX, int pozycjaY) : Zwierze(swiat)
{
	sila = 4;
	inicjatywa = 4;
	gatunek = 'Owca';
	setPozycja(pozycjaX, pozycjaY);
}


Owca::~Owca()
{
}

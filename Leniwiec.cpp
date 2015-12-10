#include "Leniwiec.h"

char Leniwiec::getSymbol()
{
	return '_';
}

void Leniwiec::akcja(int wymiarX, int wymiarY)	
{

	if (this->blokada == true)
	{
		Zwierze::akcja(wymiarX, wymiarY);
		blokada = false;
	} else
	{
		blokada = true;
	}
}

Leniwiec::Leniwiec(Swiat* swiat, int pozycjaX, int pozycjaY) : Zwierze(swiat)
{
	sila = 2;
	inicjatywa = 1;
	gatunek = 'Leñ';
	setPozycja(pozycjaX, pozycjaY);
}


Leniwiec::~Leniwiec()
{
}

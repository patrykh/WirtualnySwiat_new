#include "Lis.h"

void Lis::akcja(int wymiarX, int wymiarY)
{
	swiat->czyKolizja(polozenieX, polozenieY);
}

char Lis::getSymbol()
{
	return 'L';
}

Lis::Lis(Swiat* swiat, int pozycjaX, int pozycjaY) : Zwierze(swiat)
{
	sila = 3;
	inicjatywa = 7;
	gatunek = 'Lis';
	setPozycja(pozycjaX, pozycjaY);
}


Lis::~Lis()
{
}

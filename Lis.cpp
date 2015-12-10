#include "Lis.h"

void Lis::akcja(int wymiarX, int wymiarY)
{

	this->pozycjaNastepnegoRuchu(wymiarX, wymiarY);
	if (this->getSila() > swiat->czyKolizja(newPolozenieX, newPolozenieY)->getSila())
	{

		Zwierze::akcja(wymiarX, wymiarY);
	} else
	{
		std::cout << "Lis to cwaniak ;)";
	}

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

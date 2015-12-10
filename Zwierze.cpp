#include "Zwierze.h"
#include "Swiat.h"
#include <iostream>


void Zwierze::akcja(int wymiarX, int wymiarY)
{
	std::cout << "akcja1";
	const int ruchy[2] = { -1, 1 }; 
	const char kierunek[2] = { 'x', 'y' };
	Organizm* przeciwnik; 
	int index = 0;
	int ruch = 0;

	bool czyRuszyl = false;
	int proba = 1;

	//polozenie organizmu
	int _polozenieX = polozenieX; 
	int	_polozenieY = polozenieY;
	//int wymiarX = swiat->getRozmiarX();
	std::cout << "akcja2";
	//int wymiarY = swiat->getRozmiarY();
	std::cout << "akcja3";

	index = (rand() % 2);
	ruch = ruchy[index];
	std::cout << "akcja4";
	while (!czyRuszyl && proba <= 8) {
		std::cout << "akcja5";
		switch (kierunek[index])
		{
		case 'x':
			std::cout << "akcja6";
			if (_polozenieX + ruch < wymiarX && _polozenieX + ruch >= 0)
			{
				std::cout << "akcja7";
				if (this->swiat->czyKolizja(_polozenieX + ruch, _polozenieY) == nullptr)
				{
					std::cout << "akcja8";
					this->polozenieX += ruch;
					std::cout << "akcja9";
					czyRuszyl = true;

				} else
				{
					przeciwnik = this->swiat->czyKolizja(_polozenieX + ruch, _polozenieY);
					kolizja(przeciwnik);
				}
				
			}
			break;
		case 'y':
			std::cout << "akcja6";
			if (_polozenieY + ruch < wymiarY && _polozenieY + ruch >= 0)
			{
				std::cout << "akcja7";
				if (this->swiat->czyKolizja(_polozenieX, _polozenieY + ruch) == nullptr)
				{
					std::cout << "akcja8";
					this->polozenieY += ruch;
					std::cout << "akcja9";
					czyRuszyl = true;
				}
				else
				{
					przeciwnik = this->swiat->czyKolizja(_polozenieX, _polozenieY + ruch);
					kolizja(przeciwnik);
				}
				
			}
			break;
		}
		czasZycia++;
		proba++;
	}
}

bool Zwierze::kolizja(Organizm* przeciwnik)
{
	std::cout << "kolizja_start";
	if (this->getSila() > przeciwnik->getSila())
	{
		std::cout << "kolizja_if";
		//usuñ przeciwnika 
		// Jak usun¹æ przeciwnika?
		przeciwnik->gin();
	}
	else if(this->getSymbol() == przeciwnik->getSymbol())
	{

	}
	else
	{
		std::cout << "kolizja_else";
		this->gin();
	}
	return false;
}

Zwierze::Zwierze(Swiat* swiat) : Organizm(swiat)
{

}

Zwierze::~Zwierze()
{

}

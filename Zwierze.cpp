#include "Zwierze.h"
#include "Swiat.h"
#include <iostream>


void Zwierze::akcja(int wymiarX, int wymiarY)
{
	
	std::cout << " akcja_start ";
	Organizm* przeciwnik; 
	bool czyRuszyl = false;
	int proba = 1;
	int _polozenieX;
	int	_polozenieY;
	while (!czyRuszyl && proba <= 8) {
		std::cout << " akcja_while ";
		// zaznaczone poprawiæ
		this->polozenieX == newPolozenieX;
		this->polozenieY == newPolozenieY;

		
		_polozenieX = getNewPolozenieX();
		std::cout << _polozenieX;
		_polozenieY = getNewPolozenieY();

		std::cout << _polozenieY;
		// dot¹d poprawki

		if (this->swiat->czyKolizja(_polozenieX, _polozenieY) == nullptr)
		{
			std::cout << "akcja_while_if ";
			this->polozenieX = _polozenieX;
			this->polozenieY = _polozenieY;
			czyRuszyl = true;
		}
		else if (this->swiat->czyKolizja(_polozenieX, _polozenieY) != nullptr)
		{
			std::cout << "akcja_while_else ";
			przeciwnik = this->swiat->czyKolizja(_polozenieX, _polozenieY);
			kolizja(przeciwnik);
		}
		else
		{
			this->pozycjaNastepnegoRuchu(wymiarX, wymiarY);
		}
		proba++;
		std::cout << "akcja_while_koniec ";
	}
	czasZycia++;
	std::cout << " akcja_stop ";
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

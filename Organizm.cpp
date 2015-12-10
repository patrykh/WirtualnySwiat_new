#include "Organizm.h"

void Organizm::gin()
{
	czyZyje = false;

}

void Organizm::setPozycja(int x, int y)
{
	this->polozenieX = x;
	this->polozenieY = y;
}

void Organizm::setNewPozycjaXY(int _newPozycjaX, int _newPozycjaY)
{
	this->newPolozenieX = _newPozycjaX;
	this->newPolozenieY = _newPozycjaY;
}

//Organizm* Organizm::czyKolizja(int polozenieX, int polozenieY)
//{
//	std::cout << "czyKolizja_start";
//	//for (auto organizm : swiat->Organizmy)   // organizm*
//	//{
//	//	std::cout << "czyKolizja_for";
//	//	if (organizm->getCzyZyje()
//	//		&& organizm->getPozX() == polozenieX
//	//		&& organizm->getPozY() == polozenieY)
//	//	{
//	//		std::cout << "czyKolizja_ret_org";
//	//		return organizm;
//	//	}
//	//}
//	std::cout << "czyKolizja_ret_nullptr";
//	return nullptr;
//
//	//Pokombinowaæ??
//	//Organizm* organizm;
//
//	//if (polozenieX == organizm->getPozX() && polozenieX == organizm->getPozX())
//	//{
//	//	return organizm;
//	//}
//	//return nullptr; // Gdy nie ma organizmu
//}


void Organizm::pozycjaNastepnegoRuchu(int wymiarX, int wymiarY)
{
	const int ruchy[2] = { -1, 1 };
	const char kierunek[2] = { 'x', 'y' };
	int index = 0;
	int ruch = 0;
	index = (rand() % 2);
	ruch = ruchy[index];
	int proba = 0; //zmieniæ na bool -> true gdy sie poruszyl, fals gduy jeszcze nie
	std::cout << " next_ruch_start  ";
	switch (kierunek[index])
	{
	case 'x':
		std::cout << " next_ruch_x ";
		if (polozenieX + ruch < wymiarX && polozenieX + ruch >= 0)
		{
			std::cout << " next_ruch_x_if ";
			setNewPozycjaXY(polozenieX + ruch, polozenieY);
		}
		break;
	case 'y':
		std::cout << " next_ruch_y ";
		if (polozenieY + ruch < wymiarY && polozenieY + ruch >= 0)
		{
			std::cout << " next_ruch_y_if ";
			setNewPozycjaXY(polozenieX + ruch, polozenieY);
		}
		break;
	}
	std::cout << " next_ruch_stop ";
}

Organizm::Organizm(Swiat* swiat)
{
	this->swiat = swiat;
}


Organizm::~Organizm()
{
}

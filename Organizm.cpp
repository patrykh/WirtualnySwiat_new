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



Organizm::Organizm(Swiat* swiat)
{
	this->swiat = swiat;
}


Organizm::~Organizm()
{
}

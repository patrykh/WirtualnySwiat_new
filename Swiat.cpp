#include "Swiat.h"
#include <vector>
#include <iostream>
#include "Wilk.h"
#include "Owca.h"
#include "Leniwiec.h"
#include "Lis.h"

using namespace std;

void Swiat::SetRozmiar(int x, int y)
{
	// granice swiata
	this->x = x;
	this->y = y;
}

int Swiat::getRozmiarX()
{
	cout << "getRozmiarX";
	return this->x;
}

int Swiat::getRozmiarY()
{
	cout << "getRozmiarY";
	return this->y;
}

void Swiat::dodajOrganizmy(Organizm* nowyOrganizm)
{
	this->Organizmy.push_back(nowyOrganizm);
}

void Swiat::listaOrganizmow()
{
	this->dodajOrganizmy(new Lis(this, 10, 6));
	this->dodajOrganizmy(new Wilk(this, 9, 6));

	/*this->dodajOrganizmy(new Owca(this, 2, 5));
	this->dodajOrganizmy(new Wilk(this, 8, 9));
	this->dodajOrganizmy(new Wilk(this, 15, 9));
	this->dodajOrganizmy(new Owca(this, 10, 6));
	this->dodajOrganizmy(new Owca(this, 2, 16));
	this->dodajOrganizmy(new Wilk(this, 8, 4));*/
}

void Swiat::wykonajTure()//int numerTury)
{
	// TODO metoda sortowanie
	int wymiarX = this->getRozmiarX();
	int wymiarY = this->getRozmiarY();

	// pêtla po liœcie organizmów
	// if czy zyje -> akcja() else -> brak
	// usun martwe organizmy
	cout << "wykonajTure";
	this->sortujOrganizmy();
	//auto aktualneOrganizmy = this->Organizmy;
	for (auto organizm : Organizmy)
	{
		cout << "wykonajTure_for";
		if (organizm->getCzyZyje())
		{
			cout << "wykonajTure_if";
			organizm->pozycjaNastepnegoRuchu(wymiarX, wymiarY);
			organizm->akcja(wymiarX, wymiarY);
		}
	}
	cout << "wykonajTure koniec";
	this->usunMartweOrganizmy();
	numerTury++;
}

void Swiat::sortujOrganizmy()
{
	this->Organizmy.sort([](Organizm* lewy, Organizm* prawy)
	{
		if (lewy->getInicjatywa() > prawy->getInicjatywa())
		{
			return true;
		}
		else if (lewy->getInicjatywa() == prawy->getInicjatywa())
		{
			if (lewy->getWiek() > prawy->getWiek())
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	});
}

void Swiat::usunMartweOrganizmy()
{
	this->Organizmy.remove_if([](Organizm* organizm)
	{
		if (organizm->getCzyZyje() == false)
		{
			delete organizm; // TODO czy delete jest potrzebne??
			return true;
		}
		else
		{
			return false;
		}
	});
}

Organizm* Swiat::czyKolizja(int polozenieX, int polozenieY)
{
	std::cout << "czyKolizja_start";
	for (auto organizm : this->Organizmy)   // organizm*
	{
		std::cout << "czyKolizja_for";
		if (organizm->getCzyZyje()
			&& organizm->getPozX() == polozenieX
			&& organizm->getPozY() == polozenieY)
		{
			std::cout << "czyKolizja_ret_org";
			return organizm;
		}
	}
	std::cout << "czyKolizja_ret_nullptr";
	return nullptr;
}


void Swiat::mapa()
{
	vector< vector<char> > mapa(20, vector<char>(20, '+'));

	/*for (size_t i = 0; i < mapa.size(); ++i) {
	for (size_t j = 0; j < mapa.at(i).size(); ++j)
	mapa.at(i).at(j) = '2';
	}*/

	//Wypelnienie organizmami

	for (auto organizm : this->Organizmy)
	{
		mapa.at(organizm->getPozX()).at(organizm->getPozY()) = organizm->getSymbol();
	}

	//Wyswietlenie
	cout << endl;
	for (size_t i = 0; i < mapa.size(); ++i) {
		for (size_t j = 0; j < mapa.at(i).size(); ++j)
			cout << mapa.at(i).at(j) << ' ';

		cout << endl;
	}
	cout << endl;
}

//Organizm* Swiat::czyKolizja(int polozenieX, int polozenieY)
//{
//	std::cout << "czyKolizja_start";
//	for (auto organizm : this->Organizmy)   // organizm*
//	{
//		std::cout << "czyKolizja_for";
//		if (organizm->getCzyZyje() 
//			&& organizm->getPozX() == polozenieX 
//			&& organizm->getPozY() == polozenieY)
//		{
//			std::cout << "czyKolizja_ret_org";
//			return organizm;
//		}
//	}
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

Swiat::Swiat()
{
	this->listaOrganizmow();
	this->mapa();
}

Swiat::Swiat(int x, int y)
{
	vector< vector<char> > mapa(x, vector<char>(y, '+'));
	this->listaOrganizmow();
	for (auto organizm : this->Organizmy)
	{
		mapa.at(organizm->getPozX()).at(organizm->getPozY()) = organizm->getSymbol();
	}
	//Wyswietlenie
	for (size_t i = 0; i < mapa.size(); ++i) {
		for (size_t j = 0; j < mapa.at(i).size(); ++j)
			cout << mapa.at(i).at(j) << ' ';

		cout << endl;
	}
}

Swiat::~Swiat()
{

}

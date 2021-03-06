#pragma once
#include "Swiat.h"
#include <iostream>
class Swiat;
class Organizm
{
protected:
	int sila = 0;
	int inicjatywa = 0;
	int czasZycia = 1;
	bool czyZyje = true;
	int polozenieX = 0, polozenieY = 0; // po�o�enie
	int newPolozenieX = 0, newPolozenieY = 0;
	std::string gatunek;
	Swiat* swiat = nullptr;
public:
	//polozenie(x,y)
	//referencja do swiata
	virtual void akcja(int wymiarX, int wymiarY) = 0;
	virtual bool kolizja(Organizm* organizm) = 0;
	virtual char getSymbol() = 0;

	void gin();


	//Pozycja
	void setPozycja(int x, int y);
	void setNewPozycjaXY(int _newPozycjaX, int _newPozycjaY);
	//Organizm* czyKolizja(int polozenieX, int polozenieY);
	int getPozX()			{ return this->polozenieX; }
	int getPozY()			{ return this->polozenieY; }
	int getSila()			{ return this->sila; }
	bool getCzyZyje()		{ return this->czyZyje; };
	int getInicjatywa()		{ return this->inicjatywa; };
	int getWiek()			{ return this->czasZycia; };
	int getNewPolozenieX()	{ return this->newPolozenieX; };
	int getNewPolozenieY()	{ return this->newPolozenieY; };

	void pozycjaNastepnegoRuchu(int wymiarX, int wymiarY);
	Organizm(Swiat* swiat);
	virtual ~Organizm();
};


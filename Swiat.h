#pragma once
#include <list>
#include "Organizm.h"
#include <vector>

class Organizm;
class Swiat
{
protected:
	// rozmiary swiata
	int x=20;
	int y = 20;
	int numerTury = 0;
public:
	std::list <Organizm*> Organizmy; // ?? sortowanie listy wed³ug inicjatywy (albo wieku?)

	void SetRozmiar(int x, int y);
	int getRozmiarX();
	int getRozmiarY();

	void dodajOrganizmy(Organizm* nowyOrganizm);
	void listaOrganizmow();
	void wykonajTure();// int numerTury);
	void sortujOrganizmy();
	void usunMartweOrganizmy();
	void mapa();


	Organizm* czyKolizja(int polozenieX,int polozenieY);
	Swiat();
	Swiat(int x, int y); 
	~Swiat();
};


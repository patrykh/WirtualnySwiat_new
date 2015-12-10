#pragma once
#include "Zwierze.h"
class Lis :
	public Zwierze
{
private:
	int newPozycjaX = 0, newPozycjaY = 0;
public:
	void akcja(int wymiarX, int wymiarY) override;
	char getSymbol() override;
	Lis(Swiat* swiat, int pozycjaX, int pozycjaY);
	~Lis();
};


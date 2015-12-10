#pragma once
#include "Zwierze.h"
class Lis :
	public Zwierze
{
public:
	void akcja(int wymiarX, int wymiarY) override;
	char getSymbol() override;
	Lis(Swiat* swiat, int pozycjaX, int pozycjaY);
	~Lis();
};


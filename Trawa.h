#pragma once
#include "Roslina.h"
class Trawa :
	public Roslina
{
public:
	char getSymbol() override;
	Trawa(Swiat* swiat, int pozycjaX, int pozycjaY);
	~Trawa();
};


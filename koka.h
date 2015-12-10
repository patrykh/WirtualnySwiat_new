#pragma once
#include "Roslina.h"

class Koka :
	public Roslina
{
public:
	char getSymbol() override;
	Koka(Swiat* swiat, int pozycjaX, int pozycjaY);
	~Koka();
};


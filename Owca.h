#pragma once
#include "Zwierze.h"
class Owca :
	public Zwierze
{
public:
	char getSymbol() override;
	Owca(Swiat* swiat, int pozycjaX, int pozycjaY);
	~Owca();
};


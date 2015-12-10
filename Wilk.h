#pragma once
#include "Zwierze.h"
class Wilk :
	public Zwierze
{
public:
	char getSymbol() override;
	Wilk(Swiat* swiat, int pozycjaX, int pozycjaY);
	~Wilk();
};


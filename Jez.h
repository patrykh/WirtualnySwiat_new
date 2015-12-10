#pragma once
#include "Zwierze.h"
class Jez :
	public Zwierze
{
public:
	char getSymbol() override;
	Jez(Swiat* swiat, int pozycjaX, int pozycjaY);
	~Jez();
};


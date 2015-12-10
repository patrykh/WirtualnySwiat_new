#pragma once
#include "Zwierze.h"
class Leniwiec :
	public Zwierze
{
	
public:
	int blokada = 0;
	char getSymbol() override;
	void akcja(int wymiarX, int wymiarY) override; 
	Leniwiec(Swiat* swiat, int pozycjaX, int pozycjaY);
	~Leniwiec();
};


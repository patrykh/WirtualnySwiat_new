#pragma once
#include "Organizm.h"

class Roslina :
	public Organizm
{
public:
	void akcja(int wymiarX, int wymiarY) override;
	bool kolizja(Organizm* organizm) override;
	Roslina(Swiat* swiat);
	~Roslina();
};


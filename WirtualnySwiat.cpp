// WirtualnySwiat.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Organizm.h"
#include "Roslina.h"
#include "Swiat.h"
#include "Zwierze.h"
#include <cstdlib>
#include <time.h>

int _tmain(int argc, _TCHAR* argv[])
{
	srand(time(NULL));
	Swiat *swiat1 = new Swiat();

	for (int i = 0; i < 20; i++)
	{
		swiat1->wykonajTure();
		swiat1->mapa();
	}
	
	
	int x;
	return 0;
}


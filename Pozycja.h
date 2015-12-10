#pragma once
class Pozycja
{
private:
	int x = 0, y = 0;
public:
	void SetX(int x);
	void SetY(int y);
	int GetX();
	int GetY();
	Pozycja();
	~Pozycja();
};
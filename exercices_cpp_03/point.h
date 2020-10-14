#pragma once
#include "friends.h"

class friends;
class point
{
private:
	int x, y;

public:
	point(int abs = 0, int ord = 0)
	{
		x = abs;
		y = ord;
	}

	friend void affiche(point& p);
};


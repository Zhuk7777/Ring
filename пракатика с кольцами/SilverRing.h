#pragma once
#include"Ring.h"

class SilverRing :public Ring
{
public:
	double price();

	SilverRing(double _weight, double _priceGram );

	friend std::istream& operator>>(std::istream& in, SilverRing& obj);
};

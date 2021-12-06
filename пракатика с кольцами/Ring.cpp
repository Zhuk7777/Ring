#include "Ring.h"

Ring::Ring(double _weight, double _priceGram, int _extraCharge)
{
	weight = _weight;
	priceGram = _priceGram;
	extraCharge = _extraCharge;
}

std::string Ring::toString()
{
	double cost = price();
	return "���� � ������" + std::to_string(cost) + "\n";
}

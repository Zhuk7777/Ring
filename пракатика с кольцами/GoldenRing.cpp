#include "GoldenRing.h"

double GoldenRing::price()
{

	if (stone)
		return priceStone + weight * priceGram;
	else
		return weight * priceGram + weight * priceGram * extraCharge / 100;

}

GoldenRing::GoldenRing(double _weight , double _priceGram, bool _stone,double _priceStone) :Ring(_weight, _priceGram,5)
{
	stone = _stone;
	priceStone = _priceStone;
}

std::istream& operator>>(std::istream& in, GoldenRing& obj)
{
	in >> obj.priceGram;
	in >> obj.weight;
	in >> obj.stone;
	in >> obj.priceStone;
	return in;
}

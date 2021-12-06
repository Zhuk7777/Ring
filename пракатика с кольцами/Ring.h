#pragma once
#include<string>

class Ring
{
protected:
	double weight;
	double priceGram;
	int extraCharge;

public:
	Ring(double _weight, double _priceGram, int _extraCharge);

	virtual double price() = 0;

	std::string toString();
};
#pragma once
#include"Ring.h"
#include<iostream>

class GoldenRing :public Ring
{
	bool stone;
	double priceStone;

public:

	double price();

	GoldenRing(double _weight, double _priceGram,bool _stone,double _priceStone);

	friend std::istream& operator>>(std::istream& in, GoldenRing& obj);
};
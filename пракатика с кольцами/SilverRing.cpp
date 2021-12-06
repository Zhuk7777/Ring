#include "SilverRing.h"
#include<iostream>

double SilverRing::price()
{
    return weight * priceGram + weight * priceGram * extraCharge / 100;
}

SilverRing::SilverRing(double _weight, double _priceGram):Ring(_weight,_priceGram,10)
{}

std::istream& operator>>(std::istream& in, SilverRing& obj)
{
    in >> obj.priceGram;
    in >> obj.weight;
    return in;
}

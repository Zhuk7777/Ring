#include"GoldenRing.h"
#include"SilverRing.h"

int main()
{
	setlocale(0, "");

	Ring* mas[2];
	mas[0] = new GoldenRing(3,4,1,23);
	mas[1] = new SilverRing(3, 4);
	for (int i = 0; i < 2; i++)
		std::cout << mas[i]->toString() << "\n";
	//у ильи еще пропросить его код 

}
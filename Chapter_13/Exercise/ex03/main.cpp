#include <iostream>
#include <string>
#include "dma.h"
const int NUM = 3;

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;

	AbcDMA * p_dma[NUM];
	std::string temp;
	baseDMA b_dma("baseDMA", 1);
	lacksDMA l_dma("green", "lacksDMA", 2);
	hasDMA h_dma("light", "hasDMA", 3);

	p_dma[0] = &b_dma;
	p_dma[1] = &l_dma;
	p_dma[2] = &h_dma;

	for (int i = 0; i < NUM; i++)
	{
		p_dma[i]->View();
		cout << endl;
	}

	cout << "Done.\n";

	return 0;
}

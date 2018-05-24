#include <iostream>
#include "sales.h"
using namespace std;
using namespace SALES;

int main()
{
	Sales a,b;
	double data[3]{12.3, 14.5, 11.9};

	cout << "before set:" << endl;
	a.showSales();
	a.setSales();
	b = Sales(data, sizeof(data) / sizeof(double));
	cout << "a:" << endl;
	a.showSales();
	cout << "b:" << endl;
	b.showSales();

	return 0;
}

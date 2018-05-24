#include <iostream>
#include "sales.h"
using namespace std;
using namespace SALES;

int main()
{
	Sales a,b;
	double data[3]{12.3, 14.5, 11.9};

	setSales(a);
	setSales(b, data, 3);
	cout << "first:" << endl;
	showSales(a);
	cout << "second" << endl;
	showSales(b);

	return 0;
}

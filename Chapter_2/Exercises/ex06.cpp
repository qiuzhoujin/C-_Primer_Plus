// 添加于2016-8-6:ex2.6
#include <iostream>
using namespace std;

double L_2_A(double light_years)
{
	return 63240 * light_years;
}

int main()
{
	double l;
	cout << "Enter the number of light years: ";
	cin >> l;
	cout << l << " light years =  " << L_2_A(l) << " astronomical units.\n";

	return 0;
}

// 添加于2016-8-6:ex2.5
#include <iostream>
using namespace std;

double C_2_F(double cel)
{
	return 1.8 * cel + 32;
}

int main()
{
	double cel;
	cout << "Please enter a Celsius value: ";
	cin >> cel;
	cout << cel << " degrees Celsius is " << C_2_F(cel) << " degrees Fahrenheit.\n";

	return 0;
}

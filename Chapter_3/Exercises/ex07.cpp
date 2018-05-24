// 添加于2016-10-1
#include <iostream>
using namespace std;

#if 0 // 参考答案更好懂
int main()
{
	const double miles_per_100kms = 62.14;
	const double liters_per_gallon = 3.875;
	double europ_sty;
	double mpg;
	cout << "Enter an automobile gasoline consumption figure in the European style:";
	cin >> europ_sty;
	cout << "That's " << 1 / (europ_sty/liters_per_gallon/miles_per_100kms) << " in the U.S. style of miles per gallon.\n";

	return 0;
}
#else
int main()
{
	const double KM100_TO_MILES = 62.14;
	const double LITERS_PER_GALLON = 3.875;
	double euro_rating;
	double us_rating;
	cout << "Enter fuel consumption in liters per 100 km: ";
	cin >> euro_rating;
	// divide by LITER_PER_GALLON to get gallons per 100-km
	// divide by KM100_TO_MILES to get gallons per mile
	// invert result go get miles per gallon
	us_rating = (LITERS_PER_GALLON * KM100_TO_MILES) / euro_rating;
	cout << euro_rating << " liters per 100 km is ";
	cout << us_rating << " miles per gallon.\n";

	return 0;
}
#endif

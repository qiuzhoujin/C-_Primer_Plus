// 添加于2016-10-1
#include <iostream>
using namespace std;

int main()
{
	const int inch_per_foot = 12;
	const double meter_per_inch = 0.0254;
	const double pound_per_kilog = 2.2;
	int feet,inches;
	double meters;
	double pounds;
	double kilograms;
	double BMI;
	cout << "Enter your height in feet and inches:";
	cin >> feet >> inches;
	cout << "Enter your weight in pounds:";
	cin >> pounds;
	meters = (feet * inch_per_foot + inches) * meter_per_inch;
	kilograms = pounds / pound_per_kilog;
	BMI = kilograms / (meters * meters);
	cout << "Your BMI is : " << BMI << endl;

	return 0;
}

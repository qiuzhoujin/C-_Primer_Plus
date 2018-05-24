// 添加于2016-10-1
#include <iostream>
using namespace std;

int main()
{
	double miles,gallons;
	double kilometers,liters;
	cout << "Enter the miles you driven:";
	cin >> miles;
	cout << "Enter the gallons of gasoline you have used:";
	cin >> gallons;
	cout << "Your car has gotten: " << miles / gallons << " miles per gallon.\n";
	cout << "Enter distance in kilometers:";
	cin >> kilometers;
	cout << "Enter petrol in liters:";
	cin >> liters;
	cout << "Your car has gotten: " << 100 * liters / kilometers << " liters per 100 kilometers.\n";

	return 0;
}

// 添加于2016-9-29，将inch转为feet及inch
#include <iostream>
using namespace std;

int main()
{
	const int IncPerFeet = 12;
	cout << "Please input your height in inches:______\b\b\b\b\b\b";
	int inches;
	int feet;
	cin >> inches;
	feet = inches / IncPerFeet;
	inches = inches % IncPerFeet;
	cout << "That's " << feet << " feet and " << inches << " inches\n";

	return 0;
}

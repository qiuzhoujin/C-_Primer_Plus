#include <iostream>
using namespace std;

int main()
{
	const int MONTHS = 12;
	const string month[MONTHS] = {
		"Jan","Feb","Mar","Apr","May","Jue",
		"Jul","Aug","Sep","Oct","Nov","Dec"
	};
	int sales[MONTHS];
	int sum = 0;
	for(int i = 0;i < MONTHS;i++)
	{
		cout << "Enter the sales of " << month[i] << " : ";
		cin >> sales[i];
		sum += sales[i];
	}
	cout << "The total sales for the year is : " << sum;

	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	const int MONTHS = 12;
	const int YEARS  = 3; 
	const string months[MONTHS] = {
		"Jan","Feb","Mar","Apr","May","Jue",
		"Jul","Aug","Sep","Oct","Nov","Dec"
	};
	int sales[YEARS][MONTHS];
	int sum[YEARS] = {0};
	cout << "Enter the monthly sales for \"C++ for Fools\" for the last 3 years.\n";
	for(int year = 0;year < YEARS;year++)
	{
		for(int month = 0;month < MONTHS;month++)
		{
			cout << "Enter the sales of " << months[month] << " : ";
			cin >> sales[year][month];
			sum[year] += sales[year][month];
		}
		cout << "The total sales for the year " << year << " is : " << sum[year];
		cout << endl;
	}
	sum[2] += (sum[0] + sum[1]);
	cout << "The total sales for the combined 3 years is " << sum[2] << endl;

	return 0;
}

#include <iostream>
#include "sales.h"
using namespace std;

namespace SALES
{
	Sales::Sales(const double *ar, int n)
	{
		if (n < 0)
		{
			n = 0;
		}
		int limit = n < QUARTERS ? n : QUARTERS;
		double sum = 0;
		min = max = average = 0.0;
		if (limit > 0)
			min = max = ar[0];
		int i;
		if (ar == NULL)
		{
			for (i = 0; i < QUARTERS; i++)
			{
				sales[i] = 0;
				average = max = min = 0.0;
			}
			return;
		}
		for (i = 0; i < limit; i++)
		{
			sum += ar[i];
			sales[i] = ar[i];
			if (max < ar[i]) max = ar[i];
			if (min > ar[i]) min = ar[i];
		}
		for (i = limit; i < QUARTERS; i++)
			sales[i] = 0.0;
		if (limit > 0)
			average = sum / n;
	}

	void Sales::setSales()
	{
		double sum = 0;
		double arr[QUARTERS];
		int i;
		cout << "Please enter " << QUARTERS << " sales.\n";
		for (i = 0; i < QUARTERS; i++)
		{
			cout << "#" << i + 1 << ":";
			while (!(cin >> arr[i]))
			{
				cin.clear();
				while (cin.get() != '\n') continue;
				cout << "Please enter a number!\n";
			}
		}
		*this = Sales(arr, QUARTERS);
	}

	void Sales::showSales()
	{
		int i = 0;
		cout << "sales:";
		for (i = 0; i < QUARTERS; i++)
			cout << sales[i] << ", ";
		cout << "\b\b\n";
		cout << "average: " << average << endl;
		cout << "max: " << max << endl;
		cout << "min: " << min << endl;
	}
}

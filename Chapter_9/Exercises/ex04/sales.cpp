#include <iostream>
#include "sales.h"
using namespace std;

namespace SALES
{
	void setSales(Sales & s, const double ar[], int n)
	{
		double sum = 0;
		double max,min;
		int i;
		if (n > QUARTERS)
			n = QUARTERS;
		for (i = 0; i < n; i++)
			s.sales[i] = 0;
		for (i = 0; i < n; i++)
		{
			sum += ar[i];
			s.sales[i] = ar[i];
		}
		s.average = sum / n;
		max = min = s.sales[0];
		for (i = 1; i < QUARTERS; i++)
		{
			if (max < s.sales[i])
				max = s.sales[i];
			if (min > s.sales[i])
				min = s.sales[i];
		}
		s.max = max;
		s.min = min;
	}

	void setSales(Sales & s)
	{
		double sum = 0;
		double max,min;
		int i;
		cout << "Please enter " << QUARTERS << " sales.\n";
		for (i = 0; i < QUARTERS; i++)
		{
			cout << "#" << i + 1 << ":";
			while (!(cin >> s.sales[i]))
			{
				cin.clear();
				while (cin.get() != '\n') continue;
				cout << "Please enter a number!\n";
			}
			sum += s.sales[i];
		}
		s.average = sum / QUARTERS;
		max = min = s.sales[0];
		for (i = 1; i < QUARTERS; i++)
		{
			if (max < s.sales[i])
				max = s.sales[i];
			if (min > s.sales[i])
				min = s.sales[i];
		}
		s.max = max;
		s.min = min;
	}

	void showSales(const Sales & s)
	{
		int i = 0;
		cout << "sales:";
		for (i = 0; i < QUARTERS; i++)
			cout << s.sales[i] << ", ";
		cout << "\b\b\n";
		cout << "average: " << s.average << endl;
		cout << "max: " << s.max << endl;
		cout << "min: " << s.min << endl;
	}
}

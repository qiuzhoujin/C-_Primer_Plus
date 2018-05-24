#include "wine.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void Wine::GetBottles()
{
	cout << "Enter " << name << " data for " << years << " year(s)";
	for (int i = 0; i < years; i++)
	{
		// Todo:check solutions has error-prevention or not?
		cout << "Enter year: ";
		cin >> info.first()[i];
		cout << "Enter bottles for that year: ";
		cin >> info.second()[i];
	}
}

int Wine::sum()
{
	int res = 0;
	for (int i = 0; i < years; i++)
	{
		res += info.second()[i];
	}
	return res;
}

void Wine::Show()
{
	cout << "Wine: " << name << endl;
	cout << "\tYear\tBottles\n";
	for (int i = 0; i < years; i++)
	{
		cout << "\t" << info.first()[i] << "\t" << info.second()[i] << endl;
	}
}

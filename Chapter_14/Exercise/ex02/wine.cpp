#include "wine.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

Wine::Wine(const char *l, const ArrayInt yr, const ArrayInt bot) : string(l)
{
	if (yr.size() != bot.size())
	{
		cout << "Error, the size of years and bottles mismatch, array set to 0 size.\n";
		years = 0;
		PairArray::operator=(PairArray(ArrayInt(), ArrayInt()));
	}
	else
	{
		years = yr.size();
		PairArray::operator=(PairArray(yr, bot));
	}
}

void Wine::GetBottles()
{
	if (years < 1)
		cout << "Error, no space allocated for data.\n";
	cout << "Enter " << Label() << " data for " << years << " year(s):\n";
	for (int i = 0; i < years; i++)
	{
		// Todo:check solutions has error-prevention or not?
		cout << "Enter year: ";
		cin >> PairArray::first()[i];
		cout << "Enter bottles for that year: ";
		cin >> PairArray::second()[i];
	}
}

void Wine::Show() const
{
	cout << "Wine: " << Label() << endl;
	cout << "\tYear\tBottles\n";
	for (int i = 0; i < years; i++)
	{
		cout << "\t" << PairArray::first()[i] << "\t" << PairArray::second()[i] << endl;
	}
}

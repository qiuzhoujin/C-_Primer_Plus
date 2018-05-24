#include "golf.h"
#include <iostream>
using namespace std;

golf::golf()
{
	fullname = "";
	handicap = 0;
}

golf::golf(const string & name, int hc)
{
	fullname = name;
	handicap = hc;
}

int golf::setgolf()
{
	string fullname;
	int handicap;
	cout << "Please enter the fullname(empty line to quit):";
	getline(cin,fullname);
	if (fullname.size() == 0)
		return 0;
	cout << "Please enter the handicap:";
	while (!(cin >> handicap))
	{
		cin.clear();
		cout << "Please enter an integer: ";
	}
	while (cin.get() != '\n')
		continue;
	*this = golf(fullname, handicap);
	return 1;
}

void golf::reset_handicap(int hc)
{
	handicap = hc;
}

void golf::showgolf()
{
	cout << "fullname: " << fullname << endl;
	cout << "handicap: " << handicap << endl;
}

#include "golf.h"
#include <cstring>
#include <iostream>
using namespace std;

void setgolf(golf & g, const char * name, int hc)
{
	strcpy(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf & g)
{
	cout << "Please enter the fullname(empty line to quit):";
	cin.getline(g.fullname, Len);
	if (strlen(g.fullname) == 0)
		return 0;
	cout << "Please enter the handicap:";
	cin >> g.handicap;
	cin.get();
	return 1;
}

void handicap(golf & g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf & g)
{
	cout << "fullname: " << g.fullname << endl;
	cout << "handicap: " << g.handicap << endl;
}

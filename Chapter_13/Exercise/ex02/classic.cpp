#include "classic.h"
#include <iostream>
#include <cstring>
using namespace std;

Classic::Classic() : Cd()
{
	primary_work = new char[1];
	primary_work[0] = '\0';
}

Classic::Classic(const char * s0, const char * s1, const char * s2, int n, double x):
				Cd(s1, s2, n, x)
{
	primary_work = new char[strlen(s0) + 1];
	strcpy(primary_work, s0);
}

Classic::Classic(const char * s0, Cd & d) : Cd(d)
{
	primary_work = new char[strlen(s0) + 1];
	strcpy(primary_work, s0);
}

Classic::Classic(const Classic & c) : Cd(c)
{
	primary_work = new char[strlen(c.primary_work) + 1];
	strcpy(primary_work, c.primary_work);
}

Classic::~Classic()
{
	delete [] primary_work;
}

void Classic::Report() const
{
	Cd::Report();
	cout << "Primary Work: " << primary_work << endl;
	cout << endl;
}

Classic & Classic::operator=(const Classic & c)
{
	if (this == &c)
		return *this;
	delete [] primary_work;
	Cd::operator=(c);
	primary_work = new char[strlen(c.primary_work) + 1];
	strcpy(primary_work, c.primary_work);
	return *this;
}

#include "classic.h"
#include <iostream>
#include <cstring>
using namespace std;

Classic::Classic() : Cd()
{
	primary_work[0] = '\0';
}

Classic::Classic(const char * s0, const char * s1, const char * s2, int n, double x):
				Cd(s1, s2, n, x)
{
	int len;
	len = sizeof(primary_work) - 1 < strlen(s0) ?
			sizeof(primary_work) - 1 : strlen(s0);
	strncpy(primary_work, s0, len);
	primary_work[len] = '\0';
}

Classic::Classic(const char * s0, Cd & d) : Cd(d)
{
	int len;
	len = sizeof(primary_work) - 1 < strlen(s0) ?
			sizeof(primary_work) - 1 : strlen(s0);
	strncpy(primary_work, s0, len);
	primary_work[len] = '\0';
}

Classic::Classic(const Classic & c) : Cd(c)
{
	strcpy(primary_work, c.primary_work);
}

void Classic::Report() const
{
	Cd::Report();
	cout << "Primary Work: " << primary_work << endl;
	cout << endl;
}

// Todo:clean
//Classic & Classic::operator=(const Classic & c)

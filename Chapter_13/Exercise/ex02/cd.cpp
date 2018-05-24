#include "cd.h"
#include <iostream>
#include <cstring>
using namespace std;

Cd::Cd()
{
	performers = new char(1);
	label = new char(1);
	performers[0] = label[0] = '\0';
	selections = 0;
	playtime = 0.0;
}

Cd::Cd(const char * s1, const char * s2, int n, double x)
{
	performers = new char(strlen(s1) + 1);
	strcpy(performers, s1);
	label = new char(strlen(s2) + 1);
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd &d)
{
	performers = new char(strlen(d.performers) + 1);
	strcpy(performers, d.performers);
	label = new char(strlen(d.label) + 1);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::~Cd()
{
	delete [] performers;
	delete [] label;
}

void Cd::Report() const
{
	cout << "\n<<<<<<<<<<<<<<<<<<<<<<<\n";
	cout << "Performers: " << performers << endl;
	cout << "Label: " << label << endl;
	cout << "Selections: " << selections << endl;
	cout << "Playtime: " << playtime << endl;
	cout << endl;
}

Cd & Cd::operator=(const Cd &d)
{
	if (this == &d)
		return *this;
	delete [] performers;
	delete [] label;
	performers = new char(strlen(d.performers) + 1);
	strcpy(performers, d.performers);
	label = new char(strlen(d.label) + 1);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

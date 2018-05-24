#include "cd.h"
#include <iostream>
#include <cstring>
using namespace std;

Cd::Cd()
{
	performers[0] = label[0] = '\0';
	selections = 0;
	playtime = 0.0;
}

Cd::Cd(const char * s1, const char * s2, int n, double x)
{
	int len;
	len = sizeof(performers) - 1 < strlen(s1) ?
			sizeof(performers) - 1 : strlen(s1);
	strncpy(performers, s1, len);
	performers[len] = '\0';
	len = sizeof(label) - 1 < strlen(s2) ?
			sizeof(label) - 1 : strlen(s2);
	strncpy(label, s2, len);
	label[len] = '\0';
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd &d)
{
	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
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
	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

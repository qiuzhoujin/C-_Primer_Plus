#include "cow.h"
#include <iostream>
#include <cstring>
using namespace std;

Cow::Cow()
{
	name[0] = '\0';
	hobby = NULL;
	weight = 0;
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
	strcpy(name, nm);
	hobby = new char[strlen(ho) + 1];
	strcpy(hobby, ho);
	weight = wt;
}

Cow::Cow(const Cow &c)
{
	strcpy(name, c.name);
	hobby = new char[strlen(c.hobby) + 1];
	strcpy(hobby, c.hobby);
	weight = c.weight;

}
Cow::~Cow()
{
	delete [] hobby;
}

Cow & Cow::operator=(const Cow & c)
{
	if (&c == this) return *this;
	delete [] hobby;
	strcpy(name, c.name);
	hobby = new char[strlen(c.hobby) + 1];
	strcpy(hobby, c.hobby);
	weight = c.weight;
}

void Cow::ShowCow() const  // display all cow data
{
	if (hobby == NULL) 
	{
		cout << "object not initialized.\n";
		return;
	}
	cout << "name: " << name << endl;
	cout << "hobby: " << hobby << endl;
	cout << "weight: " << weight << endl;
}

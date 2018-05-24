// support.cpp -- use external variable
// compile with external.cpp
#include <iostream>
using namespace std;

extern double warming;       // use warming from another file

// function prototype
void update(double dt);
void local();

void update(double dt)       // mofifies global variable
{
	extern double warming;   // optional redeclaration
	warming += dt;           // uses global warming
	cout << "updating global warming to " << warming;
	cout << " degrees.\n";
}

void local()                 // uses local variable
{
	double warming = 0.8;    // new variable hids external one

	cout << "Local warming = " << warming << " degrees.\n";
	// Access global variable with the
	// scope resolution operator
	cout << "But global warming = " << ::warming;
	cout << " degrees.\n";
}

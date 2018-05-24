// pe14-5.cpp
// useemp1.cpp -- using the abstr_emp classes

#include <iostream>
using namespace std;
#include "emp.h"

int main()
{
	employee em("Trip", "Harris", "Thumper");
	cout << em << endl;
	em.ShowAll();

	manager ma("Amorphia", "Spindragon", "Nuancer", 5);
	cout << ma << endl;
	ma.ShowAll();

	fink fi("Matt", "Oggs", "Oiler", "Juno Barr");
	cout << fi << endl;
	fi.ShowAll();
	highfink hf(ma, "Curly Kew");  // recruitment?
	hf.ShowAll();
	cout << "Press a key for next phase:\n";
	cin.get();
	highfink hf2;
	hf2.SetAll();

	cout << "Using an abstr_emp * pointer:\n";
	abstr_emp * tri[4] = {&em, &fi, &hf, &hf2};
	for (int i = 0; i < 4; i++)
		tri[i]->ShowAll();

	return 0;
}

// Answers for questions:
/*
 * Why is no assignment operator defined?
 * A: Default assignment operator is fine, because there's no dynamic 
 *    memory allocated for members.
 *
 * Why are ShowAll() and SetAll() virtual?
 * A: The derived class have their own ShowAll() and SetAll() member
 *    functions, and they're for dynamic binding.
 * 
 * Why is abstr_emp a virtual base class?
 * A: Because highfink inherits from manager and fink, and the latters 
 *    inherit from abstr_emp.Therefore abstr_emp has to be a virtual
 *    base class.
 * 
 * Why does the highfink class have no data section?
 * A: There's no need for highfink to have more data section,because
 *    the base classes have enough data section.
 *
 * Why is only one version of operator<<() needed?
 * A: The various verions of ShowAll() do the same job.And this design
 *    is because of multiple inheritance.
 *
 * What would happen if the end of the program were replaced with 
 * this code ?
 * abstr_emp tri[4] = {em, fi, hf, hf2};
 * for (int i = 0; i < 4; i++)
 *    tri[i].ShowAll();
 * A:Just show the abstr_emp info.
 */

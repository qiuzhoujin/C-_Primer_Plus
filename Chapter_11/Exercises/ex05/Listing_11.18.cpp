// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using std::cout;
#include "Listing_11.16.h"

void display(Stonewt & w);
int main()
{
	Stonewt a = 275; // uses constructor to initialize
	Stonewt b(285.7);    // same as Stonewt wolfe = 285.7
	Stonewt c, d;

	cout << "a weighed ";
	display(a);
	cout << "b weighed ";
	display(b);
	c = a + b;
	cout << "a + b weighed ";
	display(c);
	d = a - b;
	cout << "a - b weighed ";
	display(d);
	c = a * 2;
	cout << "a * 2 weighed ";
	display(c);
	d = 2 * a;
	cout << "2 * a weighed ";
	display(d);

	return 0;
}

void display(Stonewt & w)
{
	w.stone_form();
	cout << w;
	w.i_pounds_form();
	cout << w;
	w.f_pounds_form();
	cout << w;
}

#include "port.h"
#include <cstring>

Port::Port(const char * br, const char * st, int b)
			: bottles(b)
{
	brand = new char[strlen(br) + 1];
	strcpy(brand, br);
	strncpy(style, st, sizeof(style) - 1);
}

Port::Port(const Port & p)
{
	brand = new char[strlen(p.brand) + 1];
	strcpy(brand, p.brand);
	strncpy(style, p.style, sizeof(style) - 1);
	bottles = p.bottles;
}

Port & Port::operator=(const Port & p)
{
	if (this == &p)
		return *this;
	delete [] brand;
	brand = new char[strlen(p.brand) + 1];
	strcpy(brand, p.brand);
	strncpy(style, p.style, sizeof(style) - 1);
	bottles = p.bottles;
}

Port & Port::operator+=(int b)
{
	bottles += b;
	return *this;
}

Port & Port::operator-=(int b)
{
	if (bottles >= b)
		bottles -= b;
	return *this;
}

void Port::Show() const
{
	cout << "Brand: " << brand << endl;
	cout << "kind: " << style << endl;
	cout << "Bottles: " << bottles << endl;
}

ostream & operator<<(ostream & os, const Port & p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles << endl;
	return os;
}

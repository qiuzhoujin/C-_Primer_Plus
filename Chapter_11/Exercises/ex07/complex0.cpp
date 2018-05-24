#include "complex0.h"


complex complex::operator+(const complex & c) const
{
	return complex(real + c.real, imaginary + c.imaginary);
}

complex complex::operator-(const complex & c) const
{
	return complex(real - c.real, imaginary - c.imaginary);
}

complex complex::operator*(const complex & c) const
{
	double tempr = real * c.real - imaginary * c.imaginary;
	double tempi = real * c.imaginary + imaginary * c.real;
	return complex(tempr, tempi);
}

complex complex::operator*(double d) const
{
	return complex(real * d, imaginary * d);
}

complex operator*(double d, const complex & c)
{
	return c * d;
}

complex complex::operator~() const
{
	return complex(real, -imaginary);
}

istream & operator>>(istream & is, complex & c)
{
	cout << "real:";
	if (is >> c.real)
	{
		cout << "imaginary:";
		is >> c.imaginary;
	}
	return is;
}

ostream & operator<<(ostream & os, const complex & c)
{
	os << "(" << c.real << "," << c.imaginary << "i)";
	return os;
}

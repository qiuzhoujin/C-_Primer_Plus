#include <iostream>
using namespace std;
class complex
{
private:
	double real;
	double imaginary;
public:
	complex(){ real = imaginary = 0;}
	complex(double r, double i)
	{
		real = r;
		imaginary = i;
	}
	complex operator+(const complex & c) const;
	complex operator-(const complex & c) const;
	complex operator*(const complex & c) const;
	complex operator*(double d) const;
	friend complex operator*(double d, const complex & c);
	complex operator~() const;
	friend istream & operator>>(istream & is, complex & c);
	friend ostream & operator<<(ostream & os, const complex & c);
};

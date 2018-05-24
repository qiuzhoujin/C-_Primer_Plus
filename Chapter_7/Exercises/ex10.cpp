#include <iostream>
using namespace std;

double add(double x, double y)
{
	return x + y;
}

double sub(double x, double y)
{
	return x - y;
}

double mean(double x, double y)
{
	return (x + y ) / 2;
}

typedef double (*pf)(double a, double b);
double calculate(double a, double b, pf fun);

int main()
{
	double a,b;
	double (*pf[3])(double, double) = {add,sub,mean};
	cout << "Enter two double values(non-numeric to quit): ";
	while (cin >> a >> b)
	{
		for (int i = 0; i < 3; i++)
		{
			cout << "pf[" << i << "] returns: " << 
				calculate(a, b, pf[i]) << endl;
		}
		cout << "Enter two double values(non-numeric to quit): ";
	}
	cout << "Done.\n";

	return 0;
}

double calculate(double a, double b, pf fun)
{
	return fun(a, b);
}

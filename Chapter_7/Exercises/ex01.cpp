#include <iostream>
using namespace std;
double harmonic_mean(double x, double y);

int main()
{
	double a,b;
	do
	{
		cout << "Enter a pair of numbers(0 to quit):";
		while(!(cin >> a >> b))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Please enter a pair of numbers(0 to quit):";
		}
		if((a != 0) && (b != 0))
		{
			double res = harmonic_mean(a,b);
			cout << "The harmonic mean of " << a << ",and " << b << ",is "
				<< res << endl;
		}
		else
			break;
	}
	while(1);

	return 0;
}

double harmonic_mean(double x, double y)
{
	return 2 * x * y / (x + y);
}

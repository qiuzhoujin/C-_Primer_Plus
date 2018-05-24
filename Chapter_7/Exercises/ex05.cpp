#include <iostream>
using namespace std;

int factorial(int num);

int main()
{
	int num;
	cout << "Enter an integer(negative or non-int to quit):";
	while ( (cin >> num) && (num >= 0))
	{
		cout << "The factorial of " << num << " is " <<
			factorial(num) << endl;
		cout << "Enter an integer(negative or non-int to quit):";
	}
	cout << "Bye~\n";

	return 0;
}

int factorial(int num)
{
	if (num > 0)
	{
		return num * factorial(num - 1);
	}
	else
		return 1;
}

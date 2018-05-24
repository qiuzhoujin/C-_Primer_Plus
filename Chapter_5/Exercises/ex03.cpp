#include <iostream>
using namespace std;

#if 0
int main()
{
	int sum,a;
	sum = 0;
	cout << "Enter an integer,0 to quit:";
	cin >> a;
	while(a != 0)
	{
		sum += a;
		cout << "The cumulative sum of the entries is: " << sum << endl;
		cout << "Enter an integer,0 to quit:";
		cin >> a;
	}

	return 0;
}
#else
// 参数答案
int main()
{
	double sum = 0.0;
	double in;
	cout << "Enter a number (0 to terminate) : ";
	cin >> in;
	while(in != 0) {
		sum += in;
		cout << "Running total = " << sum << "\n";
		cout << "Enter next number (0 to terminate) : ";
		cin >> in;
	}
	cout << "Bye!\n";

	return 0;
}
#endif

#include <iostream>
using namespace std;

int main()
{
	cout << "Enter two integers(smaller preceding the bigger):" << endl;
	int a,b;
	cin >> a >> b;
	int sum = 0;
	for(int i = a; i <= b; i++)
	{
		sum += i;
	}
	cout << "The sum of " << a << " through " << b << " is " << sum << endl;

	return 0;
}

// condit.cpp -- using the conditional operator
#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cout << "Enter two integer: ";
	cin >> a >> b;
	cout << "The larger of " << a << " and " << b;
	int c = a > b ? a : b;   // c = a if a > b, else c = b
	cout << " is " << c << endl;

	return 0;
}

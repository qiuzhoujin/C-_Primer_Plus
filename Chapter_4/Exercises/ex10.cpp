#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<float,3> times;
	cout << "Enter the first time: ";
	cin >> times[0];
	cout << "Enter the second time: ";
	cin >> times[1];
	cout << "Enter the third time: ";
	cin >> times[2];
	cout << "The times are:" << endl;
	for(int i = 0; i < 3;i++)
	{
		cout << times[i] << endl;
	}
	cout << "And the average is: " <<
		(times[0] + times[1] + times[2]) / 3 << endl;

	return 0;
}

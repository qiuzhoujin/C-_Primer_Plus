#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<double,10> donation;
	cout << "Enter up to 10 donation values,non-numeric to quit:\n";
	double sum = 0.0;
	int i;
	for (i = 0; cin >> donation[i] && i < 10;i++)
	{
		sum += donation[i];
	}	
	int num = i;
	double average = sum / num;
	int res = 0;
	for (i = 0; i < num; i++)
	{
		if (donation[i] > average) res++;
	}
	cout << "The average of the numbers is : " << average << " .\n";
	cout << "And there are " << res << " are larger than the average.\n";

	return 0;
}

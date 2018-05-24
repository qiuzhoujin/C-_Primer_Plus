// lotto.cpp -- probability of winning
#include <iostream>
using namespace std;

// Note: some implementations require double instead of long double
long double probability(unsigned field_numbers, unsigned picks, unsigned second_range);

int main()
{
	unsigned total, choices, second_range;
	cout << "Enter the total number of choices on the game card and \n"
			"the number of picks allowed,and the second range:\n";
	while ((cin >> total >> choices >> second_range) && choices <= total)
	{
		cout << "You have one chance in ";
		cout << probability(total, choices, second_range);   // compute the odds
		cout << " of winning.\n";
		cout << "Next three numbers (q to quit): ";
	}
	cout << "bye\n";

	return 0;
}

long double probability(unsigned field_numbers, unsigned picks, unsigned second_range)
{
	long double result = 1.0;   // here come some local variables
	long double n;
	unsigned p;
	for (n = field_numbers, p = picks; p > 0; n--,p--)
		result = result * n / p;
	result *= second_range;
	return result;
}

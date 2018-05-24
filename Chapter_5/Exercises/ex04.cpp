#include <iostream>
using namespace std;

int main()
{
	double Daphne = 100;
	double Cleo = 100;
	int year = 0;
	for(;Daphne >= Cleo;year++)
	{
		Daphne += 10;
		Cleo *= 1.05;
	}
	cout << "In year " << year << ",Daphne = " 
		<< Daphne << ", and Cleo " << Cleo << endl;

	return 0;
}

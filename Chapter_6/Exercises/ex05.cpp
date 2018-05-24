#if 0
#include <iostream>
using namespace std;

int main()
{
	double income;
	double tax;

	cout << "Enter income(negative number or non-numeric to quit):";
	while ( cin >> income && income >= 0)
	{
		if (income < 5000)
			tax = 0;
		else if (income <= 15000)
			tax = (income - 5000) * 0.1;
		else if (income <= 35000)
			tax = (income - 15000) * 0.15 + 10000 * 0.1;
		else
			tax = (income - 35000) * 0.2 + 20000 * 0.15 + 10000 * 0.1;
		cout << "The tax owner is: " << tax << endl;
		cout << "Enter income(negative number or non-numeric to quit):";
	}
	cout << "Bye!\n";

	return 0;
}
#else
// 参考答案
// pe6-5.cpp 
// Neutronia taxation 
#include <iostream> 
const double LEV1 = 5000; 
const double LEV2 = 15000; 
const double LEV3 = 35000; 
const double RATE1 = 0.10; 
const double RATE2 = 0.15; 
const double RATE3 = 0.20; 
int main( ) 
{ 
	using namespace std; 
	double income; 
	double tax; 
	cout << "Enter your annual income in tvarps: "; 
	cin >> income; 
	if (income <= LEV1) 
		tax = 0; 
	else if (income <= LEV2) 
		tax = (income - LEV1) * RATE1; 
	else if (income <= LEV3) 
		tax = RATE1 * (LEV2 - LEV1) + RATE2 * (income - LEV2); 
	else 
		tax = RATE1 * (LEV2 - LEV1) + RATE2 * (LEV3 - LEV2) 
			+ RATE3 * (income - LEV3); 
	cout << "You owe Neutronia " << tax << " tvarps in taxes.\n"; 
	return 0; 
} 

#endif

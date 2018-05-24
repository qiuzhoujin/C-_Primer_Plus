#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
	string brand_name;
	double weight;
	int calories;
};

int main()
{
	CandyBar *snacks = new CandyBar[3]
	{
		{ "Mocha Munch", 2.3, 350},
		{ "Wangwang", 5.5, 250},
		{ "Cheese", 1.5, 525},
	};

	for(int i = 0; i < 3;i++)
	{
		cout << "Brand name: " << snacks[i].brand_name << endl;
		cout << "Weight: " << snacks[i].weight << endl;
		cout << "Calories: " << snacks[i].calories << endl;
		cout << endl;
	}
	delete [] snacks;

	return 0;
}

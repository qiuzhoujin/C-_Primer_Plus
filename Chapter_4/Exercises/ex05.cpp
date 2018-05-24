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
	CandyBar snack = { "Mocha Munch", 2.3, 350};
	cout << "Brand name: " << snack.brand_name << endl;
	cout << "Weight: " << snack.weight << endl;
	cout << "Calories: " << snack.calories << endl;

	return 0;
}

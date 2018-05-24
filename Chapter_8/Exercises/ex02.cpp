#include <iostream>
#include <cstring>
using namespace std;

struct CandyBar
{
	char brand[40];
	double weight;
	int calories;
};

void set_candybar(CandyBar &bar ,const char *name = "Millennum Munch",
					double weight = 2.85,int calories = 350);
void show_candybar(const CandyBar &bar);

int main()
{
	CandyBar a_candy_bar;
	set_candybar(a_candy_bar);
	show_candybar(a_candy_bar);
	set_candybar(a_candy_bar, "Watertek", 5.25, 250);
	show_candybar(a_candy_bar);

	return 0;
}

void set_candybar(CandyBar &bar ,const char *name,
					double weight, int calories)
{
	strcpy(bar.brand, name);
	bar.weight = weight;
	bar.calories = calories;
}

void show_candybar(const CandyBar &bar)
{
	cout << "The brand name is: " << bar.brand << endl;
	cout << "The weight of the candy bar is: " << bar.weight << endl;
	cout << "And the calories in the candy bar is: " << bar.calories << endl;
}

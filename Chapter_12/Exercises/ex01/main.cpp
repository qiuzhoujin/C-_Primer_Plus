#include <iostream>
#include "cow.h"
using namespace std;

int main()
{
	Cow cow1;
	cout << "cow1:\n";
	cow1.ShowCow();
	Cow cow2("humphrey", "video game", 155);
	cout << "cow2:\n";
	cow2.ShowCow();
	cow1 = cow2;
	cout << "After cow1 = cow2:\n";
	cow1.ShowCow();
	Cow cow3(cow2);
	cout << "cow3(initialized to cow2):\n";
	cow3.ShowCow();

	return 0;
}

#include <iostream>
#include <string>
using namespace std;

struct car
{
	string make;
	int year;
};

int main()
{
	int num;
	cout << "How many cars do you wish to catalog?";
	cin >> num;
	cin.get();
	car *cars = new car[num];
	for(int i = 1; i <= num; i++)
	{
		cout << "Car #" << i << ":\n";
		cout << "Please enter the make: ";
		getline(cin,cars[i - 1].make);
		cout << "Please enter the year made: ";
		cin >> cars[i - 1].year;
		cin.get();
	}
	cout << "Here is your collection:\n";
	for(int i = 0; i < num; i++)
	{
		cout << cars[i].year << " " << cars[i].make << endl;
	}
	delete [] cars;

	return 0;
}

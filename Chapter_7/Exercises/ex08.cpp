#include <iostream>
using namespace std;
// constant data
const int Seasons = 4;
const char* Snames[Seasons] = 
	{"Spring", "Summer", "Fall", "Winter"};

#if 1
struct st_expenses
{
	double data[Seasons];
};
// function to modify struct
void fill(st_expenses* expenses);
// function that uses struct
void show(const st_expenses* expenses);
#else
// function to modify array object
void fill(double da[], int size);
// function that uses array without modifying it
void show(const double da[], int size);
#endif

int main()
{
	st_expenses expenses;
	fill(&expenses);
	show(&expenses);

	return 0;
}

#if 1
// function to modify struct
void fill(st_expenses* expenses)
{
	for (int i = 0; i < sizeof(st_expenses)/sizeof(double); i++)
	{
		cout << "Enter " << Snames[i] << " expense: ";
		cin >> expenses->data[i];
	}
}

// function that uses struct
void show(const st_expenses* expenses)
{
	double total = 0.0;
	int size = sizeof(st_expenses)/sizeof(double);
	cout << "\nEXPENSES\n";
	for (int i = 0; i < size; i++)
	{
		cout << Snames[i] << ": $" << expenses->data[i] << endl;
		total += expenses->data[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
#else
void fill(double da[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter " << Snames[i] << " expense: ";
		cin >> da[i];
	}
}

void show(const double da[], int size)
{
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < size; i++)
	{
		cout << Snames[i] << ": $" << da[i] << endl;
		total += da[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
#endif

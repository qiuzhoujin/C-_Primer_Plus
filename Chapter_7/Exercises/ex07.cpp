// arrfun3.cpp -- array functions and const
#include <iostream>
using namespace std;

const int Max = 5;

// function prototypes
double* fill_array(double begin[], int limit);
void show_array(const double begin[], double * end);  // don't change data
void revalue(double r, double begin[], double * end);

int main()
{
	double properties[Max];
	
	double *end = fill_array(properties, Max);
	show_array(properties, end);
	if (end != properties)
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor))   // bad input
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, properties, end);
		show_array(properties, end);
	}
	cout << "Done.\n";
	cin.get();
	cin.get();

	return 0;
}

double* fill_array(double begin[], int limit)
{
	double temp;
	int i;
	for (i = 0; i < limit; i++)
	{
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if (!cin)   // bad input
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp < 0)       // signal to terminate
			break;
		begin[i] = temp;
	}
	return begin + i;
}

// the following function can use, but not alter,
// the array whose address is ar
void show_array(const double begin[], double * end)
{
	int i = 0;
	for (const double* temp = begin; temp != end; temp++,i++)
	{
		cout << "Property #" << (i + 1) << ": $";
		cout << *temp << endl;
	}
}

// multiplies each element of ar[] by r
void revalue(double r, double begin[], double * end)
{
	for (double *temp = begin; temp != end; temp++)
		*temp *= r;
}

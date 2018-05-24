#include <iostream>
using namespace std;

template <class T>          // template A
T SumArray(T arr[], int n);

template <class T>          // template B
T SumArray(T * arr[], int n);

struct debts
{
	char name[50];
	double amount;
};

int main()
{
	int things[6] = {13, 31, 103, 301, 310, 130};
	struct debts mr_E[3] = 
	{
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe", 1300.0},
		{"Iby Stout", 1800.0}
	};
	double * pd[3];

	// set pointers to the amount members of the structures in mr_E
	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;

	cout << "Listing Mr. E's total number of things:\n";
	// things is an array of int
	cout << SumArray(things, 6) << endl;    // uses template A
	cout << "Listing Mr. E's sum of all debts:\n";
	// pd is an array of pointers to double
	cout << SumArray(pd, 3);        // uses template B (more specialized)

	return 0;
}

template <class T>
T SumArray(T arr[], int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];
	return sum;
}

template <class T>
T SumArray(T * arr[], int n)
{
	T sum;
	for (int i = 0; i < n; i++)
		sum += *arr[i];
	return sum;
}

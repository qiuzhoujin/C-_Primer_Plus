// ex04.cpp
#include <iostream>
#include <set>
#include <ctime>
#include <cstdlib>
using namespace std;

int reduce(long ar[], int n);
void show_data(const long ar[], int n);

int main()
{
	const int SIZE = 10;
	long ar[SIZE];
	int i;
	srand(time(0));
	for (i = 0; i < SIZE; i++)
		ar[i] = rand() % 1000;
	for (i = 0; i < 3; i++)
		ar[rand() % SIZE] = ar[rand() % SIZE];
	cout << "Orignal data:\n";
	show_data(ar, SIZE);
	int len = reduce(ar, SIZE);
	cout << "Sorted unique data:\n";
	show_data(ar, len);

	return 0;
}

int reduce(long ar[], int n)
{
	set<long> long_set(ar, ar + n);
	copy(long_set.begin(), long_set.end(), ar);
	return long_set.size();
}

void show_data(const long ar[], int n)
{
	for (int i = 0; i < n; i++)
		cout << i << " : " << ar[i] << endl;
}

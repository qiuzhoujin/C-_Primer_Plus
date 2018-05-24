// ex05.cpp
#include <iostream>
#include <set>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

template <typename T>
int reduce(T ar[], int n);
template <typename T>
void show_data(const T ar[], int n);

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
	cout << "Orignal long:\n";
	show_data(ar, SIZE);
	int len = reduce(ar, SIZE);
	cout << "Sorted unique long:\n";
	show_data(ar, len);
	string strs[SIZE] = {
		"write", "a", "function", "with", "a",
		"old-style", "interface", "that", "with",
		"a"};
	cout << "Orignal string:\n";
	show_data(strs, SIZE);
	len = reduce(strs, SIZE);
	cout << "Sorted unique string:\n";
	show_data(strs, len);

	return 0;
}

template <typename T>
int reduce(T ar[], int n)
{
	set<T> set_val(ar, ar + n);
	copy(set_val.begin(), set_val.end(), ar);
	return set_val.size();
}

template <typename T>
void show_data(const T ar[], int n)
{
	for (int i = 0; i < n; i++)
		cout << i << " : " << ar[i] << endl;
}

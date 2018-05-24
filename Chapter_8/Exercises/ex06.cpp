#include <iostream>
#include <cstring>
using namespace std;

template <class T>
T max(T arr[], int size);
template<> const char* max(const char* arr[], int size);

int main()
{
	int int_arr[6]{1,4,2,5,3,-10};
	double double_arr[4]{2.5,36,77,234};
	const char* strs[5] = {"What the hell",
		"Write a template function maxn()that takes as its arguments an array of items...",
		"Modify Listing 8.14so that it uses two template functions called SumArray()to...",
		"are you waiting for",
		"hehe"
	};
	cout << "The max of int_arr is: " << max(int_arr, 6) << endl;
	cout << "The max of double_arr is: " << max(double_arr, 4) << endl;
	cout << "The longest of strs is: " << max(strs, 5) << endl;

	return 0;
}

template <class T>
T max(T arr[], int size)
{
	T max = arr[0];
	for (int i = 1;i < size; i++)
		if (max < arr[i]) max = arr[i];
	return max;
}

template<> const char* max(const char* arr[], int size)
{
	int longest = 0;
	for (int i = 1; i < size; i++)
		if (strlen(arr[longest]) < strlen(arr[i]))
			longest = i;

	return arr[longest];
}

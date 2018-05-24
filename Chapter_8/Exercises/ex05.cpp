#include <iostream>
using namespace std;

template <class T>
T max5(T arr[]);

int main()
{
	int int_arr[5]{1,4,2,5,3};
	double double_arr[5]{2.5,36,77,234,89.2};
	cout << "The max of int_arr is: " << max5(int_arr) << endl;
	cout << "The max of double_arr is: " << max5(double_arr) << endl;

	return 0;
}

template <class T>
T max5(T arr[])
{
	T max = arr[0];
	for (int i = 1;i < 5; i++)
		if (max < arr[i]) max = arr[i];
	return max;
}

#include <iostream>
using namespace std;

template<typename T>
long double sum_values(T value)
{
	return (long double)value;
}

template<typename T, typename... Args>
long double sum_values(T value, Args... args)
{
	return (long double)(value + sum_values(args...));
}

int main()
{
	long double data;
	data = sum_values(1, 2, 3, 4);
	cout << "sum_values(1, 2, 3, 4) = " << data << endl;
	data = sum_values(1.1, 2.2, 3.3);
	cout << "sum_values(1.1, 2.2, 3.3) = " << data << endl;
	data = sum_values(3.14);
	cout << "sum_values(3.14) = " << data << endl;

	return 0;
}

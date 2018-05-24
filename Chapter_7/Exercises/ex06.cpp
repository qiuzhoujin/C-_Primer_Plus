#include <iostream>
using namespace std;

int Fill_array(double arr[],int size);
void Show_array(double arr[],int size);
void Reverse_array(double arr[],int size);

int main()
{
	const int NUM = 20;
	double data[NUM];
	int len;
	len = Fill_array(data, NUM);
	Show_array(data, len);
	Reverse_array(data, len);
	Show_array(data, len);
	Reverse_array(data + 1, len - 2);
	Show_array(data, len);

	return 0;
}

int Fill_array(double arr[],int size)
{
	int n;
	cout << "Enter up to " << size << " double value." << endl;
	for (n = 0; n < size;n++)
	{
		cout << "Enter #" << n + 1 << ":";
		if (!(cin >> arr[n]))
		{
			break;
		}
	}
	return n;
}

void Show_array(double arr[],int size)
{
	cout << "array:";
	for (int n = 0; n < size; n++)
	{
		cout << arr[n] << ", ";
	}
	cout << '\b' << endl;
}

void Reverse_array(double arr[],int size)
{
	double temp;
	for (int n = 0; n < size / 2; n++)
	{
		temp = arr[n];
		arr[n] = arr[size - n - 1];
		arr[size - n - 1] = temp;
	}
}

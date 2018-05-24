#include <iostream>
using namespace std;

void print_str(const char * str, int num = 0);

int main()
{
	cout << "1:\n";
	print_str("First time");
	cout << "2:\n";
	print_str("Second time");
	cout << "3:\n";
	print_str("Third time",1);
	cout << "4:\n";
	print_str("Fourth time",0);
	cout << "5:\n";
	print_str("Fifth time",2);

	return 0;
}

void print_str(const char * str, int num)
{
	static int times = 0;
	times++;
	if (num == 0)
		cout << str << endl;
	else
	{
		for (int i = 0; i < times; i++)
			cout << str << endl;
	}
}

// 添加于2016-11-3，测试复合赋值操作符
#include <iostream>
using namespace std;

void show(int a,int b)
{
	cout << "a = " << a << ",b = " << b << endl;
}

int main()
{
	int a = 10,b = 2;
	cout << "org: ";
	show(a,b);
	a += b;
	cout << "a += b: ";
	show(a,b);
	a += b;
	cout << "a -= b: ";
	show(a,b);
	a <<= b;
	cout << "a <<= b: ";
	show(a,b);
	a >>= b;
	cout << "a >>= b: ";
	show(a,b);

	return 0;
}

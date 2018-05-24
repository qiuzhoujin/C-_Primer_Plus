// 添加于2016-11-5，用于测试逗号操作符
#include <iostream>
using namespace std;

int main()
{
	int a,b;
	if(a = 0,b = 1)
		cout << "a = " << a << ",b = " << b << endl;
	else
		cout << "wierd." << endl;

	return 0;
}

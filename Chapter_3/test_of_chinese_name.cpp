// 添加于2016-9-10，测试用中文命名变量等相关
// A:看来不支持中文命名，也不支持书上的用法。
#include <iostream>
using namespace std;

int main()
{
	//int k\00F6rper;
	cout << "呵呵 = " << "g\u00E2teau."<< endl;

	return 0;
}

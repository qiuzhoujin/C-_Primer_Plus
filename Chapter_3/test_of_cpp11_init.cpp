// 添加于2016-9-22，测试C++11的一些初始化情况
#include <iostream>
using namespace std;

int main()
{
	const int code = 66;
	int x = 66;
	char c0 = 22;
	//char c1 { 31325 }; // narrowing, not allowed
	char c2 = { 66 };  // allowed because char can hold 66
	char c3 {code};    // ditto
	char c4 = {x};     // not allowed, x is not constant. A:Just warning,not error
	char c6 = {c0};
	x = 31325;
	char c5 = x;       // allowed by this form of initalization

	return 0;
}

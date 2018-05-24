// 添加于2016-9-23，测试表达式中的转换
// A:确实如记忆：同类型的无符号与有符号比较，会变成无符号
//   而对于小类型与大类型一起时，即使小类型为无符号，也会转换成大类型的有符号。
#include <iostream>
using namespace std;

int main()
{
	unsigned int a = 1;
	int b = -1;
	unsigned short c = 2;
	printf("a = %u,b = %d,c = %hu.\n",a,b,c);
	if(a < b)
		printf("a < b\n");
	else
		printf("a > b\n");

	if(c < b)
		cout << "c < b" << endl;
	else
		cout << "c > b" << endl;

	return 0;
}

// 添加于2016-10-6，用于测试cin.get读取空行后的问题
// A:并未像书上P130会阻塞输入啊。
//   如果没有cin.clear()，则后续的输入直接就跳过了。
#include <iostream>
using namespace std;

int main()
{
	char temp[300];
	char str[300];
	cout << "Please enter a empty line:";
	cin.get(temp,300);
	//cin.clear();
	cout << "Please enter some words:";
	cin.get(str,300);
	cout << "You entered:" << str << endl;

	return 0;
}

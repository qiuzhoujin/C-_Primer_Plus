// 添加于2016-9-10，测试wchar_t等宽字符

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char s[50] = "我喜欢你好久了。";
	cout << s << ":" << strlen(s) << endl;

	return 0;
}

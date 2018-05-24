// 添加于2016-10-12，用于测试union相关
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	struct widget
	{
		char brand[20];
		int type;
		union             // anonymous union
		{
			long id_num;  // type 1 widgets
			char id_char[20];  // other widgets
		};
	};

	widget var;
	strcpy(var.id_char,"hehe");
	cout << "var.id_num = " << var.id_num << endl;

	return 0;
}

// 添加于2016-8-21，测试C++11的初始化方式
#include <iostream>
using namespace std;
class myclass
{
public:
	int i;
	double d;
};

int main()
{
	int hamburgers = {24};
	int emus{7};
	int rocs{};
	//myclass foo{10,20.0};
	myclass foo{};
	cout << "hamburgers is: " << hamburgers << endl;
	cout << "emus is: " << emus << endl;
	cout << "rocs is: " << rocs << endl;
	cout << "foo is: " << foo.i << "," << foo.d << endl;

	return 0;
}

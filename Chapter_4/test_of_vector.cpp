// 添加于2016-10-21，用于测试vector
#include <iostream>
#include <vector>
//using namespace std;
// 如下用法是OK的!
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<double> vd(10);
	// 可以直接使用数组下标来操作vector
	vd[0] = 12.34;
	cout << "vd[0] = " << vd[0] << endl;

	return 0;
}



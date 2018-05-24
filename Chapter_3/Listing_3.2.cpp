// exceed.cpp -- exceeding some integer limtis
// 添加于2016-8-21，测试整型越界
#include <iostream>
#define ZERO 0            // makes ZERO symbol for 0 value
#include <climits>        // defines INT_MAX as largest int value
using namespace std;

int main()
{
	short sam = SHRT_MAX; // initialize a variable to max value
	unsigned short sue = sam; // ok if variable sam already defined

	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl
		<< "Add $1 to each account." << endl << "Now ";
	sam = sam + 1;
	sue = sue + 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited.\nPoor Sam!" << endl;
	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl;
	cout << "Take $1 from each account." << endl << "Now ";
	sam = sam - 1;
	sue = sue - 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl << "Lucky Sue!" << endl;

	return 0;
}


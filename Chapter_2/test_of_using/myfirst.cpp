// myfirst.cpp -- displays a message
// 修改于2016-5-27，用于测试只using特定的名称

#include <iostream>                                    // a PREPROCESSOR directive
int main()                                             // function header
{                                                      // start of function body
	//using namespace std;                               // make definitions visible
	using std::cout;
	using std::endl;
	using std::cin;

	cout << "Come up and C++ me some time.";           // message
	cout << endl;                                      // start a new line
	cout << "You won't regret it!" << endl;            // more output
	return 0;                                          // terminate main()
}                                                      // end of function body

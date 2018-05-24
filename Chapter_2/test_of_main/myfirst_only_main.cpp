// myfirst_only_main.cpp -- 测试无返回类型的main函数
// A:用g++无其它选项时，无报错,运行时也一切正常

#include <iostream>                                    // a PREPROCESSOR directive
main()                                             // function header
{                                                      // start of function body
	using namespace std;                               // make definitions visible
	cout << "Come up and C++ me some time.";           // message
	cout << endl;                                      // start a new line
	cout << "You won't regret it!" << endl;            // more output
	return 0;                                          // terminate main()
}                                                      // end of function body

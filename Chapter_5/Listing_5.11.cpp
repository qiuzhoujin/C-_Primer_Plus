// compstr1.cpp -- comparing strings using arrays
#include <iostream>
#include <cstring>      // prototype for strcmp()
using namespace std;

/*
int main()
{
	char word[5] = "?ate";
	int res;
	for(char ch = 'a'; res = strcmp(word, "mate"); ch++)
	{
		cout << word << ",res = " << res << endl;
		word[0] = ch;
	}
	cout << "After loop ends,word is " << word << endl;

	return 0;
}
*/

// 添加于2016-11-8，用于测试zoo与Zoo哪个在前.
// A:zoo即小写的在前。
int main()
{
	if(strcmp("zoo","Zoo") < 0)
		cout << "\"zoo\" is less than \"Zoo\"" << endl;
	else
		cout << "\"zoo\" is greater than \"Zoo\"" << endl;

	return 0;
}

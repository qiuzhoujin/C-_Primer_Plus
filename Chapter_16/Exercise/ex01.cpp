#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <iterator>
using namespace std;

bool IsPalindrome(string & str);
bool IsValidString(string & str);

int main()
{
	string s;
	cout << "Enter a string (quit to quit): ";
	getline(cin, s);
	while (s != "quit")
	{
		if (IsValidString(s))
		{
			if (IsPalindrome(s))
				cout << s << " is a panlindrome.\n";
			else
				cout << "Sorry, " << s << " is not a panlindrome.\n";
		}
		else
			cout << "Please enter lowercase character.\n";
		cout << "Enter a string (quit to quit): ";
		getline(cin, s);
	}

	return 0;
}

bool IsPalindrome(string & str)
{
	string temp;
	temp.insert(temp.begin(), str.rbegin(), str.rend());
	return temp == str;
}

bool IsValidString(string & str)
{
	for (int i = 0; i < str.size(); i++)
	{
		if (!islower(str[i])) return false;
	}
	return true;
}

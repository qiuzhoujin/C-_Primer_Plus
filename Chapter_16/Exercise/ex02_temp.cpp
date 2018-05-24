#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <iterator>
#include <vector>
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
		if (IsPalindrome(s))
			cout << s << " is a panlindrome.\n";
		else
			cout << "Sorry, " << s << " is not a panlindrome.\n";
		cout << "Enter a string (quit to quit): ";
		getline(cin, s);
	}

	return 0;
}

bool IsAlpha(char c)
{
	bool temp = (bool)isalpha(c);
	cout << c << " isalha: " << temp << endl;
	return temp;
}

void ToLower(string & str)
{
	for (int i = 0; i < str.size(); i++)
		str[i] = tolower(str[i]);
}

bool IsPalindrome(string & str)
{
	vector<char> temp;
	back_insert_iterator<vector<char> > back_iter(temp);
	copy_if(str.begin(), str.end(), back_iter, IsAlpha);
	string all_letter(temp.size(), '\0');
	copy(temp.begin(), temp.end(), all_letter.begin());
	cout << "all_letter.size(): " << all_letter.size() << endl;
	cout << "before tolower: " << all_letter << endl;
	ToLower(all_letter);
	cout << "after tolower: " << "\"" << all_letter << "\"" << endl;
	string res(all_letter.rbegin(), all_letter.rend());
	cout << "res.length(): " << res.length() << endl;
	cout << "res: " << "\"" << res << "\"" << endl;
	return res == all_letter;
}

bool IsValidString(string & str)
{
	for (int i = 0; i < str.size(); i++)
	{
		if (!islower(str[i])) return false;
	}
	return true;
}

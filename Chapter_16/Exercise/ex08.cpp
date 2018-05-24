#include <iostream>
#include <set>
#include <algorithm>
#include <string>
using namespace std;

void show_names(set<string> names);

int main()
{
	string str;
	set<string> friends_of_mat;
	set<string> friends_of_pat;
	set<string> friends_all;

	cout << "Hello Mat, please enter your friends' names(quit to quit):\n";
	while (cin >> str && str != "quit")
	{
		friends_of_mat.insert(str);
	}
	cout << "Thanks Mat, your friends' names in sorted order are:\n";
	show_names(friends_of_mat);

	cout << "Hello Pat, please enter your friends' names(quit to quit):\n";
	while (cin >> str && str != "quit")
	{
		friends_of_pat.insert(str);
	}
	cout << "Thanks Pat, your friends' names in sorted order are:\n";
	show_names(friends_of_pat);
	set_union(friends_of_mat.begin(), friends_of_mat.end(),
			friends_of_pat.begin(), friends_of_pat.end(),
			insert_iterator<set<string> >(friends_all, friends_all.begin()));
	cout << "And all your friends' names in sorted order are:\n";
	show_names(friends_all);

	return 0;
}

void show_names(set<string> names)
{
	for (auto it = names.begin(); it != names.end(); it++)
	{
		cout << *it << endl;
	}
}

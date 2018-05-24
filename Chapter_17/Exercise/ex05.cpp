#include <iostream>
#include <set>
#include <algorithm>
#include <string>
#include <fstream>
using namespace std;

void show_names(set<string> names);

int main()
{
	string str;
	set<string> friends_of_mat;
	set<string> friends_of_pat;
	set<string> friends_all;

	ifstream fin("mat.dat", ios_base::in | ios_base::binary);
	while (getline(fin, str))
	{
		friends_of_mat.insert(str);
	}
	cout << "Mat's friends' names in sorted order are:\n";
	show_names(friends_of_mat);
	fin.close();

	fin.open("pat.dat", ios_base::in | ios_base::binary);
	while (getline(fin, str))
	{
		friends_of_pat.insert(str);
	}
	cout << "Pat's friends' names in sorted order are:\n";
	show_names(friends_of_pat);
	fin.close();

	set_union(friends_of_mat.begin(), friends_of_mat.end(),
			friends_of_pat.begin(), friends_of_pat.end(),
			insert_iterator<set<string> >(friends_all, friends_all.begin()));
	ofstream fout("matnpat.dat", ios_base::out | ios_base::binary);
	for (auto it = friends_all.begin(); it != friends_all.end(); it++)
	{
		fout << *it << endl;
	}
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

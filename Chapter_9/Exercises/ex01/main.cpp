#include <iostream>
#include "golf.h"
using namespace std;

int options();

int main()
{
	const int SIZE = 4;
	golf records[4];
	int cnt = 0;

	cout << "Please enter up to " << SIZE 
		<< " records of golf(empty line to terminate input).\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << "#" << i + 1 << ":\n";
		if (setgolf(records[i]) == 0)
			break;
		cnt++;
	}
	int choice;
	choice = options();
	while (choice != 5)
	{
		int idx;
		if (choice != 4)
		{
			cout << "Enter the index to be operated(0-" << cnt - 1 << "):";
			cin >> idx;
			cin.get();
		}
		char name[Len];
		int cap;
		switch (choice)
		{
			case 1:
				cout << "Please enter the new handicap:";
				cin >> cap;
				cin.get();
				handicap(records[idx], cap);
				break;
			case 2:
				cout << "Please enter the new name:";
				cin.getline(name, Len);
				cout << "Please enter the new handicap:";
				cin >> cap;
				cin.get();
				setgolf(records[idx], name, cap);
				break;
			case 3:
				showgolf(records[idx]);
				break;
			case 4:
				for (int i = 0; i < cnt; i++)
					showgolf(records[i]);
				break;
		}
		choice = options();
	}

	return 0;
}

int options()
{
	int choice;
	cout << "Options:\n";
	cout << "1:set handicap only.\n";
	cout << "2:set name and handicap.\n";
	cout << "3:show one record.\n";
	cout << "4:show all records.\n";
	cout << "5:quit the program.\n";
	cin >> choice;
	cin.get();
	return choice;
}

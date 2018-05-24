#include <iostream>
using namespace std;

const int strsize = 50;
const int arrsize = 5;
// Benevolent Order of Programmers name structure
struct bop {
	char fullname[strsize];  // real name
	char title[strsize];     // job title
	char bopname[strsize];   // secret BOP name
	int preference;          // 0 = fullname, 1 = title, 2 = bopname
};

int main()
{
	bop bops[arrsize] = 
	{
		{"Wimp Macho","Senior Programmer","Weak",0},
		{"Raki Rhodes","Junior Programmer","Bod",1},
		{"Celia Laiter","Senior Programmer","MIPS",2},
		{"Hoppy Hipman","Analyst Trainee","Intel",1},
		{"Pat Hand","Project Manager","LOOPY",2}
	};
	char ch;
	int i;
	cout << "Benevolent Order of Programmers Report\n";
	cout << "a.display by name    b.display by title\n";
	cout << "c.display by bopname d.display by preference\n";
	cout << "q.quit\n";
	cout << "Enter your choice: ";
	cin >> ch;
	while ( ch != 'q')
	{
		for (i = 0; i < arrsize; i++)
		{
			switch (ch)
			{
				case 'a':
					cout << bops[i].fullname << endl;
					break;
				case 'b':
					cout << bops[i].title << endl;
					break;
				case 'c':
					cout << bops[i].bopname << endl;
					break;
				case 'd':
					switch (bops[i].preference)
					{
						case 0:
							cout << bops[i].fullname << endl;
							break;
						case 1:
							cout << bops[i].title << endl;
							break;
						case 2:
							cout << bops[i].bopname << endl;
							break;
						default:
							cout << "The program should not go here.\n";
					}
					break;
				default:
					cout << "Please ener the correct choice!\n";
			}
		}
		cout << "Next choice: ";
		cin >> ch;
	}
	cout << "Bye!\n";

	return 0;
}

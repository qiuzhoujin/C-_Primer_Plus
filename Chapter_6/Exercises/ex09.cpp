#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

struct contributor
{
	string name;
	double contribution;
};

int main()
{
	contributor *contributors;
	int num;
	ifstream fin;
	string filename;
	cout << "Enter the filename of the list:";
	getline(cin,filename);
	fin.open(filename.c_str());
	if (!fin.is_open())
	{
		cout << filename << " open error.\n";
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	(fin >> num).get();
	contributors = new contributor[num];
	int i;
	for (i = 0; i < num; i++)
	{
		getline(fin,contributors[i].name);
		(fin >> contributors[i].contribution).get();
	}
	int cnt;
	cout << "Grand Patrons\n";
	for (i = 0, cnt = 0; i < num; i++)
	{
		if (contributors[i].contribution >= 10000)
		{
			cout << contributors[i].name << " : " << contributors[i].contribution << endl;
			cnt++;
		}
	}
	if (cnt == 0)
		cout << "none.\n";
	cout << "Patrons\n";
	for (i = 0, cnt = 0; i < num; i++)
	{
		if (contributors[i].contribution < 10000)
		{
			cout << contributors[i].name << " : " << contributors[i].contribution << endl;
			cnt++;
		}
	}
	if (cnt == 0)
		cout << "none.\n";

	return 0;
}

#include <iostream>
#include <string>
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
	cout << "Enter the number of contributors:";
	(cin >> num).get();
	contributors = new contributor[num];
	int i;
	for (i = 0; i < num; i++)
	{
		cout << "Enter the #" << i + 1 << " contributor's name: ";
		getline(cin,contributors[i].name);
		cout << "Enter the contribution: ";
		(cin >> contributors[i].contribution).get();
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

// 添加于2016-8-6:ex2.7
#include <iostream>
using namespace std;

void show_time(int hours,int minutes)
{
	cout << "Time: " << hours << ":" << minutes << endl;
}

int main()
{
	int h,m;
	cout << "Enter the number of hours:";
	cin >> h;
	cout << "Enter the number of minutes:";
	cin >> m;
	show_time(h,m);

	return 0;
}

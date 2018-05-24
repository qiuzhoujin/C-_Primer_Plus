// 添加于2016-10-1
#include <iostream>
using namespace std;

int main()
{
	const int hours_per_day = 24;
	const int mins_per_hour = 60;
	const int sec_per_min   = 60;

	long long seconds;
	int days,hours,mins,secs;
	long long remain;

	cout << "Enter the number of seconds: ";
	cin >> seconds;
	days = seconds / (hours_per_day * mins_per_hour * sec_per_min);
	remain = seconds % (hours_per_day * mins_per_hour * sec_per_min);
	hours = remain / (mins_per_hour * sec_per_min);
	remain = remain % (mins_per_hour * sec_per_min);
	mins = remain / sec_per_min;
	secs = remain % sec_per_min;
	cout << seconds << " = " << days << " days, " << hours << " hours, " 
		<< mins << " minutes, " << secs << " seconds" << endl;

	return 0;
}

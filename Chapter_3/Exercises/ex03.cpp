// 添加于2016-10-1
#include <iostream>
using namespace std;

int main()
{
	const double sec_per_min = 60.0;
	const double min_per_degree = 60.0;
	double degrees,minutes,seconds;
	cout << "Enter a latitude in degrees, minutes, and seconds:\n";
	cout << "First, enter the degree: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >>  minutes;
	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;
	cout << degrees << " degrees, " << minutes << " minutes, " << seconds 
		<< " seconds = " << (degrees + minutes / min_per_degree + seconds / (sec_per_min*min_per_degree))
		<< " degrees\n";

	return 0;
}

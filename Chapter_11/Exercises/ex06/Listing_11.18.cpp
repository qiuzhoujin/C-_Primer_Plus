// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "Listing_11.16.h"
void display(const Stonewt & st);

int main()
{
	Stonewt arr[6] = {
		275,
		Stonewt(285.7),
		Stonewt(21, 8),
	};
	Stonewt minStone = arr[0];
	Stonewt maxStone = arr[0];
	Stonewt elevenStone(11, 0);
	int i;
	int cnt = 0;

	cout << "Enter up to three Stonewt objects in pounds form:\n";
	for (i = 1; i <= 3; i++)
	{
		double pounds;
		cout << "#" << i << ":";
		while (!(cin >> pounds))
		{
			cout << "Please enter a double:";
			cin.clear();
			while (cin.get() != '\n') continue;
		}
		arr[i + 2] = pounds;
	}
	if (arr[0] >= elevenStone) cnt++;
	for (i = 1; i < 6; i++)
	{
		if (arr[i] < minStone) minStone = arr[i];
		if (arr[i] > maxStone) maxStone = arr[i];
		if (arr[i] >= elevenStone) cnt++;
	}
	cout << "The smallest element is:\n";
	display(minStone);
	cout << "The largest element is:\n";
	display(maxStone);
	cout << "There're " << cnt << " elements greater or equal to 11 stone.\n";

	return 0;
}

void display(const Stonewt & st)
{
	st.show_stn();
	st.show_lbs();
}

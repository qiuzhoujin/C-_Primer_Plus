#include <iostream>
#include <set>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;

vector<int> Lotto(int no_all_spots, int no_sel_spots);

int main()
{
	int all, sel;
	vector<int> winners;
	srand(time(0));
	cout << "Enter number of spots on a lottery card,\n"
	   << "and the number of spots selectd(# to quit):";
	while (cin >> all && cin >> sel)
	{
		winners = Lotto(all, sel);
		random_shuffle(winners.begin(), winners.end());
		cout << "The winners are: ";
		for (int i = 0; i < sel; i++)
		{
			cout << winners[i];
			if (i == sel - 1) cout << endl;
			else cout << ", ";
		}
		cout << "Enter number of spots on a lottery card,\n"
		   << "and the number of spots selectd(# to quit):";
	}

	return 0;
}

vector<int> Lotto(int no_all_spots, int no_sel_spots)
{
	set<int> res;
	int sel_spot;
	do
	{
		sel_spot = rand() % no_all_spots + 1;
		res.insert(sel_spot);
	}
	while (res.size() != no_sel_spots);

	return vector<int>(res.begin(), res.end());
}

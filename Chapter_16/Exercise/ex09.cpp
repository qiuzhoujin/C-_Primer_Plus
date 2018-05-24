#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;

const int SIZE = 10000000;

int main()
{
	int i;
	vector<int> vi0(SIZE);
	for (i = 0; i < SIZE; i++)
		vi0[i] = rand();
	vector<int> vi(vi0.begin(), vi0.end());
	list<int> li(vi0.begin(), vi0.end());
	clock_t start, end;

	start = clock();
	sort(vi.begin(), vi.end());
	end = clock();
	cout << "The time to sort vi using the STL sort() algorighm: "
		<< (double)(end - start) / CLOCKS_PER_SEC << " s\n";
	
	start = clock();
	li.sort();
	end = clock();
	cout << "The time to sort li using the list sort() method: "
		<< (double)(end - start) / CLOCKS_PER_SEC << " s\n";

	copy(vi0.begin(), vi0.end(), li.begin());
	start = clock();
	copy(li.begin(), li.end(), vi.begin());
	sort(vi.begin(), vi.end());
	copy(vi.begin(), vi.end(), li.begin());
	end = clock();
	cout << "The time of combined operation: "
		<< (double)(end - start) / CLOCKS_PER_SEC << " s\n";

	return 0;
}

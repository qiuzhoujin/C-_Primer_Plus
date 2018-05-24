#include <iostream>
#include <cstring>
using namespace std;
const int STR_LIM = 50;

int main()
{
	char word[STR_LIM];
	int num = 0;
	cout << "Enter words (to stop, type the word done):\n";
	/*cin >> word;
	while(strcmp(word,"done") != 0)
	{
		num++;
		cin >> word;
	}*/
	while(cin >> word && strcmp("done",word))
		++num;
	cout << "You entered a total of " << num << " words.\n";

	return 0;
}

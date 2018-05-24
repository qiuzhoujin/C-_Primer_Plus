#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word;
	int num = 0;
	cout << "Enter words (to stop, type the word done):\n";
	/*cin >> word;
	while(strcmp(word,"done") != 0)
	{
		num++;
		cin >> word;
	}*/
	while(cin >> word && ("done" != word))
		++num;
	cout << "You entered a total of " << num << " words.\n";

	return 0;
}

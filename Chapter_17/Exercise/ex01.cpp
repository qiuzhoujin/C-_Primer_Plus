#include <iostream>
#include <string>
using namespace std;

int main()
{
	char c;
	int cnt = 0;
	while (cin.get(c) && (c != '$'))
	{
		cnt++;
	}
	if (c == '$')
		cin.putback(c);
	else
		cout << "End of input was reached.\n";
	cout << cnt << " characters read." << endl;
	cin.get(c);
	cout << "The next input character is " << c << endl;

	return 0;
}

// jump.cpp -- using continue and break
#include <iostream>
using namespace std;
const int ArSize = 80;

int main()
{
	char line[ArSize];
	int spaces = 0;

	cout << "Enter a line of text:\n";
	cin.get(line, ArSize);
	cout << "Complete line:\n" << line << endl;
	cout << "Line through first period:\n";
	for (int i = 0; line[i] != '\n'; i++)
	{
		cout << line[i];     // display character
		if (line[i] == '.')  // quit if it's a period
			break;
		if (line[i] != ' ')  // skip rest of loop
			continue;
		spaces++;
	}
	cout << "\n" << spaces << " spaces\n";
	cout << "Done.\n";

	return 0;
}

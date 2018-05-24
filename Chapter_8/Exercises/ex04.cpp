#include <iostream>
#include <cstring>       // for strlen(), strcpy()
using namespace std;

struct stringy {
	char * str;      // points to a string
	int ct;          // length of string (not counting '\0')
};

void set(stringy &stry, const char* src);
void show(const stringy &stry, int times = 1);
void show(const char * str, int times = 1);

int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";

	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");

	return 0;
}

void set(stringy &stry, const char* src)
{
	stry.ct = strlen(src);
	stry.str = new char[stry.ct + 1];
	strcpy(stry.str, src);
}

void show(const stringy &stry, int times)
{
	while (times-- > 0)
		cout << stry.str << endl;
}

void show(const char * str, int times)
{
	while (times-- > 0)
		cout << str << endl;
}

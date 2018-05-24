#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Person{
private:
	static const int LIMIT = 25;
	string lname;      // Person's last name
	char fname[LIMIT]; // Person's first name
public:
	Person() {lname = ""; fname[0] = '\0'; } // #1
	Person(const string & ln, const char *fn = "Heyyou");  // #2
	// the following methods display lname and fname
	void Show() const;       // firstname lastname format
	void FormalShow() const; // lastname, firstname format
};

Person::Person(const string & ln, const char *fn)
{
	lname = ln;
	strncpy(fname, fn, LIMIT);
}

void Person::Show() const
{
	cout << fname << " " << lname << endl;
}

void Person::FormalShow() const
{
	cout << lname << ", " << fname << endl;
}

int main()
{
	Person one;                      // use default constructor
	Person two("Smythecraft");       // use #2 with one default argument
	Person three("Dimwiddy", "Sam"); // use #2, no defaults
	cout << "one:" << endl;
	one.Show();
	one.FormalShow();
	cout << "two:" << endl;
	two.Show();
	two.FormalShow();
	cout << "three:" << endl;
	three.Show();
	three.FormalShow();

	return 0;
}

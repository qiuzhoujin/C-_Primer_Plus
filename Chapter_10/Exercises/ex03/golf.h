// golf.h -- for pe10-3.cpp
#include <string>
using std::string;

class golf
{
private:
	string fullname;
	int handicap;
public:
	golf();
	// non-interactive version
	golf(const string & name, int hc);
	// interactive version
	int setgolf();
	// function resets handicap to new value
	void reset_handicap(int hc);
	// function displays contents of golf structure
	void showgolf();
};

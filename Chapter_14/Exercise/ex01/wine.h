#ifndef WINE_H_
#define WINE_H_
#include <valarray>
#include <string>
#include "pairs.h"
typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;
using std::string;

class Wine
{
private:
	string name;
	PairArray info; // first array - vintage years, second array - bottles
	int years;      // the length of array,i.e. number of years
public:
	Wine(const char * l, int y, const int yr[], const int bot[]) : name(l),
		years(y), info(ArrayInt(yr, y), ArrayInt(bot, y)) {}
	Wine(const char * l, int y) : name(l),
		years(y), info(ArrayInt(y), ArrayInt(y)) {}
	void GetBottles();
	string & Label() { return name; }
	int sum();
	void Show();
};
#endif

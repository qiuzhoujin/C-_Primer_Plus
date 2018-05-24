#ifndef WINE_H_
#define WINE_H_
#include <valarray>
#include <string>
#include "pairs.h"
using std::string;
typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine : private string, private PairArray
{
	// about PairArray : first array - vintage years, second array - bottles
private:
	int years;      // the length of array,i.e. number of years
public:
	Wine(const char * l = "none" , int y = 0) : string(l),
		years(y), PairArray(ArrayInt(y), ArrayInt(y)) {}
	Wine(const char * l, int y, const int yr[], const int bot[]) : string(l),
		years(y), PairArray(ArrayInt(yr, y), ArrayInt(bot, y)) {}
	Wine(const char *l, const ArrayInt yr, const ArrayInt bot);
	Wine(const char *l, const PairArray & yr_bot) : string(l),
		years(yr_bot.first().size()), PairArray(yr_bot) {}
	void GetBottles();
	const string & Label() const { return (const string &)(*this); }
	int sum() { return PairArray::second().sum(); }
	void Show() const;
};
#endif

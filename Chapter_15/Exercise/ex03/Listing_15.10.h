// exc_mean.h -- exception classes for hmean(), gmean()
#include <iostream>
#include <string>
#include <stdexcept>
using std::string;
using std::cout;
using std::logic_error;

class bad_mean : public logic_error
{
private:
	double x;
	double y;
public:
	bad_mean(double a, double b, const string & s) :
			x(a), y(b), logic_error(s) { }
	const char * what() {
		cout << x << ", " << y << ": ";
		return logic_error::what();
	}
};

class bad_hmean : public bad_mean
{
public:
	bad_hmean(double a, double b) : 
		bad_mean(a, b, "hmean() invalid arguments: a = -b\n"){ }
};

class bad_gmean : public bad_mean
{
public:
	bad_gmean(double a, double b) : 
		bad_mean(a, b, "gmean() arguments should be >= 0\n"){}
};

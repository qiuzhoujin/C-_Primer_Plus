// exc_mean.h -- exception classes for hmean(), gmean()
#include <iostream>
#include <string>
#include <stdexcept>
using std::string;
using std::logic_error;

class bad_hmean : public logic_error
{
public:
	// Todo:clean
	//bad_hmean("bad_hmean,invalid arguments: a = -b") : logic_error(s){}
	bad_hmean(const string & s) : logic_error(s){}
	const char *what() {
		std::cout << "bad_hmean exception:\n";
		return logic_error::what();
	}
};

class bad_gmean : public logic_error
{
public:
	bad_gmean(const string & s) : logic_error(s){}
	const char *what() {
		std::cout << "bad_gmean exception:\n";
		return logic_error::what();
	}
};

#include <iostream>
#include "emp.h"
using namespace std;

abstr_emp::abstr_emp()
{
	fname = "nobody";
	lname = "nobody";
	job = "nojob";
}

abstr_emp::abstr_emp(const std::string & fn, const std::string & ln,
			const std::string & j)
	: fname(fn), lname(ln), job(j)
{
}

void abstr_emp::ShowAll() const
{
	cout << *this;
	cout << "Job: " << job << endl;
}

void abstr_emp::SetAll()
{
	cout << "Enter first name: ";
	getline(cin, fname);
	cout << "Enter last name: ";
	getline(cin, lname);
	cout << "Enter the job: ";
	getline(cin, job);
}

std::ostream & operator<<(std::ostream & os, const abstr_emp & e)
{
	os << "First Name: " << e.fname << endl;
	os << "Last Name: " << e.lname << endl;
}

abstr_emp::~abstr_emp()
{
}

employee::employee() 
		: abstr_emp()
{
}

employee::employee(const std::string & fn, const std::string & ln,
			const std::string & j)
		: abstr_emp(fn, ln, j)
{
}

void employee::ShowAll() const
{
	abstr_emp::ShowAll();
	cout << endl;
}

void employee::SetAll()
{
	abstr_emp::SetAll();
}


manager::manager()
		: abstr_emp(), inchargeof(0)
{
}

manager::manager(const std::string & fn, const std::string & ln,
			const std::string & j, int ico)
		: abstr_emp(fn, ln, j), inchargeof(ico)
{
}

manager::manager(const abstr_emp & e, int ico)
		: abstr_emp(e), inchargeof(ico)
{
}

manager::manager(const manager & m)
		: abstr_emp(m), inchargeof(m.inchargeof)
{
}

void manager::ShowAll() const
{
	abstr_emp::ShowAll();
	cout << "In charge of " << inchargeof << " employee.\n";
	cout << endl;
}

void manager::SetAll()
{
	abstr_emp::SetAll();
	cout << "Enter the number of employee managed:";
	cin >> inchargeof;
	while (cin.get() != '\n') continue;
}

fink::fink() : abstr_emp(), reportsto("none")
{
}

fink::fink(const std::string & fn, const std::string & ln,
	 const std::string & j, const std::string & rpo)
		: abstr_emp(fn, ln, j), reportsto(rpo)
{
}

fink::fink(const abstr_emp & e, const std::string & rpo)
		: abstr_emp(e), reportsto(rpo)
{
}

fink::fink(const fink & e)
		: abstr_emp(e), reportsto(e.reportsto)
{
}

void fink::ShowAll() const
{
	abstr_emp::ShowAll();
	cout << "Reports to " << reportsto << endl;
	cout << endl;
}

void fink::SetAll()
{
	abstr_emp::SetAll();
	cout << "Enter to whom fink reports: ";
	getline(cin, reportsto);
}

highfink::highfink()
		: abstr_emp(), manager(), fink()
{
}

highfink::highfink(const std::string & fn, const std::string & ln,
		 const std::string & j, const std::string & rpo,
		 int ico)
		: abstr_emp(fn, ln, j), manager(fn, ln, j, ico),
		  fink(fn, ln, j, rpo)
{
}

highfink::highfink(const abstr_emp & e, const std::string & rpo, int ico)
		: abstr_emp(e), manager(e, ico), fink(e, rpo)
{
}

highfink::highfink(const fink & f, int ico)
		: abstr_emp(f), manager(f, ico), fink(f)
{
}

highfink::highfink(const manager & m, const std::string & rpo)
		: abstr_emp(m), manager(m), fink(m, rpo)
{
}

highfink::highfink(const highfink & h)
		: abstr_emp(h), manager(h), fink(h)
{
}

void highfink::ShowAll() const
{
	abstr_emp::ShowAll();
	cout << "In charge of " << manager::InChargeof() << " employee.\n";
	cout << "Reports to " << fink::ReportsTo() << endl;
	cout << endl;
}

void highfink::SetAll()
{
	abstr_emp::SetAll();
	cout << "Enter the number of employee managed:";
	cin >> manager::InChargeof();
	while (cin.get() != '\n') continue;
	cout << "Enter to whom fink reports: ";
	getline(cin, fink::ReportsTo());
}

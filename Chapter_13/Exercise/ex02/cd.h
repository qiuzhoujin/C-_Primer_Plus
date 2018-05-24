#ifndef _CD_H_
#define _CD_H_
// base class
class Cd { // represents a CD disk
private:
	char * performers;
	char * label;
	int selections;     // number of selections
	double playtime;    // playing time in minutes
public:
	Cd();
	Cd(const char * s1, const char * s2, int n, double x);
	Cd(const Cd &d);
	virtual ~Cd();
	virtual void Report() const; // report all CD data
	Cd & operator=(const Cd &d);
};
#endif

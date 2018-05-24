#ifndef _CLASSIC_H_
#define _CLASSIC_H_
#include "cd.h"
class Classic : public Cd
{
private:
	char  * primary_work;  // the primary work on the CD
public:
	Classic();
	Classic(const char * s0, const char * s1, const char * s2, int n, double x);
	Classic(const char * s0, Cd & d);
	Classic(const Classic & c);
	virtual ~Classic();
	virtual void Report() const;
	Classic & operator=(const Classic & c);
};
#endif

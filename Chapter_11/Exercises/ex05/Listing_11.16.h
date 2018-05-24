// stonewt.h -- definition for the Stonewt class 
#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>
class Stonewt
{
public:
	enum Form {STONE,      // in stone form
		       I_POUNDS,   // in integer pounds form
			   F_POUNDS};  // in floating-point pounds form
private:
	enum {Lbs_per_stn = 14};       // pounds per stone
	int stone;                     // whole stones
	double pds_left;               // fractional pounds
	double pounds;                 // entire weight in pounds
	Form form;                     // STONE, I_POUNDS, or F_POUNDS
public:
	Stonewt(double lbs);           // constructor for double pounds
	Stonewt(int stn, double lbs);  // constructor for stone,lbs
	Stonewt();                     // default constructor
	~Stonewt();
	void stone_form();             // set form to STONE
	void i_pounds_form();          // set form to I_POUNDS
	void f_pounds_form();          // set form to F_POUNDS
	friend std::ostream & operator<<(std::ostream & os, const Stonewt & w);
	Stonewt operator+(const Stonewt & w) const;
	Stonewt operator-(const Stonewt & w) const;
	Stonewt operator*(double multi) const;
	friend Stonewt operator*(double multi, const Stonewt & w)
	{
		return w * multi;
	}
};
#endif

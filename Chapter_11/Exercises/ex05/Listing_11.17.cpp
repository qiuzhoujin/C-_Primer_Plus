// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "Listing_11.16.h"

// constructor Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
	stone = int (lbs) / Lbs_per_stn;  // interger division
	pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}

// constructor Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt()      // default construcor, wt = 0
{
	stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()     // destructor
{
}

void Stonewt::stone_form()             // set form to STONE
{
	form = STONE;
}

void Stonewt::i_pounds_form()          // set form to I_POUNDS
{
	form = I_POUNDS;
}

void Stonewt::f_pounds_form()          // set form to F_POUNDS
{
	form = F_POUNDS;
}

std::ostream & operator<<(std::ostream & os, const Stonewt & w)
{
	switch (w.form)
	{
		// Todo:Check if it's ok for STONE
		case Stonewt::STONE:
			cout << w.stone << " stone, " << w.pds_left << " pounds\n";
			break;
		case Stonewt::I_POUNDS:
			cout << (int)(w.pounds + 0.5) << " pounds\n";
			break;
		case Stonewt::F_POUNDS:
			cout << w.pounds << " pounds\n";
			break;
		default:
			cout << "Error!\n";
			break;
	}
}

Stonewt Stonewt::operator+(const Stonewt & w) const
{
	double temp = this->pounds + w.pounds;
	return Stonewt(temp);
}

Stonewt Stonewt::operator-(const Stonewt & w) const
{
	double temp = this->pounds - w.pounds;
	return Stonewt(temp);
}

Stonewt Stonewt::operator*(double multi) const
{
	double temp = pounds * multi;
	return Stonewt(temp);
}

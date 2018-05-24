// use_tv.cpp -- using the Tv and Remote classes
#include <iostream>
#include "Listing_15.1.h"

int main()
{
	using std::cout;
	Tv s42;
	cout << "Initial settings for 42\" TV:\n";
	s42.settings();
	s42.onoff();
	s42.chanup();
	cout << "\nAdjusted setting for 42\" TV:\n";
	s42.settings();

	Remote grey;

	grey.set_chan(s42, 10);
	grey.volup(s42);
	grey.volup(s42);
	cout << "\n42\" settings after using remote:\n";
	s42.settings();

	Tv s58(Tv::On);
	s58.set_mode();
	grey.set_chan(s58, 28);
	cout << "\n58\" setting:\n";
	s58.settings();

	cout << "\nGrey remote setting:\n";
	grey.settings();
	s58.set_remote_mode(grey);
	cout << "Setting after using TV:\n";
	grey.settings();
	s58.onoff();
	s58.set_remote_mode(grey);
	cout << "Setting after using TV(off):\n";
	grey.settings();

	return 0;
}

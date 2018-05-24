#include "vintagePort.h"
#include <cstring>

VintagePort::VintagePort() : Port("none", "vintage")
{
	nickname = new char[sizeof("none")];
	strcpy(nickname, "none");
}

VintagePort::VintagePort(const char * br, int b, const char * nn, int y)
							: Port(br, "vintage", b), year(y)
{
	nickname = new char[strlen(nn) + 1];
	strcpy(nickname, nn);
}

VintagePort::VintagePort(const VintagePort & vp) : Port(vp)
{
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
}

VintagePort & VintagePort::operator=(const VintagePort & vp)
{
	if (this == &vp)
		return *this;
	delete nickname;
	Port::operator=(vp);
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
}

void VintagePort::Show() const
{
	Port::Show();
	cout << "Nickname: " << nickname << endl;
	cout << "Year: " << year << endl;
}

ostream & operator<<(ostream & os, const VintagePort & vp)
{
	os << (const Port &) vp;
	os << vp.nickname << ", " << vp.year << endl;
	return os;
}

// dma.cpp -- dma class methods
#include "dma.h"
#include <cstring>

// AbcDMA methods
AbcDMA::AbcDMA(const char * l, int r)
{
	label = new char[std::strlen(l) + 1];
	std::strcpy(label, l);
	rating = r;
}

AbcDMA::AbcDMA(const AbcDMA & rs)
{
	label = new char[std::strlen(rs.label) + 1];
	std::strcpy(label, rs.label);
	rating = rs.rating;
}

AbcDMA::~AbcDMA()
{
	delete [] label;
}

AbcDMA & AbcDMA::operator=(const AbcDMA & rs)
{
	if (this == &rs)
		return *this;
	delete [] label;
	label = new char[std::strlen(rs.label) + 1];
	std::strcpy(label, rs.label);
	rating = rs.rating;
	return *this;
}

void AbcDMA::View()
{
	std::cout << *this;
}

std::ostream & operator<<(std::ostream & os, const AbcDMA & rs)
{
	os << "Label: " << rs.label << std::endl;
	os << "Rating: " << rs.rating << std::endl;
	return os;
}

// baseDMA methods
baseDMA::baseDMA(const char * l, int r) : AbcDMA(l, r)
{
}

void baseDMA::View()
{
	std::cout << *this;
}

// lacksDMA methods
lacksDMA::lacksDMA(const char * c, const char * l, int r)
	: AbcDMA(l, r)
{
	std::strncpy(color, c, 39);
	color[39] = '\0';
}

lacksDMA::lacksDMA(const char * c, const AbcDMA & rs)
	: AbcDMA(rs)
{
	std::strncpy(color, c, 39);
	color[39] = '\0';
}

void lacksDMA::View()
{
	AbcDMA::View();
	std::cout << "Color: " << color << std::endl;
}

// hasDMA methods
hasDMA::hasDMA(const char * s, const char * l, int r)
		: AbcDMA(l, r)
{
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}

hasDMA::hasDMA(const char * s, const AbcDMA & rs)
		 : AbcDMA(rs)
{
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA & hs)
		 : AbcDMA(hs)      // invoke base class copy constructor
{
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
	delete [] style;
}

hasDMA & hasDMA::operator=(const hasDMA & hs)
{
	if (this == & hs)
		return *this;
	AbcDMA::operator=(hs);    // copy base portion
	delete [] style;           // prepare for new style
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
	return * this;
}

void hasDMA::View()
{
	AbcDMA::View();
	std::cout << "Style: " << style << std::endl;
}

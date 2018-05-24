// dma.h -- inheritance and dynamic memory allocation
#ifndef DMA_H_
#define DMA_H_
#include <iostream>

// Abstract Base Class for DMA
class AbcDMA
{
private:
	char * label;
	int rating;
public:
	AbcDMA(const char * l = "null", int r = 0);
	AbcDMA(const AbcDMA & rs);
	virtual ~AbcDMA() = 0;
	AbcDMA & operator=(const AbcDMA & rs);
	virtual AbcDMA & operator*() { return *this; }
	virtual void View() const;
	friend std::ostream & operator<<(std::ostream & os,
									 const AbcDMA & rs);
};

// Base Class Using DMA
class baseDMA : public AbcDMA
{
private:
public:
	baseDMA(const char * l = "null", int r = 0);
};

// derived class without DMA
// no destructor needed
// uses implicit copy constructor
// uses implicit assignment operator
class lacksDMA : public AbcDMA
{
private:
	char color[40];
public:
	lacksDMA(const char * c = "blank", const char * l = "null",
			 int r = 0);
	lacksDMA(const char * c, const AbcDMA & rs);
	virtual void View() const;
};

// derived class with DMA
class hasDMA: public AbcDMA
{
private:
	char * style;
public:
	hasDMA(const char * s = "none", const char * l = "null",
			int r = 0);
	hasDMA(const char *s, const AbcDMA & rs);
	hasDMA(const hasDMA & hs);
	~hasDMA();
	hasDMA & operator=(const hasDMA & rs);
	virtual void View() const;
};
#endif

// personmi.h -- working classes with MI
#ifndef PERSONMI_H_
#define PERSONMI_H_
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
using std::cout;
using std::endl;
using std::string;

class Person      // an abstract base class
{
private:
	string firstname;
	string lastname;
protected:
	virtual void Data() const;
	virtual void Get();
public:
	Person() : firstname("no one"), lastname("no one") {}
	Person(const string & fn, const string & ln) :
		firstname(fn), lastname(ln) {}
	virtual ~Person() {}  // pure virtual function
	virtual void Set();
	virtual void Show() const;
};

class Gunslinger : virtual public Person
{
private:
	double draw_time;
	int notches;
protected:
	void Data() const;
	void Get();
public:
	Gunslinger() : Person(), draw_time(0.0), notches(0) {}
	Gunslinger(const string & fn, const string & ln, 
			double draw, int notch) : Person(fn, ln),
			draw_time(draw), notches(notch) {}
	Gunslinger(const Person & p, double draw, int notch)
			: Person(p), draw_time(draw), notches(notch) {}
	virtual ~Gunslinger() {};
	double Draw() const { return draw_time; }
    void Set();
    void Show() const;
};

class PokerPlayer : virtual public Person
{
public:
	PokerPlayer() { srand(time(NULL)); }
	virtual ~PokerPlayer() { }
	int Draw() const { return rand() % 52 + 1; }
	void Set();
	void Show() const;
};

class BadDude : public Gunslinger, public PokerPlayer
{
protected:
public:
	BadDude() {}
	BadDude(const string & fn, const string & ln,
			double draw, int notch)
			: Person(fn, ln), Gunslinger(fn, ln, draw, notch) {}
	BadDude(const Person & p, double draw, int notch)
			: Person(p), Gunslinger(p, draw, notch) {}
	BadDude(const Gunslinger & g)
			: Person(g), Gunslinger(g) {}
	~BadDude() {}
	double Gdraw() const { return Gunslinger::Draw(); }
	int Cdraw() const { return PokerPlayer::Draw(); }
	void Set();
	void Show() const;
};
#endif

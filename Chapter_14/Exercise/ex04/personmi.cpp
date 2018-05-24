#include <iostream>
#include "personmi.h"
using std::cin;

void Person::Data() const
{
	cout << "Name: " << firstname << " " << lastname << endl;
}

void Person::Get()
{
	cout << "Enter first name:";
	getline(cin, firstname);
	cout << "Enter last name:";
	getline(cin, lastname);
	/*
	while (cin.get() != '\n')
		continue;
	*/
}

void Person::Set()
{
	cout << "Enter the Person's name:\n";  
	Get(); 
}

void Person::Show() const
{ 
	Data(); 
}

void Gunslinger::Data() const
{
	cout << "The gunslinger's draw time: " << draw_time << endl;
	cout << "The number of notches on the gun: " << notches << endl;
}

void Gunslinger::Get()
{
	cout << "Enter the draw time: ";
	cin >> draw_time;
	cout << "Enter the number of notches on the gun: ";
	cin >> notches;
}

void Gunslinger::Set()
{
	cout << "Enter the gunslinger's name:\n";
	Person::Get();
	Get();
}

void Gunslinger::Show() const
{
	cout << "Gunslinger's info:\n";
	Person::Data();
	Data();
}

void PokerPlayer::Set()
{
	cout << "Enter the poker player's name:\n";
	Person::Get();
}

void PokerPlayer::Show() const
{
	cout << "PokerPlayer's info:\n";
	Person::Show();
	cout << "Card number: " << Draw() << endl;
}

void BadDude::Set()
{
	cout << "Enter the bad dude's name:\n";
	Person::Get();
	Gunslinger::Get();
}

void BadDude::Show() const
{
	cout << "Baddude's info:\n";
	Person::Data();
	Gunslinger::Data();
	cout << "Card number: " << Cdraw() << endl;
}

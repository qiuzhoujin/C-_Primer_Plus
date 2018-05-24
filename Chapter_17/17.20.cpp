// random.cpp -- random access to a binary file
#include <iostream>   // not required by most systems
#include <fstream>
#include <iomanip>
#include <cstdlib>    // for exit()
const int LIM = 20;
struct planet
{
	char name[LIM];    // name of p

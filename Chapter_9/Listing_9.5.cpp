// external.cpp -- exteranl variables
// compile with support
#include <iostream>
using namespace std;

// external variable
double warming = 0.3;        // wariming defined
// function prototype
void update(double dt);
void local();

int main()                   // uses global variable
{
	cout << "Global warming is " << warming << " degrees.\n";
	update(0.1);             // call function to change warming
	cout << "Global warming is " << warming << " degrees.\n";
	local();                 // call function with local warming
	cout << "Global warming is " << warming << " degrees.\n";

	return 0;
}

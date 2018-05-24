#include <iostream>
#include "bank_account.h"
using namespace std;

int main()
{
	BankAccount hum("humphrey", "249183");
	BankAccount john("john", "132098", 5000);
	
	cout << "John:\n";
	john.show();

	cout << "Humphrey:\n";
	hum.show();

	hum.deposit(3000);
	cout << "Humphrey after deposit 3000:\n";
	hum.show();

	hum.withdraw(1000);
	cout << "Humphrey after withdraw 1000:\n";
	hum.show();

	return 0;
}

#include <iostream>
#include "bank_account.h"
using namespace std;
BankAccount::BankAccount(const string &client,
		const string &num, double bal)
{
	name = client;
	acctnum = num;
	balance = bal;
}

void BankAccount::show(void) const
{
	cout << "name: " << name << endl;
	cout << "acctnum: " << acctnum << endl;
	cout << "balance: " << balance << endl;
}
	
void BankAccount::deposit(double cash)
{
	balance += cash;
}
void BankAccount::withdraw(double cash)
{
	balance -= cash;
}

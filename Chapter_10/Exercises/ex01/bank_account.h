#include <string>
using std::string;
class BankAccount
{
private:
	string name;
	string acctnum;
	double balance;
public:
	BankAccount(const string &client,
			const string &num, double bal = 0.0);
	void show(void) const;
	void deposit(double cash);
	void withdraw(double cash);
};

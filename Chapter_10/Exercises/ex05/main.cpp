// main.cpp -- testing the Stack class
#include <iostream>
#include <cctype>
#include "stack.h"
using namespace std;

int main()
{
	Stack st;   // create an empty stack
	char ch;
	customer buyer;
	cout << "Please enter A to add a customer's info,\n"
		<< "P to server a customer, or Q to quit.\n";
	while (cin >> ch && toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << "Please enter A,P,or Q:";
			continue;
		}
		switch(ch)
		{
			case 'A':
			case 'a':
				cout << "Enter a buyer's name to add: ";
				cin.getline(buyer.fullname, 35);
				cout << "Enter " << buyer.fullname << "'s payment: ";
				while (!(cin >> buyer.payment))
				{
					cin.clear();
					cout << "Please enter a number: ";
					while (cin.get() != '\n')
						continue;
				}
				while (cin.get() != '\n')
					continue;
				if (st.isfull())
					cout << "stack already full\n";
				else
					st.push(buyer);
				break;
			case 'P':
			case 'p':
				if (st.isempty())
					cout << "stack already empty\n";
				else {
					st.pop(buyer);
					cout << buyer.fullname << " popped\n";
				}
				break;
		} // end switch
		cout << "Please enter A to add a customer's info,\n"
			<< "P to server a customer, or Q to quit.\n";
	} // end while
	cout << "Bye\n";

	return 0;
}

// main.cpp -- testing the Stack class
#include <iostream>
#include <cctype>  // or ctype.h
#include "stack.h"
using namespace std;

int main()
{
	Stack st(4);   // create an empty stack
	Stack temp;    // to save st info temprorily
	char ch;
	unsigned long po;

	cout << "Please enter A to add a purchase order,\n"
		<< "P to process a PO, S to save Info,\n"
		<< "R to recover info, or Q to quit.\n";
	while (cin >> ch && toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		ch = tolower(ch);
		switch(ch)
		{
			case 'a':cout << "Enter a PO number to add: ";
					 cin >> po;
					 if (st.isfull())
						 cout << "stack already full\n";
					 else
						 st.push(po);
					 break;
			case 'p':if (st.isempty())
						 cout << "stack already empty\n";
					 else {
						 st.pop(po);
						 cout << "PO #" << po << " popped\n";
					 }
					 break;
			case 's':temp = Stack(st);
					 cout << "Save successfully\n";
					 break;
			case 'r':st = temp;
					 cout << "Recover successfully\n";
					 break;
			default:cout << "Wrong choice.\n";
					 break;
		}
		cout << "Please enter A to add a purchase order,\n"
			<< "P to process a PO, S to save Info,\n"
			<< "R to recover info, or Q to quit.\n";
	}
	cout << "Bye\n";

	return 0;
}

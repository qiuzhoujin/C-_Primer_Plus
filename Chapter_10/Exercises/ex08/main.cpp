#include <iostream>
#include <cstdlib>
#include <ctime>
#include "list.h"
using namespace std;

void show_info(Item &item);
void subtract(Item &item);

int main()
{
	List list;
	srand(time(NULL));
	cout << "Just after creation: " << endl;
	cout << "list is_empty() returns: " << list.is_empty() << endl;
	cout << "list is_full() returns: " << list.is_full() << endl;
	
	while (!list.is_full())
	{
		Item temp = rand() % 100;
		list.add(temp);
	}

	cout << "After initialization: " << endl;
	cout << "list is_empty() returns: " << list.is_empty() << endl;
	cout << "list is_full() returns: " << list.is_full() << endl;

	cout << "The original value is: " << endl;
	list.visit(show_info);

	list.visit(subtract);
	cout << "After subtract, the new value is: " << endl;
	list.visit(show_info);

	return 0;
}

void show_info(Item &item)
{
	cout << item << endl;
}
void subtract(Item &item)
{
	item -= 4;
}

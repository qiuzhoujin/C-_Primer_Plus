#include "list.h"
List::List()
{
	top = 0;
}

bool List::add(Item & item)
{
	if (top == LEN)
		return false;
	else
	{
		data[top++] = item;
		return true;
	}
}

bool List::is_empty() const
{
	return top == 0;
}

bool List::is_full() const
{
	return top == LEN;
}

void List::visit(void (*pf)(Item & item))
{
	for (int i = 0; i < top; i++)
		pf(data[i]);
}

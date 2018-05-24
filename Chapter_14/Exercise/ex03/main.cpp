// compile with workermi.cpp
#include <iostream>
#include <cstring>
#include "workermi.h"
#include "queue.h"
const int SIZE = 5;

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::strchr;
	Worker* lolas;

	QueueTp<Worker*> que_worker(SIZE);

	int ct;
	for (ct = 0; ct < SIZE; ct++)
	{
		char choice;
		cout << "Enter the employee category:\n"
			<< "w: waiter  s: singer  "
			<< "t: singing waiter  q: quit\n";
		cin >> choice;
		while (strchr("wstq", choice) == NULL)
		{
			cout << "Please enter a w, s, t, or q: ";
			cin >> choice;
		}
		if (choice == 'q')
			break;
		switch(choice)
		{
			case 'w':   lolas = new Waiter;
						break;
			case 's':   lolas = new Singer;
						break;
			case 't':   lolas = new SingingWaiter;
						break;
		}
		cin.get();
		lolas->Set();
		que_worker.enqueue(lolas);
    }

    cout << "\nHere is your staff:\n";
    int i;
    for (i = 0; i < ct; i++)
    {
		que_worker.dequeue(lolas);
        cout << endl;
        lolas->Show();
        delete lolas;
    }
    cout << "Bye.\n";
    return 0; 
}

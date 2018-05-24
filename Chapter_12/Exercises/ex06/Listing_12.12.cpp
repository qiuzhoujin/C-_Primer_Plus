// bank.cpp -- using the QUeue interface
// compile with queue.cpp
#include <iostream>
#include <fstream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()
#include "Listing_12.10.h"

const int MIN_PER_HR = 60;

bool newcustomer(double x);   // is there a new customer?

#if 1
int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::ios_base;
	std::ofstream fout;
	fout.open("out.txt");
	// setting things up
	std::srand(std::time(0));   // random initializing of rand()

	cout << "Case Study: Bank of Hearther Heather Automatic Teller\n";
	int qs = 10;
	Queue line1(qs);             // queue holds up to qs people
	Queue line2(qs);

	int hours = 150;                  // hours of simulation
	// simulation will run 1 cycle per minute
	long cyclelimit = MIN_PER_HR * hours;  // # of cycles

	double perhour = 1;         // average # of arrival per hour
	while (1)
	{
		double min_per_cust;        // average time between arrivals
		min_per_cust = MIN_PER_HR / perhour;

		Item temp;                  // new customer data
		long turnaways = 0;         // turned away by full queue
		long customers = 0;         // joined the queue
		long served = 0;            // served during the simulation
		long sum_line = 0;          // cumulative line length
		int wait_time1 = 0;          // time until autoteller is free
		int wait_time2 = 0;          // time until autoteller is free
		long line_wait = 0;         // cumulative time in line

		// running the simulation
		for (int cycle = 0; cycle < cyclelimit; cycle++)
		{
			if (newcustomer(min_per_cust))   // have newcomer
			{
				if (line1.isfull() && line2.isfull())
					turnaways++;
				else
				{
					customers++;
					temp.set(cycle);    // cycle = time of arrival
					// add newcomer to line
					if (line1.queuecount() > line2.queuecount())
						line2.enqueue(temp);
					else
						line1.enqueue(temp); 
				}
			}
			if (wait_time1 <= 0 && !line1.isempty())
			{
				line1.dequeue(temp);   // attend next customer
				wait_time1 = temp.ptime();  // for wait_time minutes
				line_wait += cycle - temp.when();
				served++;
			}
			if (wait_time1 > 0)
				wait_time1--;
			if (wait_time2 <= 0 && !line2.isempty())
			{
				line2.dequeue(temp);   // attend next customer
				wait_time2 = temp.ptime();  // for wait_time minutes
				line_wait += cycle - temp.when();
				served++;
			}
			if (wait_time2 > 0)
				wait_time2--;
			sum_line += line1.queuecount() + line2.queuecount();
		}
		double avg_wait_time = (double) line_wait / served;

		fout << "\nperhour: " << perhour << endl;
		fout << "customers accepted: " << customers << endl;
		fout << "  customers served: " << served << endl;
		fout << "         turnaways: " << turnaways << endl;
		fout << "average queue size: ";
		fout.precision(2);
		fout.setf(ios_base::fixed, ios_base::floatfield);
		fout << (double)sum_line / cyclelimit << endl;
		fout << " average wait time: "
			 << avg_wait_time << " minutes\n";
		
		if (avg_wait_time >= 1.0)
		{
			cout << "The result is " << perhour << endl;
			break;
		}
		perhour++;
	}

	cout << "Done!\n";

	return 0;
}
#else

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::ios_base;
	// setting things up
	std::srand(std::time(0));   // random initializing of rand()

	cout << "Case Study: Bank of Hearther Heather Automatic Teller\n";
	cout << "Enter maximum size of queue: ";
	int qs;
	cin >> qs;
	Queue line(qs);             // line queue holds up to qs people

	cout << "Enter the number of simulation hours: ";
	int hours;                  // hours of simulation
	cin >> hours;
	// simulation will run 1 cycle per minute
	long cyclelimit = MIN_PER_HR * hours;  // # of cycles

	cout << "Enter the average number of customers per hour: ";
	double perhour;             // average # of arrival per hour
	cin >> perhour;
	double min_per_cust;        // average time between arrivals
	min_per_cust = MIN_PER_HR / perhour;

	Item temp;                  // new customer data
	long turnaways = 0;         // turned away by full queue
	long customers = 0;         // joined the queue
	long served = 0;            // served during the simulation
	long sum_line = 0;          // cumulative line length
	int wait_time = 0;          // time until autoteller is free
	long line_wait = 0;         // cumulative time in line

	// running the simulation
	for (int cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_cust))   // have newcomer
		{
			if (line.isfull())
				turnaways++;
			else
			{
				customers++;
				temp.set(cycle);    // cycle = time of arrival
				line.enqueue(temp); // add newcomer to line
			}
		}
		if (wait_time <= 0 && !line.isempty())
		{
			line.dequeue(temp);   // attend next customer
			wait_time = temp.ptime();  // for wait_time minutes
			line_wait += cycle - temp.when();
			served++;
		}
		if (wait_time > 0)
			wait_time--;
		sum_line += line.queuecount();
	}

	// reporting results
	if (customers > 0)
	{
		cout << "customers accepted: " << customers << endl;
		cout << "  customers served: " << served << endl;
		cout << "         turnaways: " << turnaways << endl;
		cout << "average queue size: ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout << (double)sum_line / cyclelimit << endl;
		cout << " average wait time: "
			 << (double) line_wait / served << " minutes\n";
	}
	else
		cout << "No customers!\n";
	cout << "Done!\n";

	return 0;
}
#endif

// x = average time, in minutes, between customers
// return value is true if customer shows up this minute
bool newcustomer(double x)
{
	return (std::rand() * x / RAND_MAX < 1);
}
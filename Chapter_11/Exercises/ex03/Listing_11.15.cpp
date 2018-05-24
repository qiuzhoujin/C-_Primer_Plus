// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib>   // rand(), srand() prototypes
#include <ctime>     // time() prototype
#include "Listing_11.13.h"
using namespace std;

int main()
{
	using VECTOR::Vector;
	srand(time(0));    // seed random-number generator
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	int N; // the number of trials
	int highest_step,lowest_step, sum_step;
	double average_step;
	cout << "Enter target distance (q to quit): ";
	while (cin >> target)
	{
		cout << "Enter step length: ";
		if (!(cin >> dstep))
			break;

		cout << "Enter the number of trials: ";
		if (!(cin >> N))
			break;

		highest_step = sum_step = 0;
		lowest_step = 0x7FFFFFFF; 	
		for (int i = 0; i < N; i++)
		{
			steps = 0;
			result.reset(0.0, 0.0);
			while (result.magval() < target)
			{
				direction = rand() % 360;
				step.reset(dstep, direction, Vector::POL);
				result = result + step;
				steps++;
			}
			highest_step = highest_step > steps ? highest_step : steps;
			lowest_step  = lowest_step  < steps ? lowest_step  : steps;
			sum_step += steps;
		}
		average_step = (double)sum_step / N;
		cout << "\nAfter " << N << " trials, we get the info:\n";
		cout << "Highest steps: " << highest_step << endl;
		cout << "Lowest steps: " << lowest_step << endl;
		cout << "Average steps: " << average_step << "\n\n";
		cout << "Enter target distance (q to quit): ";
	}
	cout << "Bye!\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;

	return 0;
}

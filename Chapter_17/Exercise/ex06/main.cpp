#include <iostream>  // not required by most systems
#include <fstream>
#include <iomanip>
#include <cstdlib>  // for exit()
#include "emp.h"

inline void eatline() { while (std::cin.get() != '\n') continue; }

const char * file = "personnel.txt";

classkind option();

int main()
{
	using namespace std;
	const int MAX = 10;    // no more than 10 objects
	abstr_emp *pc[MAX];
	int classtype;
	char ch;
	int i = 0;
	//cout << fixed << right;

	// show initial contents
	ifstream fin;
	fin.open(file);
	if (fin.is_open())
	{
		cout << "Here are the current contents of the "
			<< file << " file:\n";
		while ((fin >> classtype).get(ch))   // newline separates int from data
		{
			switch (classtype)
			{
			case Employee:
				pc[i] = new employee();
				break;
			case Manager:
				pc[i] = new manager();
				break;
			case Fink:
				pc[i] = new fink();
				break;
			case Highfink:
				pc[i] = new highfink();
				break;
			default:
				cout << "Something wrong, please check.\n";
				break;
			}
			pc[i]->GetAll(fin);
			pc[i]->ShowAll();
			i++;
		}
		fin.close();
	}

	// add new data
	ofstream fout(file, ios_base::app);
	if (!fout.is_open())
	{
		cerr << "Can't open " << file << " file for output:\n";
		exit(EXIT_FAILURE);
	}

	classtype = option();
	while ((classtype <= Highfink) && (i < MAX))
	{
		switch (classtype)
		{
		case Employee:
			pc[i] = new employee();
			break;
		case Manager:
			pc[i] = new manager();
			break;
		case Fink:
			pc[i] = new fink();
			break;
		case Highfink:
			pc[i] = new highfink();
			break;
		default:
			cout << "Something wrong, please check.\n";
			break;
		}
		pc[i]->SetAll();
		cout << "\nThe info entered:\n";
		pc[i]->ShowAll();
		fout << classtype << endl;
		pc[i]->WriteAll(fout);
		i++;
		classtype = option();
	}
	fout.close();

	// show revised file
	i = 0;
	fin.clear();   // not required for some implementations, but won't hurt
	fin.open(file);
	if (fin.is_open())
	{
		cout << "Here are the new contents of the "
			 << file << " file:\n";
		while ((fin >> classtype).get(ch))   // newline separates int from data
		{
			switch (classtype)
			{
			case Employee:
				pc[i] = new employee();
				break;
			case Manager:
				pc[i] = new manager();
				break;
			case Fink:
				pc[i] = new fink();
				break;
			case Highfink:
				pc[i] = new highfink();
				break;
			default:
				cout << "Something wrong, please check.\n";
				break;
			}
			pc[i]->GetAll(fin);
			pc[i]->ShowAll();
			i++;
		}
		fin.close();
	}
	cout << "Done.\n";

	return 0;
}

classkind option()
{
	cout << left;
	cout << "Enter your option:\n";
	cout << Employee << setw(12) << ".empolyee ";
	cout << Manager << ".manager\n";
	cout << Fink << setw(12) << ".fink ";
	cout << Highfink << ".highfink\n";
	cout << Highfink + 1 << ".quit\n";
	int choice;
	if (!(cin >> choice))
	{
		choice = Highfink + 1;
		cin.clear();
	}
	eatline();
	return (classkind)choice;
}


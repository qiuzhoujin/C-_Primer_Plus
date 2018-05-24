#if 0
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char ch;
	int cnt = 0;
	ifstream fin;
	fin.open("ex08.cpp");

	if (fin.is_open())
	{
		while (fin.get(ch)) cnt++;
	}
	else
		cout << "File open error!\n";
	cout << "ex08.cpp has " << cnt << " characters.\n";

	return 0;
}
#else
//以下为参考答案
// pe6-8.cpp -- counting characters
#include <iostream>
#include <fstream>          // file I/O support
#include <cstdlib>          // support for exit()
const int SIZE = 60;
int main()
{
	using namespace std;
	char filename[SIZE];
	char ch;
	ifstream inFile;        // object for handling file input

	cout << "Enter name of data file: ";
	cin.getline(filename,SIZE);
	inFile.open(filename);  // associate inFile with a file
	if (!inFile.is_open()) // failed to open file
	{
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	int count = 0;          // number of items read

	inFile >> ch;           // get first value
	while (inFile.good())   // while input good and not at EOF
	{
		count++;            // one more item read
		inFile >> ch;       // get next value
	}
	
	cout << count << " characters in " << filename << endl;

	inFile.close();         // finished with the file

	return 0;
}
#endif

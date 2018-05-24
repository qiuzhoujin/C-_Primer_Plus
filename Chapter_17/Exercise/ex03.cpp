#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(int argc, char * argv[])
{
	if (argc != 3)
	{
		cout << "Usage: " << argv[0]
			<< " srcfile destfile\n";
		exit(-1);
	}
	ifstream fin(argv[1]);
	if (!fin.is_open())
	{
		cout << argv[1] << " cannot be opened.\n";
		exit(-2);
	}
	ofstream fout(argv[2]);
	if (!fout.is_open())
	{
		cout << argv[2] << " cannot be created.\n";
		exit(-3);
	}
	char ch;
	while (fin.get(ch))
	{
		fout << ch;
	}
	fin.close();
	fout.close();
	cout << "Done.\n";

	return 0;
}

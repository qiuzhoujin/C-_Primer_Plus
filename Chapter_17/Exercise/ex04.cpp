#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main(int argc, char * argv[])
{
	if (argc != 4)
	{
		cout << "Usage: " << argv[0]
			<< " srcfile1 srcfile2 destfile\n";
		exit(EXIT_FAILURE);
	}
	ifstream fin1(argv[1]);
	if (!fin1)
	{
		cout << "Can't open " << argv[1] << " for input\n";
		exit(EXIT_FAILURE);
	}
	ifstream fin2(argv[2]);
	if (!fin2)
	{
		cout << "Can't open " << argv[2] << " for input\n";
		exit(EXIT_FAILURE);
	}
	ofstream fout(argv[3]);
	if (!fout)
	{
		cout << "Can't open " << argv[3] << " for output\n";
		exit(EXIT_FAILURE);
	}
	string src1,src2,dest;
	while (getline(fin1, src1) && getline(fin2, src2))
	{
		dest = src1 + " " + src2;
		fout << dest << endl;
	}
	if (!fin1)
	{
		fin1.close();
		while (getline(fin2, dest))
			fout << dest << endl;
		fin2.close();
	}
	else if(!fin2)
	{
		fin2.close();
		fout << src1 << endl;
		while (getline(fin1, dest))
			fout << dest << endl;
		fin1.close();
	}
	else
		cout << "Both file read up.\n";
	cout << "The contenst of " << argv[1] << " and " << argv[2]
		<< " has been copied to " << argv[3] << endl;
	fout.close();

	return 0;
}

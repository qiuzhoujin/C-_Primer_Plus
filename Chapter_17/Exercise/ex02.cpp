#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(int argc, char * argv[])
{
	if (argc != 2)
	{
		cout << "Usage: " << argv[0] << " outfile\n";
		exit(-1);
	}
	char ch;
	ofstream fout(argv[1]);
	cout << "Please input what you want to save to " 
		<< argv[1] << endl;
	while (cin.get(ch))
	{
		fout << ch;
	}
	fout.close();

	return 0;
}

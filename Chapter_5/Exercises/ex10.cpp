#include <iostream>
using namespace std;

int main()
{
	int rows;
	cout << "Enter number of rows: ";
	cin >> rows;
	for(int row = 0; row < rows; row++)
	{
		for(int col = 0; col < rows; col++)
		{
			if(col < rows - row - 1) cout << ".";
			else cout << "*";
		}
		cout << endl;
	}

	return 0;
}

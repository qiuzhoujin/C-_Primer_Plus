#include <iostream>
#include <new>
#include <cstring>
using namespace std;

char buffer[48]; // option 1
struct chaff
{
	char dross[20];
	int slag;
};

int main()
{
	//char *buff = new char[48]; // option 2
	chaff *data = new (buffer) chaff[2];
	strcpy(data[0].dross, "first");
	data[0].slag = 12;
	strcpy(data[1].dross, "second");
	data[1].slag = 34;
	for (int i = 0; i < 2; i++)
	{
		cout << "dross: " << data[i].dross << endl;
		cout << "slag: " << data[i].slag << endl << endl;
	}
	/*
	data = new chaff[2];
	strcpy(data[0].dross, "third");
	data[0].slag = 56;
	strcpy(data[1].dross, "fourth");
	data[1].slag = 78;
	for (int i = 0; i < 2; i++)
	{
		cout << "dross: " << data[i].dross << endl;
		cout << "slag: " << data[i].slag << endl << endl;
	}
	delete [] data;
	*/

	return 0;
}

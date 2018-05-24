#include <iostream>
using namespace std;

int main()
{
	cout << "Please enter one of the following choices:\n";
	cout << "c) carnivore        p) pianist\n";
	cout << "t) tree             g) game\n";
	char choice = '0';
	cin >> choice;
	while (!(choice == 'c' || choice == 'p' ||
				choice == 't' || choice == 'g'))
	{
		cout << "Please enter a c, p, t, or g: ";
		cin >> choice;
	}
	switch (choice)
	{
	case 'c':
		cout << "A cat is a carnivore.\n";
		break;
	case 'p':
		cout << "Radu Lupu is a pianist.\n";
		break;
	case 't':
		cout << "A maple is a tree.\n";
		break;
	case 'g':
		cout << "Golf is a game.\n";
		break;
	default:
		cout << "The program shouldn't get here!\n";
	}

	return 0;
}

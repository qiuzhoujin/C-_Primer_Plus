#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
const int word_size = 50;

int main()
{
	char word[word_size];
	char ch;
	int vowels = 0;
	int consonants = 0;
	int others = 0;
	cout << "Enter words ( q to quit):" << endl;
	while ( cin >> word && strcmp(word,"q"))
	{
		ch = tolower(word[0]);
		if (isalpha(ch))
		{
			if (ch == 'a' || ch == 'e' || ch == 'i' ||
					ch == 'o' || ch == 'u')
				vowels++;
			else
				consonants++;
		}
		else
			others++;
	}
	cout << vowels << " words beginning with vowels\n";
	cout << consonants << " words beginning with consonants\n";
	cout << others << " others\n";

	return 0;
}

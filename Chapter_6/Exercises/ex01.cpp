#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char ch;
	cout << "Enter something,@ to quit:\n";
	while (cin.get(ch) && ch != '@')
	{
		if(isdigit(ch))
			continue;
		else if(isalpha(ch))
		{
			if(isupper(ch))
				cout.put(tolower(ch));
			else if(islower(ch))
				cout.put(toupper(ch));
		}
		else
			cout.put(ch);
	}

	return 0;
}

// 参考答案
/*
#include <iostream> 
#include <cctype> 
int main( ) 
{ 
	using namespace std; //introduces namespace std 
	char ch; 
	cin.get(ch); 
	while(ch != '@') 
	{ 
		if (!isdigit(ch)) 
		{ 
			if (isupper(ch)) 
				ch = tolower(ch); 
			else if (islower(ch)) 
				ch = toupper(ch); 
			cout << ch; 
		} 
		cin.get(ch); 
	} 
	return 0; 
} 
*/

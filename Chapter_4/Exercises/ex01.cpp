// 添加于2016-10-23,练习1

#include <iostream>
using namespace std;

int main()
{
	string first_name;
	string last_name;
	char grade;
	unsigned short age;

	cout << "What is your first name? ";
	getline(cin,first_name);
	cout << "What is your last name? ";
	getline(cin,last_name);
	cout << "What letter grade do you deserve? ";
	cin >> grade;
	cout << "What is your age? ";
	cin >> age;

	cout << "Name: " << last_name << ", " << first_name << endl;
	grade++;
	cout << "Grade: " << grade << endl;
	cout << "Age: " << age;

	return 0;
}

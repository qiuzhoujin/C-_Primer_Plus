// pizza-analysis service
#include <iostream>
#include <string>
using namespace std;

struct pizza
{
	string company_name;
	double diameter;
	double weight;
};

// 如下为参考答案
#if 1
int main()
{
	pizza pie;
	cout << "What is the name of the pizza company? ";
	getline(cin,pie.company_name);
	cout << "What is the diameter of the pizza in inches? ";
	cin >> pie.diameter;
	cout << "How much does the pizza weigh in ounces? ";
	cin >> pie.weight;
	cout << "Company: " << pie.company_name << "\n";
	cout << "Diameter: " << pie.diameter << " inches\n";
	cout << "Weight: " << pie.weight << " ounces\n";

	return 0;
}
#else
int main()
{
	pizza apizza;
	cout << "Enter the name of the pizza company: ";
	getline(cin, apizza.company_name);
	cout << "Enter the diameter of the pizza:";
	cin >> apizza.diameter;
	cout << "Enter the weight of the pizza:";
	cin >> apizza.weight;
    cout << "Company name: " << apizza.company_name << endl;
	cout << "Diameter: " << apizza.diameter << endl;
	cout << "Weight: " << apizza.weight << endl;

	return 0;
}
#endif

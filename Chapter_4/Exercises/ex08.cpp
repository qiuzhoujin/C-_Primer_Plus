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

int main()
{
	pizza *pie = new pizza;
	cout << "What is the diameter of the pizza in inches? ";
	cin >> pie->diameter;
	cin.get();
	cout << "What is the name of the pizza company? ";
	getline(cin,pie->company_name);
	cout << "How much does the pizza weigh in ounces? ";
	cin >> pie->weight;
	cout << "Company: " << pie->company_name << "\n";
	cout << "Diameter: " << pie->diameter << " inches\n";
	cout << "Weight: " << pie->weight << " ounces\n";
	delete pie;

	return 0;
}

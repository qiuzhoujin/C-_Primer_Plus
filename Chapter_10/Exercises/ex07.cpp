#include <iostream>
#include <cstring>
using namespace std;

class Plorg
{
private:
	enum {LEN = 20};
	char m_name[LEN];
	int m_ci;
public:
	Plorg(const char *name = "Plorga");
	void reset_ci(int ci);
	void report();
};

Plorg::Plorg(const char *name)
{
	strncpy(m_name, name, LEN - 1);
	m_name[LEN - 1] = '\0';
	m_ci = 50;
}

void Plorg::reset_ci(int ci)
{
	m_ci = ci;
}

void Plorg::report()
{
	cout << "plorg name: " << m_name << endl;
	cout << "CI(contentment index): " << m_ci << endl;
}

int main()
{
	Plorg a;
	cout << "Default name and CI:" << endl;
	a.report();
	Plorg b("humphrey");
	b.reset_ci(65);
	cout << "User-defined name and changed CI:" << endl;
	b.report();

	return 0;
}

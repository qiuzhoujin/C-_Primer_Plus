#include <iostream>
#include <utility>
using namespace std;

class Cpmv
{
public:
	struct Info
	{
		std::string qcode;
		std::string zcode;
	};
private:
	Info *pi;
public:
	Cpmv();
	Cpmv(std::string q, std::string z);
	Cpmv(const Cpmv & cp);
	Cpmv(Cpmv && mv);
	~Cpmv();
	Cpmv & operator=(const Cpmv & cp);
	Cpmv & operator=(Cpmv && mv);
	Cpmv operator+(const Cpmv & obj) const;
	void Display() const;
};

Cpmv::Cpmv()
{
	cout << " >>>default constructor<<<\n";
	pi = nullptr;
}

Cpmv::Cpmv(std::string q, std::string z)
{
	cout << " >>>constructor<<<\n";
	pi = new Info;
	pi->qcode = q;
	pi->zcode = z;
}

Cpmv::Cpmv(const Cpmv & cp)
{
	cout << " >>>copy constructor<<<\n";
	pi = new Info;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
}

Cpmv::Cpmv(Cpmv && mv)
{
	cout << " >>>move constructor<<<\n";
	pi = mv.pi;
	mv.pi = nullptr;
}

Cpmv::~Cpmv()
{
	cout << " >>>destructor<<<\n";
	delete pi;
}

Cpmv & Cpmv::operator=(const Cpmv & cp)
{
	cout << " >>>copy operator<<<\n";
	if (this == &cp)
		return *this;
	delete pi;
	pi = new Info;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
	return *this;
}

Cpmv & Cpmv::operator=(Cpmv && mv)
{
	cout << " >>>move operator<<<\n";
	if (this == &mv)
		return *this;
	delete pi;
	pi = mv.pi;
	mv.pi = nullptr;
	return *this;
}

Cpmv Cpmv::operator+(const Cpmv & obj) const
{
	Cpmv temp("", "");
	cout << " >>>operator+<<<\n";
	temp.pi->qcode = pi->qcode + obj.pi->qcode;
	temp.pi->zcode = pi->zcode + obj.pi->zcode;

	return temp;
}

void Cpmv::Display() const
{
	if (pi != nullptr)
	{
		cout << "qcode: " << pi->qcode << endl;
		cout << "zcode: " << pi->zcode << endl;
	}
	else
		cout << "(empty object)\n";
}

int main()
{
	Cpmv c1("111", "222");
	Cpmv c2("333", "444");
	Cpmv c3("555", "666");
	cout << "c1:\n";
	c1.Display();
	cout << "c2:\n";
	c2.Display();
	cout << "c3:\n";
	c3.Display();

	Cpmv c4(c1);
	Cpmv c5(c1 + c2);
	cout << "c4:\n";
	c4.Display();
	cout << "c5:\n";
	c5.Display();
	cout << "c1:\n";
	c1.Display();

	c4 = c3;
	c5 = move(c1);
	cout << "c4:\n";
	c4.Display();
	cout << "c5:\n";
	c5.Display();
	cout << "c1:\n";
	c1.Display();

	return 0;
}

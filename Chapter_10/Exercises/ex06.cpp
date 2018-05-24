#include <iostream>
using namespace std;

class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0);   // sets x, y to a, b
	void showmove() const;                   // shows current x, y values
	// this function adds x of m to x of invoking object to get new x,
	// adds y of m to y of invoking object to get new y, creates a new
	// move object initialized to new x, y values and returns it
	Move add(const Move & m) const;
	void reset(double a = 0, double b = 0);  // resets x,y to a, b
};

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

void Move::showmove() const
{
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
}

Move Move::add(const Move & m) const
{
	Move temp(x + m.x, y + m.y);
	return temp;
}

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}

int main()
{
	Move var1;
	cout << "Uninitialized:\n";
	var1.showmove();
	var1 = Move(10, 20);
	cout << "Use constructor:\n";
	var1.showmove();
	Move var2(30, 40);
	cout << "var2:\n";
	var2.showmove();
	Move var3 = var1.add(var2);
	cout << "var3:\n";
	var3.showmove();
	var3.reset(1, 1);
	cout << "var3 reset:\n";
	var3.showmove();

	return 0;
}

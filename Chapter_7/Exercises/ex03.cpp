#include <iostream>
using namespace std;

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void show_box(box var);
void set_volume(box *var);

int main()
{
	box a_box;
	cout << "Enter the maker of the box:";
	cin.getline(a_box.maker,40);
	cout << "Enter the height of the box:";
	cin >> a_box.height;
	cout << "Enter the width of the box:";
	cin >> a_box.width;
	cout << "Enter the length of the box:";
	cin >> a_box.length;
	set_volume(&a_box);
	show_box(a_box);

	return 0;
}

void show_box(box var)
{
	cout << "maker:" << var.maker << endl;
	cout << "height:" << var.height << endl;
	cout << "width:" << var.width << endl;
	cout << "length:" << var.length << endl;
	cout << "volume:" << var.volume << endl;
}

void set_volume(box *var)
{
	var->volume = var->height * var->width
					* var->length;
}

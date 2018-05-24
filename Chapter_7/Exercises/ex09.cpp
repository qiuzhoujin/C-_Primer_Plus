#include <iostream>
using namespace std;

const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main()
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;

	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete [] ptr_stu;
	cout << "Done\n";

	return 0;
}

int getinfo(student pa[], int n)
{
	int cnt = 0;
	for (;n > 0;n--)
	{
		cout << "Please enter the fullname(blank line to terminate): ";
		cin.getline(pa[cnt].fullname,SLEN);
		if (pa[cnt].fullname[0] == '\0')
		{
			break;
		}
		cout << "Please enter the hobby: ";
		cin.getline(pa[cnt].hobby,SLEN);
		cout << "Please enter the ooplevel: ";
		cin >> pa[cnt].ooplevel;
		cnt++;
		while (cin.get() != '\n') continue;
	}
	return cnt;
}

void display1(student st)
{
	cout << "fullname: " << st.fullname << endl;
	cout << "hobby: " << st.hobby << endl;
	cout << "ooplevel: " << st.ooplevel << endl;
}
void display2(const student * ps)
{
	cout << "fullname: " << ps->fullname << endl;
	cout << "hobby: " << ps->hobby << endl;
	cout << "ooplevel: " << ps->ooplevel << endl;
}
void display3(const student pa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		display2(pa + i);
	}
}

#include <iostream>
using namespace std;

const int NUM = 10;
int get_scores(double scores[],int size);
void show_scores_ave(double scores[],int size);
double average(double scores[],int size);

int main()
{
	double *scores = new double[NUM];
	int num = get_scores(scores,NUM);
	show_scores_ave(scores,num);

	return 0;
}

int get_scores(double scores[],int size)
{
	cout << "Please enter up to " << size << " golf scores.(0 to terminate)"<< endl;
	int cnt = 0;
	do
	{
		cout << "#" << cnt + 1 << ":";
		while (!(cin >> scores[cnt]))
		{
			cin.clear();
			while (cin.get() != '\n') continue;
			cout << "Please enter the correct score!\n";
			cout << "#" << cnt << ":";
		}
		if (scores[cnt] != 0)
			cnt++;
		else
			break;
	}
	while (cnt < size);
	return cnt;
}

void show_scores_ave(double scores[],int size)
{
	int i;
	double ave = average(scores,size);
	for (i = 0; i< size; i++)
		cout << scores[i] << ",";
	cout << "\nAnd the average score is " << ave << endl;
}

double average(double scores[],int size)
{
	double sum = 0;
	for (int i = 0; i < size;i++)
		sum += scores[i];
	return sum / size;
}

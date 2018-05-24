#include<iostream>
using namespace std;

#define MAX 10
int input(double data[],int* n);
void show(double data[],int n);
double avg(double data[],int n);

int main()
{
    double score[MAX];
    int cnt = 0;
    while(input(score,&cnt))
    {
        show(score,cnt);
        cout<<"The average score is "<<avg(score,cnt)<<endl;
    }
    cout<<"Bye~"<<endl;

    return 0;
}

int input(double data[],int* n)
{
    int i = 0;
    cout<<"Enter up to "<< MAX <<" scores:(negative to end input,# to quit)"<<endl;
    while(cin>>data[i])
    {
        if((data[i] < 0) || (i == MAX-1))
        {
            if(data[i] < 0)
            {
                *n = i;
            }
            else
            {
                *n = MAX;
                while(cin.get() != '\n')
                    continue;
            }
            cout<<"i: "<<i<<" data [i]: "<<data[i]<<endl;
            return 1;
        }
        i++;
    }
    return 0;
}

void show(double data[],int n)
{
    cout<<"The scores is:";
    for(int i = 0; i < n ; i++)
    {
        cout<<data[i]<<"  ";
    }
    cout<<'\b'<<endl;
}

double avg(double data[],int n)
{
    int i;
    double sum = 0;
    for(i = 0;i < n;i++)
        sum += data[i];
    return sum/n;
}

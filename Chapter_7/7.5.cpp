#include<iostream>
using namespace std;
double factorial(int n);

int main(void)
{
    int num;
    cout<<"Enter an integer,q to quit:";
    while(cin>>num)
    {
        cout<<"The factorial of "<< num <<" is "<< factorial(num)<<endl;
        cout<<"Enter another integer,# to quit:";
    }
    return 0;
}

double factorial(int n)
{
    if(n > 0)
    {
        return n*factorial(n-1);
    }
    else if(n == 0)
    {
        return 1;
    }
}
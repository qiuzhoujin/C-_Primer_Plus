#include<iostream>
using namespace std;
float harmonic(int i,int j);

int main()
{
    int x,y;
    float res;
    cout<<"Enter X:";
    cin>>x;
    cout<<"Enter Y:";
    cin>>y;
    while((x!=0) && (y!=0))
    {
        res = harmonic(x,y);
        cout<<"The harmonic res of "<< x <<" and "<< y <<" is "<<res<<endl;
        cout<<"Enter X:";
        cin>>x;
        cout<<"Enter Y:";
        cin>>y;
    }
    return 0;
}

float harmonic(int x,int y)
{
    return 2.0*x*y/(x+y);
}

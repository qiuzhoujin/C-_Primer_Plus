#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;
int Fill_array(double arr[],int len);
void Show_array(double arr[],int len);
void Reverse_array(double arr[],int len);

int main()
{
    double dblArr[20];
    int cnt = Fill_array(dblArr, 20);
    Show_array(dblArr, cnt);
    Reverse_array(dblArr, cnt);
    Show_array(dblArr, cnt);
    Reverse_array(dblArr+1, cnt-2);
    Show_array(dblArr, cnt);
    return 0;
}

int Fill_array(double arr[],int len)
{
    int i;
    cout<<"Enter up to "<<len<<" number of double data:\n";
    for(i = 0;(i<len)&&(cin>>arr[i]);i++);
    if(i==len) 
    {
        return len;
    }
    else
    {
        return i;
    }
    
}
void Show_array(double arr[],int len)
{
    cout<<"The data are:";
    for(int i = 0;i<len;i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<"\b"<<endl;    
}
void Reverse_array(double arr[],int len)
{
    double* temp;
    temp = new double[len];
    for(int i = 0;i<len;i++)
    {
        temp[i] = arr[len - i -1];
    }
    memcpy(arr,temp,sizeof(double)*len);
    delete[] temp;
}


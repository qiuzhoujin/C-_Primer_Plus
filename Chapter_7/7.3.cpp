#include<iostream>
#include<cstring>
using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void show(box b);
void set(box* b);

int main()
{
    box b;
    strcpy(b.maker,"MStar");
    b.height = 10;
    b.width =5;
    b.length = 20;
    set(&b);
    show(b);
    return 0;
}

void show(box b)
{
    cout<<"The maker is "<<b.maker<<",the height is "<<b.height<<",the width is "<<b.width
    <<", the length is "<<b.length<<",the volume is "<<b.volume<<endl;
}

void set(box* b)
{
    b->volume = b->height * b->width * b->length;
}

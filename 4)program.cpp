#include<conio.h>
#include<iostream>

using namespace std;
template <class t1>
void Swap(t1 *n,t1 *t)
{
    t1 temp;
    temp=*n;
    *n=*t;
    *t=temp;
}

int main()
{
    int a,b;
    float x,z;
    cout<<"Enter two integer numbers : ";
    cin>>a>>b;
    Swap(&a,&b);
    cout<<"The a value is "<<a<<" and b value is "<<b<<endl;
    cout<<"Enter two float numbers :";
    cin>>x>>z;
    Swap(&x,&z);
    cout<<"The x value is "<<x<<" and z value is "<<z;
    getch();
    return 0;
}

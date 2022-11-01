#include<conio.h>
#include<iostream>

using namespace std;

template <class t1>
t1 sum(t1 x,t1 y)
{
    return x+y;
}

int main()
{
    int a,b;
    float x,y;
    cout<<"Enter two integer numbers ";
    cin>>a>>b;
    cout<<"The sum of two integer numbers is "<<sum<int>(a,b)<<endl;
    cout<<"Enter two float numbers ";
    cin>>x>>y;
    cout<<"The sum of two float numbers is "<<sum<float>(x,y);

    getch();
    return 0;
}

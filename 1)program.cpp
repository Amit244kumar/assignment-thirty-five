#include<conio.h>
#include<iostream>

using namespace std;

template <class t1>
t1 addition(t1 x,t1 y)
{
    return x+y;
}

int main()
{

    cout<<"The sum of integer numbers is "<<addition<int>(3,5)<<endl;
    cout<<"The sum of float numbers is "<<addition<float>(3.2,6.5);
    getch();
    return 0;
}

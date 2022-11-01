#include<conio.h>
#include<iostream>

using namespace std;
template <class t1>
t1 max1(t1 x,t1 y)
{
    return x>y?x:y;
}

int main()
{
    cout<<"The max of two integer numbers is "<<max1(3,5)<<endl;
    cout<<"The max of two float numbers is "<<max1(3.6,6.7)<<endl;
    cout<<"The max of two character is "<<max1('r','s')<<endl;
    getch();
    return 0;
}

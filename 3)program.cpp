#include<conio.h>
#include<iostream>

using namespace std;

using namespace std;
template <class t1>
t1 max1(t1 x,t1 y,t1 z)
{
    return x>y?x>z?x:z:y>z?y:z;
}

int main()
{
    cout<<"The max of two integer numbers is "<<max1(4,2,30)<<endl;
    cout<<"The max of two float numbers is "<<max1(3.6,6.7,10.4)<<endl;
    cout<<"The max of two character is "<<max1('r','s','A')<<endl;
    getch();
    return 0;
}

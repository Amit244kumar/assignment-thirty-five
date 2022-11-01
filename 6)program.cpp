#include<conio.h>
#include<iostream>

using namespace std;

template <class t1>
t1 sum(t1 arr[],int n)
{
    t1 s=0;
    for(int i=0;i<n;i++)
        s+=arr[i];
    return s;
}

int main()
{
    int arr1[5];
    float arr2[5];
    cout<<"Enter 5 elements of integer type";
    for(int i=0;i<5;i++)
    {
        cin>>arr1[i];
    }
    cout<<"The sum of elements is "<<sum<int>(arr1,5)<<endl;
    cout<<"Enter 5 elements of float type";
    for(int i=0;i<5;i++)
    {
        cin>>arr2[i];
    }
    cout<<"The sum of elements is "<<sum<float>(arr2,5)<<endl;
    getch();
    return 0;
}

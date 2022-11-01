#include<conio.h>
#include<iostream>
#include<stack>

using namespace std;

int main()
{
     int f;
     stack <int>st;
     cout<<"Enter 5 element in stack"<<endl;
     for(int i=0;i<5;i++)
     {
         cin>>f;
         st.push(f);
     }
     cout<<"The elements are add successfully"<<endl;
     cout<<"The stack elements"<<endl;
     for(int i=0;i<5;i++)
     {
         cout<<st.top()<<" ";
         st.pop();
     }
     getch();
     return 0;
}

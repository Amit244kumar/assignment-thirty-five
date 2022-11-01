#include<conio.h>
#include<iostream>

using namespace std;

class f1
{
   protected:
      void text()
      {
            cout<<"The multiplication is : ";
      }

};

template <class t1>
class multiplication:protected f1
{
    private:
        t1 a,b;
    public:
        void multiply(t1 x,t1 y)
        {
            a=x;
            b=y;
        }
        void display()
        {
            text();
            cout<<a*b<<endl;
        }
};

int main()
{
    multiplication <int>m;
    multiplication <float>d;
    m.multiply(3,4);
    m.display();
    d.multiply(3.4,8.7);
    d.display();
    getch();
    return 0;
}

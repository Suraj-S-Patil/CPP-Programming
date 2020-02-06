#include<iostream>
using namespace std;

class sample
{
    int x,y,z;
    public:
    void input(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }

    void display()
    {
        cout<<"x= "<<x<<endl<<"y= "<<y<<endl<<"z= "<<z<<endl;
    }

    void operator *()
    {
        x= 2*x;
        y= 2*y;
        z= 2*z;
    }
};

int main()
{
    sample s;
    s.input(10,-20,30);
    cout<<"S : ";
    s.display();
    *s;
    cout<<"-S : ";
    s.display();
    return 0;
}

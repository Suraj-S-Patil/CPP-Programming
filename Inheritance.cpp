#include<iostream>
using namespace std;

class super
{
    protected:
    int i,j;
    public:
    void input(int a, int b)
    {
        i=a;
        j=b;
    }
};

class sub: public super
{
    public:
    void display()
    {
        cout<<"a="<<i<<endl<<"b="<<j;
    }
};

int main()
{
    sub s;
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    s.input(a,b);
    s.display();
    return 0;
}

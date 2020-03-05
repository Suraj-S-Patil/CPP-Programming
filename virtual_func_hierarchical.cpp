#include<iostream>

using namespace std;

class base
{
    public:
    virtual void fun()
    {
        cout<<"This is the base class virtual function!"<<endl;
    }
};

class derived1:public base
{
    public:
    void fun()
    {
        cout<<"This is the derived class virtual function!"<<endl;
    }
};

class derived2:public base
{
    public:
};

int main()
{
    base *p,b;
    derived1 d1;
    derived2 d2;
    p=&b;
    p->fun();
    p=&d1;
    p->fun();
    p=&d2;
    p->fun();

    return 0;
}

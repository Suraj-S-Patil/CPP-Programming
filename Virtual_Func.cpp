#include<iostream>
using namespace std;

class sample
{
    int a,b;
    public:
    virtual void fun()
    {
        cout<<"This is sample class virtual function.\n";
    }
};

class sample1:public sample
{
    public:
    void fun()
    {
        cout<<"This is sample1 class virtual function.\n";
    }
};

class sample2:public sample1
{
    public:
    /*void fun()
    {
        cout<<"This is sample2 class virtual function.\n";
    }*/
};

int main()
{
    sample s,*p;
    sample1 s1;
    sample2 s2;
    p=&s;
    p->fun();
    p=&s1;
    p->fun();
    p=&s2;
    p->fun();
    return 0;
}

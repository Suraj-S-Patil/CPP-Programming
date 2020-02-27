#include<iostream>
using namespace std;

class sample
{
    public:
    virtual void fun()=0;
};

class sample1:public sample
{
    public:
    void fun()
    {
        cout<<"This is the sample1 class virtual function."<<endl;
    }
};

class sample2:public sample
{
    public:
    void fun()
    {
        cout<<"This is the sample2 class virtual function."<<endl;
    }
};

int main()
{
    sample *p;
    sample1 s1;
    sample2 s2;
    p=&s1;
    p->fun();
    p=&s2;
    p->fun();
    return 0;
}

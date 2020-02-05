#include<iostream>
using namespace std;

class sample
{
    public:
    void func(int, int);
    void func(int, float);
    void func(int, double);
};

void sample::func(int a, int b)
{
    cout<<"This is a function with int and int"<<endl;
}

void sample::func(int a, float b)
{
    cout<<"This is a function with int and float."<<endl;
}

void sample::func(int a, double b)
{
    cout<<"This is a function with int and double."<<endl;
}

int main()
{
    sample s;
    s.func(1,2);
    s.func(1,2.5);
    s.func(1,2.0035);
    return 0;
}

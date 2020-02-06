#include<iostream>
using namespace std;

class sample
{
    public:
    static int s1;
    static void func(int, int);
};

int sample::s1=1;

void sample::func(int a, int b)
{
    cout<<"This is a function and the values of a and b are: "<<a++<<" and "<<b++<<" respectively."<<endl;
    cout<<a<<b<<endl;
    cout<<s1;
}

int main()
{
    sample s;
    s.s1+=1;
    cout<<"The value of static variable s1 is : "<<s.s1<<endl;
    s.func(23,45);
    return 0;
}

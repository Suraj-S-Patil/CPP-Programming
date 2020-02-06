#include<iostream>
using namespace std;

class sample
{
    public:
    inline int func(int a,int b)
    {
        return a>b?a:b;
    }
};

int main()
{
    sample s;
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"The greatest number is: "<<s.func(a,b)<<"."<<endl;
    return 0;
}

#include<iostream>
using namespace std;
class sample1
{
    public:
    void add()
    {
        int a,b,tot;
        cout<<"Enter two Numbers: ";
        cin>>a>>b;
        tot=a+b;
        cout<<"Sum of two numbers is: "<<tot;
    }
};
class sample2:public sample1
{
};
int main()
{
    sample2 s2;
    s2.add();
    return 0;
}

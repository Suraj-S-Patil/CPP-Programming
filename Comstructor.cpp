#include<iostream>
using namespace std;

class sample
{
    public:
    sample()
    {
        cout<<"This is a constructor."<<endl;
    }
    sample(int a, int b)
    {
        cout<<a+b;
    }
};

int main()
{
    sample x;
    sample x1(45,85);
    return 0;
}

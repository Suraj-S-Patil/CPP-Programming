// This program will give you an error that constructor is redeclared in the program which is not allowed.

#include<iostream>
using namespace std;

class conc
{
    public:
    conc(int a)
    {
        cout<<"This is a constructor with int."<<endl;
    }

    conc(int a, int b)
    {
      conc<<"This is a constructor with int and int."<<endl;
    }

    conc(int a, float b)
    {
        cout<<"This is a constructor with int and float."<<endl;
    }

    conc(int a, double b)
    {
        cout<<"This is a constructor with int and double."<<endl;
    }
};

int main()
{
    conc c(1);
    conc c(1,2);
    conc c(1,2.5);
    conc c(1,2.0035);
    return 0;
}

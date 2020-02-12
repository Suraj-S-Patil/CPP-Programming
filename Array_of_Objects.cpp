#include<iostream>
using namespace std;

class obj
{
    public:
    int a,b;
    void input();
    void display();
};

void obj::input()
{
    cout<<"Enter the value of a and b: "<<endl;
    cin>>a>>b;
}

void obj::display()
{
    cout<<"\t\t"<<a<<"\t\t"<<b<<endl;
}
int main()
{
    obj o[10];
    int i;
    for(i=0;i<10;i++)
        o[i].input();
    cout<<"The value of a and b are as follows: "<<endl<<endl;
    cout<<"\t\ta\t\tb"<<endl<<endl;
    for(i=0;i<10;i++)
        o[i].display();
    return 0;
}

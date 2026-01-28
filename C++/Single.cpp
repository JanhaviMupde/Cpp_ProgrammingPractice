#include<iostream>
using namespace std;

class Base //parent
{
    public :
    int i,j;

    void fun()
    {
        cout<<"inside base fun\n";
    }
};

class Derived : public Base
{
    public:
    int x;

    void gun()
    {
        cout<<"inside derived gun\n";
    }
};

int main()
{
    Base bobj;
    Derived dobj;

    cout<<"Size of base class object : "<<sizeof(bobj)<<" bytes\n";
    
    cout<<"Size of derived class object : "<<sizeof(dobj)<<" bytes\n";

    return 0;
}
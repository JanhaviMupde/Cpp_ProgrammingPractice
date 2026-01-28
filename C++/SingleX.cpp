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

    dobj.fun();
    dobj.gun();
    bobj.fun();

    return 0;
}
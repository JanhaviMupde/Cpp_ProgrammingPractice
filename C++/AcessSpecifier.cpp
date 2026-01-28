#include<iostream>
using namespace std;

class Base //parent
{
    public :
        int i;
    private :
        int j;
    protected:
        int k;

    public:
        Base()
        {
            i =10; j=20; k=30;
        }

};

class Derived : public Base
{
    

};

int main()
{
    Base bobj;
    Derived dobj;

    return 0;
}
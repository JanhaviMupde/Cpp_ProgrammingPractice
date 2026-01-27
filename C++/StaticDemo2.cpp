#include<iostream>
using namespace std;

class Demo
{
    public:

        int i,j;
        static int x;
        
        Demo()
        {
            this->i = 0;
            this->j = 0;
        }

        Demo(int a, int b)
        {
            this->i=a;
            this->j = b;
        }

        void Fun() //void fun(Demo * const this)
        {
            cout<<"Inside fun..\n";
            cout<<"Value of i is : "<<this->i<<"\n";
            cout<<"Value of j is : "<<this->j<<"\n";
            cout<<"Value of x is : "<<x<<"\n";
        }

        static void Gun()
        {
            cout<<"Inside gun..\n";
        }
};

int Demo :: x = 11;

int main()
{
    Demo :: Gun();

    cout<<"Value of x is : "<<Demo::x<<"\n";

    Demo dobj(10,20);
    
    dobj.Fun();

    return 0;
}
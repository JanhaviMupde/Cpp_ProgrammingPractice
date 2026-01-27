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

    return 0;
}
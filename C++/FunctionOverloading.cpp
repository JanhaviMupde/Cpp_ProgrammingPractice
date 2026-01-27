#include<iostream>
using namespace std;

class Demo
{
    public:

    //overloading by changing number of parameters
    void fun(int i, int j) //fun@2ii
    {}
    void fun(int i, int j, int k) //fun@3iii
    {}

    void gun(int i, double j) //gun@2id
    {}
    
    void gun(double j,int i) //gun@2di
    {}

    void sun(char ch1, char ch2) //sun@2cc
    {}
    void sun(float f1, float f2) //sun@2ff
    {}
    
};

int main()
{
    return 0;
}
#include<iostream>
using namespace std;

class Arithmatic
{
    public:
        int iNo1;
        int iNo2;

        Arithmatic()
        {
            cout<<"inside default contructor..\n";
            iNo1 = 0;
            iNo2 = 0;
        }

        Arithmatic(int a, int b)
        {
            cout<<"inside parameterized contructor..\n";
            iNo1 = a;
            iNo2 = b;
        }

        int Addition()
        {
            int iAns = 0;
            iAns = iNo1 + iNo2;
            return iAns;
        }

        int Subtraction()
        {
            int iAns = 0;
            iAns = iNo1 - iNo2;
            return iAns;
        }
};

int main()
{
    Arithmatic aobj1(11,10);
    Arithmatic aobj2(21,10);
    Arithmatic aobj3;

    int iRet = 0;

    iRet = aobj1.Addition();
    cout<<"Addition is :"<<iRet<<"\n";
    
    iRet = aobj2.Subtraction();
    cout<<"Subtraction is :"<<iRet<<"\n";

    return 0;
}
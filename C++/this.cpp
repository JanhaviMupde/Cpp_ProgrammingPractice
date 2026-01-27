#include<iostream>
using namespace std;

class Arithmatic
{
    public:
        int iNo1;
        int iNo2;

        Arithmatic()
        {
            this->iNo1 = 0;
            this->iNo2 = 0;
        }

        Arithmatic(int a, int b)
        {
            this->iNo1 = a;
            this->iNo2 = b;
        }

        int Addition()
        {
            int iAns = 0;
            iAns = this->iNo1 + this->iNo2;
            return iAns;
        }

        int Subtraction()
        {
            int iAns = 0;
            iAns = this->iNo1 - this->iNo2;
            return iAns;
        }
};

int main()
{
    Arithmatic aobj1(11,10);
    Arithmatic aobj2(21,10);

    int iRet = 0;

    iRet = aobj1.Addition();
    cout<<"Addition is :"<<iRet<<"\n";
    
    iRet = aobj1.Subtraction();
    cout<<"Subtraction is :"<<iRet<<"\n";
    
    iRet = aobj2.Addition();
    cout<<"Addition is :"<<iRet<<"\n";
    
    iRet = aobj2.Subtraction();
    cout<<"Subtraction is :"<<iRet<<"\n";

    return 0;
}
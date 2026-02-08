 #include<iostream>
using namespace std;

void DisplayBinary(int iNo)
{
    int iDigit = 0; //local variable
    cout<<"binary conversion is :\n";

    while(iNo != 0)
    {
        iDigit = iNo % 2;
        cout<<iDigit;
        iNo = iNo/2;
    }
}

int main()
{
    int iValue = 0;

    cout<<"enter the number\n";
    cin>>iValue;
    
    DisplayBinary(iValue);
    return 0;
}
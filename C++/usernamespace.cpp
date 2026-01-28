#include<iostream>
using namespace std;
namespace PPA
{
    int i = 11;
}

namespace LB
{
    int i = 21;
}

int main()
{
    cout<<PPA::i<<"\n";   //11
    
    cout<<LB::i;    //21
    return 0;
}
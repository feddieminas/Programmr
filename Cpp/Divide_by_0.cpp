//
//  http://www.programmr.com/zone/cpp
//
//  Divide_by_0.cpp
//  ProgrammrCpp
//

#include <iostream>
#include <stdexcept>

using namespace std;
// Integer division, catching divide by zero.

inline int intDivEx (int numerator, int denominator)
{
    if (denominator==0)
        throw overflow_error("EXCEPTION");
    return numerator / denominator;
}

int main(void)
{
    int a=0,b=0,i=1;
    cout<<"Enter the numerator:";
    cin>>a;
    cout<<"Enter the denominator:";
    cin>>b;
    
    try
    {
        i=intDivEx(a,b);
        cout<<"VALID";
    }
    catch (overflow_error e)
    {
        cout<<e.what();
    }
    
    return 0;
}

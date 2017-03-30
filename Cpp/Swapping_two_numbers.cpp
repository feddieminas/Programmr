//
//  http://www.programmr.com/zone/cpp
//
//  Swapping_two_numbers.cpp
//  ProgrammrCpp
//

#include <iostream>
using namespace std;

//1) 2)
void xorSwap(int& x, int& y);

//3)
/*
template <typename T> // or template <class T>
void xorSwap(T& x,T& y)
{
    T temp;
    temp=x;
    x=y;
    y=temp;
}
*/

int main()
{
    int a,b;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number:";
    cin>>b;
    
    ///{Write your code here
    
    //1) 2) 3)
    xorSwap(a,b);
    
    //or
    //3) only call template alternatively
    //xorSwap<int>(a,b);
    
    ///}
    
    cout<<a<<" "<<b;
    return 0;
}

    
//1)
///*
void xorSwap(int& x, int& y)
{
    if (x != y)
    {
        x ^= y;
        y ^= x;
        x ^= y;
    }
    
}
//*/


//2)
/*
void xorSwap(int& x, int& y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
*/
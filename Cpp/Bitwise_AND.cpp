//
//  http://www.programmr.com/zone/cpp
//
//  Bitwise_AND.cpp
//  ProgrammrCpp
//

#include<iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the first element:\n";
    cin>>a;
    cout<<"Enter the second element:\n";
    cin>>b;
    
    //{Write code here
    
    //Cross check a
    a=a<<1; //if a is 2, then 4 (2*2**1)
    a=a>>1; //if a is 4, then 2 (4/2**1)
    
    //Cross check b
    b=b<<1; //if b is 2, then 4 (2*2**1)
    b=b>>1; //if b is 4, then 2 (4/2**1)
    
    c=a & b;
    
    // }
    
    cout<<"The value is:"<<c<<"\n";
    
    return 0;
}

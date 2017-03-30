//
//  http://www.programmr.com/zone/cpp
//
//  Armstrong_Number.cpp
//  ProgrammrCpp
//

#include <iostream>

using namespace std;

int main()
{
    int i,num,r,sum=0;
    
    cout<<"Enter a number:\n";
    cin>>num;
    i=num;
    
    while(num!=0)
    {
        //write your logic here
        r=num%10;
        sum+=r*r*r;
        num/=10;
        //end
    }
    if(sum==i)
        cout<<"Number is a Armstrong number";
    else
        cout<<"Number is not a Armstrong number";
    
    return 0;
}

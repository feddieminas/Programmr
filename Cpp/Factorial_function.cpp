//
//  http://www.programmr.com/zone/cpp
//
//  Factorial_function.cpp
//  ProgrammrCpp
//

#include <iostream>
#include <string>
using namespace std;

//fact() Define a factorial function
// {{ write your code here

//1)
///*
int fact(unsigned int n) //non recursive function / Other type could be long
{
    int retval=1;
    for (int i=n;i>1;--i)
        retval*=i;
    return (retval);
}
//*/

//2)
/*
int fact(unsigned int n) //recursive function
{
    return (n==1 || n==0)?1:fact(n-1) * n;
}
*/

// }}

int main(int argc, char* argv[])
{
    int n;
    long int ans;
    for(int i=0;i<3;i++)
    {
        cin>>n;
        ans=fact(n);
        cout<<ans<<endl;
    }
    
    return 0;
}

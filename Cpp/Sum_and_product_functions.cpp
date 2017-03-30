//
//  http://www.programmr.com/zone/cpp
//
//  Sum_and_product_functions.cpp
//  ProgrammrCpp
//

#include <iostream>
#include <string>
using namespace std;

//sum() and product() // define these functions
//{{ write your code here

int sum(int,int); //Prototype
int product(int,int); //Prototype

//can also write below functions here !

//}}

int main(int argc, char* argv[])
{
    int a,b,answer1,answer2;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number:";
    cin>>b;
    
    answer1 = sum(a,b);
    answer2 = product(a,b);
    
    cout<<answer1 <<endl;
    cout<<answer2;
}


inline int sum(int a,int b)
{
    return(a+b);
}

inline int product(int a,int b)
{
    return(a*b);
}

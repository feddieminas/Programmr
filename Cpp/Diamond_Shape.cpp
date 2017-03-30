//
//  http://www.programmr.com/zone/cpp
//
//  Diamond_Shape.cpp
//  ProgrammrCpp
//

#include<iostream>
//#include<stdio.h>

using namespace std;

int main()
{
    int i, j, k,SIZE;
    
    cout << "Enter an odd number: ";
    
    cin>>SIZE;
    
    SIZE=(SIZE/2)+1;
    
    cout<<"Diamond is :\n";
    
    for(i=1;i<=SIZE;i++)
    {
        for(j=i;j<SIZE;j++)
        {
            cout<<"-";
        }
        for(k=1;k<(i*2);k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    
    for(i=SIZE-1;i>=1;i--)
    {
        for(j=SIZE;j>i;j--)
        {
            cout<<"-";
        }
        for(k=1;k<(i*2);k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    //getc();
    
    return 0;
    
}
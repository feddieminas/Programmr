//
//  http://www.programmr.com/zone/cpp
//
//  Counting_number_of_exceptions.cpp
//  ProgrammrCpp
//

#include<iostream>

using namespace std;

int main()
{
    int num, count=0;
    cout<<"\n\tEnter the number of iterations : ";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        try
        {
            if (i<3) count=0;
            if (i%4==0 && i>=3) throw 1;
        }
        catch (int e)
        {
            count+=e;
        }
    }
    cout<<"\n\tNumber of exceptions : "<<count;
    return 0; 
}

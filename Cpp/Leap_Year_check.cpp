//
//  http://www.programmr.com/zone/cpp
//
//  Leap_Year_check.cpp
//  ProgrammrCpp
//

#include<iostream>

using namespace std;

int main()
{
    int y;
    cout<<"Enter a year: ";
    cin>>y;
    
    if(y%4==0)  //might need to check also mod 100 and mod 400. Could be the case with earlier years
    {
        cout<<"Leap"; //Leap Year
    }
    else
    {
        cout<<"Not leap"; //Not a Leap Year
    }
    
    return 0;
}

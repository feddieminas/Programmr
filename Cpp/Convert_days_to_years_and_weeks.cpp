//
//  http://www.programmr.com/zone/cpp
//
//  Convert_days_to_years_and_weeks.cpp
//  ProgrammrCpp
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    
    int days,years,weeks,num1,daysrem;
    cout << "Enter the number of days : " << endl;
    cin>>days;
    
    ///{Write your code here
    years=days/365; //Years come first so you only divide it by 365
    num1=days%365;   //What is your remainder of days from the years count. 560-365 in this case
    weeks=num1/7;    //divide this remainder of days by 7, which is a week
    daysrem=num1%7;     //the remainder now from years and weeks, the rest of number will be the days
    
    weeks=days/7; //Exercise wants weeks that way
    //cout<<weeks;
    cout <<"Years-"<< years<<"Weeks-"<<weeks<<"\n";
    //cout <<"Years="<< years<<","<<"Weeks="<<weeks<<","<<"Days="<<days<<"\n";
    
    ///}
    
}

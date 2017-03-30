//
//  http://www.programmr.com/zone/cpp
//
//  Gross_Salary_Check.cpp
//  ProgrammrCpp
//

#include <iostream>

using namespace std;

int main ()
{
    int BSalary=1500, ESalary;
    double HRA, DA;
    double GSalary=0;
    
    cout << "Enter Employee Salary : ";
    cin >> ESalary;
    if (ESalary<BSalary)
    {
        HRA=0.10; DA=0.90;
        GSalary=ESalary * DA;
        GSalary+=ESalary;
        GSalary+=ESalary * HRA;
    }
    else if (ESalary>=BSalary)
    {
        HRA=500; DA=0.98;
        GSalary=ESalary * DA;
        GSalary+=ESalary;
        GSalary+=HRA;
    }
    else {}
    cout << "My Gross Salary : " << GSalary;
    return 0;
}


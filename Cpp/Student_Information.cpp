//
//  http://www.programmr.com/zone/cpp
//
//  Student_Information.cpp
//  ProgrammrCpp
//

#include<iostream>
#include<cstring>
using namespace std;

class student
{

public:
    // Constructors
    student() {} // Default constructor
    student(int Roll_noV, char* NameV, float PercentageV) {
        Roll_no=Roll_noV;
        Name=NameV;
        Percentage=PercentageV;
    }
    
    void DisplayData() {
        cout << "Name, Roll No, Percentage :" << endl;
        cout << Name << endl;
        cout << Roll_no << endl;
        cout << Percentage << endl;
    }
    
    ~student() {} // Destructor
    
private:
    int Roll_no;
    char* Name;
    float Percentage;

};

int main()
{
    float p;
    int rno;
    char str[20];
    cout<<"\n\tEnter name : ";
    cin.getline(str,20);
    cout<<"\n\tEnter roll number : ";
    cin>>rno;
    cout<<"\n\tEnter percentage : ";
    cin>>p;
    student myinfo(rno,str,p);
    myinfo.DisplayData();
    return 0;
}

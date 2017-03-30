//
//  http://www.programmr.com/zone/cpp
//
//  Student_Details.cpp
//  ProgrammrCpp
//

#include<iostream>
//#include<string>
using namespace std;

///Write your code here
class student
{
    
    char* name=new char[11];  //or char name[11];
    int marks1,marks2,totmarks;
    
public:
    student() {}
    
    void get();
    
    void calc();
    
    void disp();
    
    ~student()  //or ~student();
    {
        delete[] name;  //works also delete name but should be undefined; or if char name[11]; no delete here
        cout<<"A student died"<<endl;
        
    }//;
    
};

void student::get()
{
    cin>>name;
    cin>>marks1;
    cin>>marks2;
}

void student::calc()
{
    totmarks=marks1+marks2;
}

void student::disp()
{
    cout<<name<<endl;  //if *(name) only first character
    cout<<totmarks<<endl;
}

///

int main(int argc, char* argv[])
{
    student s;
    s.get();
    s.calc();
    s.disp();
    
    return 0;
}
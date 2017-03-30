//
//  http://www.programmr.com/zone/cpp
//
//  Student_Percentage.cpp
//  ProgrammrCpp
//

#include<iostream>
//#include<cstring>  //or string.h for strlen

using namespace std;

class student
{
    char name[20];
    int roll_no;
    int marks[5];
    float percentage; //can use inline since function def is outside the class
    float calcpercent();
    
public:
    student() { } // constructor
    
    void inputs();
    void outputpercent();
    
    //~student();
    
    ~student()  //or ~student();
    {
        cout<<"A not student"<<endl;
    }//;
};

void student::inputs()
{
    cin>>name;
    cin>>roll_no;
    for(int i=0;i<sizeof(marks)/sizeof(marks[0]);i++)
    {
        cin>>marks[i];
    }
}

float student::calcpercent()
{
    int lenArr=sizeof(marks)/sizeof(marks[0]);
    percentage=0;
    for(int i=0;i<lenArr;i++)
        percentage+=marks[i];
    percentage=(percentage/lenArr);
    return percentage;
}

void student::outputpercent()
{
    cout<<calcpercent()<<endl;
}


int main()
{
    
    student s1;
    
    s1.inputs();
    
    s1.outputpercent();
    
    return 0; 
} 



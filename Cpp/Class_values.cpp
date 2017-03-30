//
//  http://www.programmr.com/zone/cpp
//
//  Class_values.cpp
//  ProgrammrCpp
//

#include <iostream>
#include <string>
using namespace std;

///{Write your class here
class clasmf
{
public:
    int a=0,b=0;
    
    clasmf() {}
    
    void input();
    
    friend int mymultiply();
    //OR
    //friend int mymultiply(clasmf mf);
    
    ~clasmf() {}
    
};

// Member function definition
void clasmf::input()
{
    cout<<"Enter 1st number:\n";
    cin>>a;
    cout<<"Enter 2nd number:\n";
    cin>>b;
}

int mymultiply(clasmf mf)
{
    return mf.a*mf.b;
}


int main()
{
    clasmf c;
    c.input();
    
    int res;
    res=mymultiply(c);
    cout<< res;
    
    return 0;
    
}
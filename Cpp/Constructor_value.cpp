//
//  http://www.programmr.com/zone/cpp
//
//  Constructor_value.cpp
//  ProgrammrCpp
//

#include <iostream>
#include <string>
using namespace std;

///{{ write class  here
class MyOutput {
public:
    char printc;
    
    MyOutput() {printc='0';}
    //OR
    //MyOutput():printc('0') {}
    
    MyOutput(char printc)
    {
        cout << printc << endl;
    }
    
    ~MyOutput() {}
    
};

///}}
int main()
{
    char a;
    cin >> a;
    
    MyOutput x(a);
    //OR
    //MyOutput* x=new MyOutput(a);
    //delete x;
    
    
    return 0;
}



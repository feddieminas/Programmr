//
//  http://www.programmr.com/zone/cpp
//
//  Operator_plus.cpp
//  ProgrammrCpp
//

#include <iostream>
#include <string>
using namespace std;

class MyAdd {
public:
    MyAdd () {x=0;}
    MyAdd (float a) {x=a;}
    MyAdd operator + (const MyAdd &param)
    {
        MyAdd temp;
        temp.x=x+param.x;
        return (temp);
        //return MyAdd(x+param.x);
    }
    
    float getMyAdd() const {return x;}
    
private:
    float x;
};

int main(int argc, char* argv[])
{
    float a,x,b; //,c=0;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number:";
    cin>>b;
    cout<<"Enter 3rd number:";
    cin>>x;
    
    
    ///{ Write your code here
    MyAdd m (a);
    MyAdd y (b);
    MyAdd z (x);
    MyAdd d=m+y+z;
    
    cout << d.getMyAdd();
    return 0;
    
    ///}  
    
    //cout<<c;  
}  


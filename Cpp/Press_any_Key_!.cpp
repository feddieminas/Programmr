//
//  http://www.programmr.com/zone/cpp
//
//  Press_any_Key_!.cpp
//  ProgrammrCpp
//

#include <iostream>
#include <string>
using namespace std;
int main ()
{
    char ch;
    cout<<"Enter any character:";
    cin>>ch;
    
    ///{ Write your code here
    
    
    if (ch>=65 && ch<=90)
        cout<<"capital letter";
    else if (ch>=97 && ch<=122)
        cout<<"small letter";
    else if (ch>=48 && ch<=57)
        cout<<"digit";
    else if ((ch>0 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=127))
        cout<<"special symbol";
    
    ///}
    
    return 0;
}
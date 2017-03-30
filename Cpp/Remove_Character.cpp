//
//  http://www.programmr.com/zone/cpp
//
//  Remove_Character.cpp
//  ProgrammrCpp
//

#include <iostream>
using namespace std;
int main()
{
    char str[20],deletechar,reStr[20]="";
    cout<<"Enter String:\n";
    cin>>str;
    
    cout<<"Enter Character which you want to delete:\n";
    cin>>deletechar;
    //write your logic here
    
    int count = 0;
    
    for (int i = 0; str[i]; i++)
        if (str[i] != deletechar)
            reStr[count++] = str[i];
    
    str[count] = '\0';
    
    //end
    cout<<"Result String is:\n";
    cout<<reStr;
    
    
    return 0;
}
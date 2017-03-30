//
//  http://www.programmr.com/zone/cpp
//
//  Check_String_for_uppercase.cpp
//  ProgrammrCpp
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout<<"Enter the string:\n";
    string s;
    cin>>s;
    ///{write you code here
    char c;
    int i=0,count=0;
    while (s[i])
    {
        c=s[i];
        //if ((c >= 'A') && (c <= 'Z'))
        if (isupper(c))
            count+=1;
        i++;
    }
    
    string myresult;
    if (count==s.length()) //or strlen
    {
        myresult="VALID";
    }
    else
    {
        myresult="INVALID";
    }
    
    cout << myresult;
    return 0;
    
    ///}
}

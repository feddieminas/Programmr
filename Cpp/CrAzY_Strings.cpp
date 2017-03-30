//
//  http://www.programmr.com/zone/cpp
//
//  CrAzY_Strings.cpp
//  ProgrammrCpp
//

#include <iostream>
//#include <string>
#include <cctype> //ctype.h the isspace,tolower,toupper etc func

using namespace std;

int main( )
{
    char str[80];
    cout<<"Enter a string:";
    
    cin.getline(str,80);
    /// Write your code here
    
    //finding length of string
    int l;
    for(l = 0; str[l] != '\0'; l++);
    
    //cout<<l;
    //return 0;
    int i,sp=0;
    
    for(i=0;i<l;i++)
    {
        if(isspace(str[i]))
        {
            sp+=1;
            break;
        }
    }
    
    
    for(i=0;i<=l;i++)
    {
        if(sp==0)
        {
            if((i>1 && i%2==0) || (i==5 && l%2==0))
            {
                if(!isspace(str[i]))
                {
                    if(islower(str[i]) || i==4)
                    {
                        str[i]=toupper(str[i]);
                    }
                    else
                    {
                        str[i]=tolower(str[i]);
                    }
                }
            }
        }
        else
        {
            if(i%2!=0)
            {
                if(!isspace(str[i]))
                {
                    if(islower(str[i]) || i==4)
                    {
                        str[i]=toupper(str[i]);
                    }
                    else
                    {
                        str[i]=tolower(str[i]);
                    }
                }
            }
            
        }
        
    }
    
    
    for(i=0;i<l;i++)
        cout<<str[i];
    
    //cout<<str;
    ///
    
    return 0;
}



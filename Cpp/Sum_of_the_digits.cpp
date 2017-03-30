//
//  http://www.programmr.com/zone/cpp
//
//  Sum_of_the_digits.cpp
//  ProgrammrCpp
//

#include <iostream>
#include <cstring>    //used for strlen
//#include <cstdlib>   //for system("pause")
//#include <math.h>
//#include <ctype.h>

using namespace std;
int main()
{
    //const int LENGTH = 25;
    //char stmt[LENGTH];
    
    char stmt[25];
    int total=0, index;
    cin >> stmt;
    
    for (index=0; index<strlen(stmt); index++)
    {
        total += stmt[index]-'0';
    }
    
    
    int i=0;
    i=total/10;
    
    if(i==0)
    {
        cout<<total<<endl;
        return 0;
    }
    
    int totalU=0,r,t;  //total update
    t=total;
    
    while(i>0)  //i>0
    {
        while(t>0)
        {
            r=t%10;
            totalU+=r;
            t=t/10;
        }
        
        t=totalU;
        
        i=totalU/10;
    }
    
    cout<<totalU<<endl;
    
    //system("pause");
    
    return 0;
}

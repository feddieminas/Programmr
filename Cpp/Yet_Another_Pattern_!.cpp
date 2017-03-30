//
//  http://www.programmr.com/zone/cpp
//
//  Yet_Another_Pattern_!.cpp
//  ProgrammrCpp
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    
    int i,j,rows=5,tratc;
    
    for (i=1;i<=rows;++i)
    {
        tratc=rows-i;   //finished with the -
        while (tratc>0)
        {
            cout << "-";
            tratc--;
        }
        
        //Backward Loop
        if (i>1)
        {
            for (j=i;j>1;--j)
            {
                cout<<j;
            }
        }
        
        //Normal Loop
        for(j=1;j<=i;++j)
        {
            cout<<j;
        }
        
        cout<<"\n";
        
    }
    
    
    return 0;
    
}

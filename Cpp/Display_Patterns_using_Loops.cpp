//
//  http://www.programmr.com/zone/cpp
//
//  Display_Patterns_using_Loops.cpp
//  ProgrammrCpp
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, char* argv[])
{
    int N;
    cout<<"Enter value of N:";
    cin>>N;
    if (N==0)
        return 0;
    
    ///{Write your code here
    int k=1;
    for (int r=1;r<=N;r++)
    {
        if (r==1)
        {
            while (k<=N)
            {
                cout <<"*";
                k++;
            }
            
        }
        else
        {
            k=1;
            while (k<r)
            {
                cout << "-";
                k++;
            }
            
            k=1;
            while (k<=N-r+1)
            {
                cout <<"*";
                k++;
            }
            
        }
        
        cout << "\n";
    }
    
    return 0;
    
    ///}
}

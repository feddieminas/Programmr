//
//  http://www.programmr.com/zone/cpp
//
//  Reverse_Triangle.cpp
//  ProgrammrCpp
//

#include <iostream>

using namespace std;

int main()
{
    int size,i,j;
    //cout<<"Enter the size:";
    cin >>size;
    
    //cout<<"Triangle is:\n";
    //Write your logic here
    for(i=size;i>=1;--i)
    {
        if (i<size)
        {
            for(j=size;j>i;j--)
            {
                cout<<"-";
            }
        }
        
        for(j=1;j<=i;++j)
        {
            cout << j;
        }
        cout << endl;
    }
    
    //end 
    
    return 0;
} 



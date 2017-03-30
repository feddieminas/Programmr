//
//  http://www.programmr.com/zone/cpp
//
//  Sorting_of_Array.cpp
//  ProgrammrCpp
//

#include <iostream>
//#include <string>
using namespace std;
const int N=4;

int main(int argc, char* argv[])
{
    int a[N],i,j,tmp;
    
    for (i=0;i<N;i++)
    {
        cout << "Please enter an integer: ";
        cin >> a[i];
    }
    
    ///{Write your code here
    int flag=1;
    
    for(i=1;(i<N) && flag;i++)
    {
        flag=0;
        for(j=0;j<(N-1);j++) //n-1 because then u do j+1
        {
            if(a[j+1]<a[j]) //sort ascending and > is sort descending
            {
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
                flag=1;
            }
        }
        
    }
    
    ///}
    
    cout << "The sorted array:" << endl;
    for (i=0;i<N;i++)
        cout << "a[" << i << "] = " << a[i] << endl;
    
    return 0;
}

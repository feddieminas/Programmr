//
//  http://www.programmr.com/zone/cpp
//
//  Number_Occurrence_in_Array.cpp
//  ProgrammrCpp
//

#include <iostream>

using namespace std;

int main()
{
    
    int arr[8];
    int number=0,countOccurrence=0;
    
    for(int i=0;i<8;i++)
    {
        cout<<"Enter Number ["<<i<<"]:\n";
        cin>>arr[i];
    }
    cout<<"Enter a number which exist in the array:\n";
    cin>>number;
    //write your logic here
    
    int COUNT_SIZE=sizeof(arr)/sizeof(arr[0]);
    
    for (int i=0;i<COUNT_SIZE;i++)
    {
        if (number==arr[i])
            countOccurrence+=1;
    }
    
    //end
    cout<<"Occurrence of "<<number<<" :\n";
    cout<<countOccurrence;
    
    return 0;
}


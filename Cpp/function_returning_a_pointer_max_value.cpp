//
//  http://www.programmr.com/zone/cpp
//
//  function_returning_a_pointer_max_value.cpp
//  ProgrammrCpp
//

#include<iostream>
using namespace std;
int *findMax(int arr[],int n);

int main()
{
    int n,i,*p;
    cout<<"Enter number of values:";
    cin>>n;
    cout<<"Enter values in array:\n";
    int arr[n];
    
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    p=findMax(arr,n);
    cout<<"Largest integer value in the array is "<<*p;
    
    return 0;
}

//1)
///*
int * findMax(int a[],int n)
{
    int *maximum=a; //assumes is a[0]
    for (int i=1;i<n;i++)
    {
        if (*maximum<a[i]) maximum=a+i;
    }
    return maximum;
}
//*/

//2)
/*
int  * findMax(int a[],int n)
{
    int *maximum=a; //assumes is a[0]
    if (n!=0)
    {
        for (int *p=a+1; p!= a+n; ++p)
        {
            if (*maximum < *p) maximum=p;
        }
    }
    
    return maximum;
} 
*/
 

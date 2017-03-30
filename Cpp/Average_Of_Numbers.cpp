//
//  http://www.programmr.com/zone/cpp
//
//  Average_Of_Numbers.cpp
//  ProgrammrCpp
//

#include <iostream>
//#include <string>
using namespace std;

//int getavg(int,int);
int getavg(int numbers[],int size)
{
    int sum=numbers[0];
    for (int i=1;i<size;i++)
    {
        sum+=numbers[i];
    }
    
    return sum/size;
}


int main(int argc, char* argv[])
{
    int n;
    cout << "Enter how many numbers and the numbers: \n";
    cin>>n;
    
    int *arr=new int [n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    //int sum=0;
    
    // {{ Write your code here
    //for(int i=0; i<n; i++)
    //sum+=arr[i];
    
    int average;
    average=getavg(arr,n);
    
    delete [] arr;
    
    // }}
    
    //cout<<sum;
    cout<<average;
    
    return 0;
}
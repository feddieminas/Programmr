//
//  http://www.programmr.com/zone/cpp
//
//  min_&_max_values.cpp
//  ProgrammrCpp
//

#include <iostream>
//#include <string>
using namespace std;

int getmin(int [],int); //Correct array prototype

int getmax(int [],int);

int main(int argc, char* argv[])
{
    int N;
    int minvalue,maxvalue;
    cout <<"Enter N (number of elements) :"<<endl;
    cin>>N;
    int *Arr =new int [N];
    cout << "Enter the elements :"<<endl;
    for (int i = 0; i < N; i++)
    {
        cin>>Arr[i];
    }
    //{write your code here
    
    minvalue=getmin(Arr,N);
    maxvalue=getmax(Arr,N);
    
    delete [] Arr;
    
    //}
    cout<<"Min :"<<minvalue<<endl;
    cout<<"Max :"<<maxvalue<<endl;
    
    return 0;
}

int getmin(int numbers[],int size)
{
    int imin=0;
    for(int i=1;i<size;++i)
    {
        if(numbers[imin]>numbers[i])  //or <
            imin=i;
    }
    
    return numbers[imin];
}

int getmax(int numbers[],int size)
{
    int imax=0;
    for(int i=1;i<size;++i)
    {
        if(numbers[imax]<numbers[i])  //or >
            imax=i;
    }
    
    return numbers[imax];
}


//
//  http://www.programmr.com/zone/cpp
//
//  Find_Maximum_and_Minimum_Temperature.cpp
//  ProgrammrCpp
//

#include<iostream>
//#include<algorithm>  //2)

using namespace std;

int main()
{
    float *Arr=new float[7];  //or new double or new long or float Arr[7] and erase delete;
    
    //1)
    for(int i=0;i<7;i++)
        cin>>Arr[i];
    
    //Maximum
    float max=Arr[0];
    for(int i=1;i<7;i++)
    {
        if (Arr[i]>max)
            max=Arr[i];
    }
    
    //Maximum
    float min=Arr[0];
    for(int i=1;i<7;i++)
    {
        if (Arr[i]<min)
            min=Arr[i];
    }
    
    delete [] Arr;
    
    cout<<max<<endl;
    cout<<min<<endl;
    
    return 0;
    
    //OR
    
    //2)
    //for(int i=0;i<7;i++)
    //cin>>Arr[i];
    
    //sort(Arr,Arr+7);
    //cout<<"Maximum:"<<Arr[6]<<endl;
    //cout<<"Minimum:"<<Arr[0]<<endl;
    
    //delete [] Arr;
    //Arr=0; // use nullptr instead of 0 in C++11
    
    //return 0;
}

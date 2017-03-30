//
//  http://www.programmr.com/zone/cpp
//
//  Average_of_positive_and_negative_numbers.cpp
//  ProgrammrCpp
//

#include <iostream>
using namespace std;

template <typename Array>
float average(Array a, int count)
{
    float sum=0.0;
    for (int i=0; i<count;++i)
        sum+=a[i];
    return sum/(count==0.0 ? 1.0 : count);
}

int main()
{
    float arr[10];
    float avg_pos=0.0,avg_neg=0.0;
    
    for(int i=0;i<10;i++)
    {
        cout<<"Enter Number"<<"["<<i<<"]:\n";
        cin>>arr[i];
    }
    
    //Write your logic here
    
    //Positive Numbers
    float arrP[10]; //or arrP[ARRAY_SIZE]={0.0};
    int k=0;
    for(int i=0;i<10;i++)
    {
        if (arr[i]>0)
            {
                arrP[k]=arr[i];
                k++;
                }
    }
    
    avg_pos=average(arrP, k);
    
    //Negative Numbers
    float arrN[10]; //or arrN[ARRAY_SIZE]={0.0}; or arrN[8]={0.0};
    k=0;
    for(int i=0;i<10;i++)
    {
        if (arr[i]<0)
            {
                arrN[k]=arr[i];
                k++;
                }
    }
    
    avg_neg=average(arrN, k); 
    
    
    //end
    cout<<"positivenumbers:"<<avg_pos<<"\n";
    cout<<"negativenumbers:"<<avg_neg<<"\n";
    return 0;
}

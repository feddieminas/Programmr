//
//  http://www.programmr.com/zone/cpp
//
//  Sum_of_Naturals_divisible_by_3_and_5.cpp
//  ProgrammrCpp
//

#include<iostream>

using namespace std;

template<class T> T modDivT(T a, T b);
int* modDivF(int* a, int* b);  //Both Prototypes could have had also same name

int main()
{
    int accsum=0; //size_t accsum=0  int accsum=0
    int N;
    
    cin>>N;
    
    //1) Usign Template
    //accsum=modDivT(N, 3);
    //cout<<accsum;
    
    //return 0;
    
    //2) Using Function and Pointers
    int* accsump=reinterpret_cast<int*>(accsum);
    
    int k=3;
    int* num=&k;
    int* Nu=&N;
    accsump=modDivF(Nu, num);
    
    cout<<*accsump;
    
    return 0;
    
}


template <class T> T modDivT(T a, T b)
{
    int sum=0;
    for( int i = 1 ; i < a ; i++)
    {
        if (i%b==0 || i%(b+2)==0)
            sum+=i;
    }
    return sum;
}


int* modDivF(int* a, int* b)
{
    int* sum=new int;  //or new int[1]  OR int c=0; sum=&c;
    (*sum)=0;
    for( int i = 1 ; i < *a ; i++)
    {
        if (i%*b==0 || i%((*b)+2)==0)
            *sum+=i;  //or sum[1]
    }
    
    return sum; //or *sum
}



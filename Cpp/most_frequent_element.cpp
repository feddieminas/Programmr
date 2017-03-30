//
//  http://www.programmr.com/zone/cpp
//
//  most_frequent_element.cpp
//  ProgrammrCpp
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, char* argv[])
{
    
    int N;
    //int most_frequent_element=='\0';  null
    int most_frequent_element=0;
    cout <<"Enter N (number of elements) :"<<endl;
    cin>>N;
    int *Arr =new int [N];
    cout << "Enter the elements :"<<endl;
    for (int i = 0; i < N; i++)
    {
        cin>>Arr[i];
    }
    
    //{write your code Here
    int max_count=0;
    for (int i=0;i<N;i++)
    {
        int count=1;
        for (int j=i+1;j<N;j++)
            if (Arr[i]==Arr[j])
                count++;
        if (count>max_count)
            max_count=count;
        //most_frequent_element=Arr[i];
    }
    //most_frequent_element=0;
    int Foundelement=0;
    
    for (int i=0;i<N;i++)
    {
        int count=1;
        for (int j=i+1;j<N;j++)
            if (Arr[i]==Arr[j])
                count++;
        if (count==max_count && Foundelement==0)
        {
            most_frequent_element=Arr[i];
            Foundelement=1;
        } 
    }
    
    delete [] Arr;
    
    //}
    cout<<"most_frequent_element :"<<most_frequent_element<<endl;
    
    return 0;
    
}


//
//  http://www.programmr.com/zone/cpp
//
//  Sort_Arrays.cpp
//  ProgrammrCpp
//

//1)
///*
#include <iostream>
#include <algorithm>

using namespace std;

void Sort(int sortarr[],int n)
{
    // {{ Write your code here
    sort(sortarr,sortarr+n);
    
    for (size_t i=0;i<n;++i) //or int because size_t is unsigned
        cout << sortarr[i] << endl;
    
    return;
    // }}
    
}

int main(int argc, char* argv[])
{
    int n;
    cout<< "Enter how many numbers to sort and then enter them: \n" ;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter number "<<i<<":";
        cin>>arr[i];
    }
    
    Sort(arr,n);
    
}
//*/


//2) Using Vector
/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool wayToSort(int i,int j) {return i<j;}
    
int main()
{
    int N,num;
    cout <<"Enter how many numbers to sort and then enter them:"<<endl;
    cin>>N;
        
    cout <<"How many numbers to sort:"<<endl;
        
    vector<int> numList;
    for (int i=0;i<N;i++)
    {
        cout<<"Enter number "<<i+1<<":";
        cin>>num;
        numList.push_back(num);
    }
        
    sort(numList.begin(),numList.end(),wayToSort); //vectors
    
    for (int i : numList)
        cout << i << endl;
    
    return 0;
}
*/
//
//  http://www.programmr.com/zone/cpp
//
//  Insertion_at_a_Specified_Positon_in_an_Array.cpp
//  ProgrammrCpp
//

#include <iostream>
//#include <string>
using namespace std;

int main(int argc, char* argv[])
{
    int insert1=3;        //value to be replaced by
    int i;
    int index1=1;         //index position to be replaced
    int array1[5];
    
    cout << "Enter the 4 integer values:"<<endl;
    for(i=0;i<4;i++)
        cin>>array1[i];
    
    ///{Write your code here
    
    i=insert1;
    do
    {
        array1[i]=array1[i-1];
        i=i-1;
    }while(i>1);
    
    array1[index1]=3;
    
    array1[4]='\0';
    
    ///}
    
    
    cout<<"Resultant array is: \n";
    for(i=0;i<=3;i++)
        cout<<array1[i]<<endl;       
}

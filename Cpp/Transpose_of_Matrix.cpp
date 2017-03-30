//
//  http://www.programmr.com/zone/cpp
//
//  Transpose_of_Matrix.cpp
//  ProgrammrCpp
//

#include <iostream>
//#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    int arr[3][3],trans[3][3];
    int i,j;
    
    cout<<"Enter array numbers:\n";
    
    //1st matrix
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            cin>>arr[i][j];
    
    
    ///*
    //Your code goes here
    //trans to zero
    for (i=0;i<3;++i)
        for (j=0;j<3;++j)
        {
            trans[j][i]=0;
        }
    
    for (i=0;i<3;++i)
        for (j=0;j<3;++j)
        {
            trans[j][i]=arr[i][j];
        }
    
    //*/
    
    cout<<"Transpose of Matrix:\n";
    
    for (i=0;i<3;++i)
    {
        for (j=0;j<3;++j)
        {
            cout<<trans[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
    
}

//
//  http://www.programmr.com/zone/cpp
//
//  Matrix_Multiplication.cpp
//  ProgrammrCpp
//

#include <iostream>

using namespace std;

int main()
{
    int a[3][3],b[3][3],mult[4][4],i,j,k;
    
    //1st matrix
    for (i=0;i<3;++i)
        for (j=0;j<3;++j)
        {
            cout<<"Matrix 1st ["<<i<<"]["<<j<<"]:\n";
            cin>>a[i][j];
        }
    
    
    //2nd matrix
    for (i=0;i<3;++i)
        for (j=0;j<3;++j)
        {
            cout<<"Matrix 2nd ["<<i<<"]["<<j<<"]:\n";
            cin>>b[i][j];
        }
    
    
    //mmult to zero
    for (i=0;i<3;++i)
        for (j=0;j<3;++j)
        {
            mult[i][j]=0;
        }
    
    
    for (i=0;i<3;++i)
    {
        for (j=0;j<3;++j)
        {
            for (k=0;k<3;++k)
            {
                mult[i][j]+=a[i][k]*b[k][j];
            }
            
        }
    }
    
    
    for (i=0;i<3;++i)
    {
        for (j=0;j<3;++j)
        {
            cout<<mult[i][j]<<" ";
        }
        cout<<"\n";
        
    }
    
    
    return 0;
}

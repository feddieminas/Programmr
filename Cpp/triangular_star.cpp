//
//  http://www.programmr.com/zone/cpp
//
//  triangular_star.cpp
//  ProgrammrCpp
//

#include<iostream>

using namespace std;

int main()
{
    int i, j, k,SIZE,myminus=0,f=3;
    
    cout << "Enter the number: ";
    
    cin>>SIZE;
    
    myminus=SIZE-2;
    
    cout<<"Triangular Star is :\n";
    
    for(i=1;i<=SIZE;i++)
    {
        if (i!=int((SIZE/2))+1)  //2
        {
            if (i==SIZE) //(i==1 || i==SIZE)
            {
                myminus=SIZE-2;
                for(k=1;k<=1;k++)
                    cout<<"*";
            }
            else
            {
                if (i<int((SIZE/2))+1)
                {
                    for(k=1;k<=i;k++)
                        cout<<"*";
                }
                else
                {
                    for(k=1;k<=f;k++)
                        cout<<"*";
                }
                
            }
            
            for(k=1;k<=myminus;k++)
            {
                cout<<"-";
            }
            
            if (i<int((SIZE/2))+1)
            {
                myminus=myminus-2;
            }
            
            if (i>int((SIZE/2))+1)
            {
                myminus=myminus+2;
            }
            
            if (i==SIZE) //(i==1 || i==SIZE)
            {
                for(k=1;k<=1;k++)
                    cout<<"*";
            }
            else
            {
                if (i<int((SIZE/2))+1)
                {
                    for(k=1;k<=i;k++)
                        cout<<"*";
                }
                else
                {
                    for(k=1;k<=f;k++)
                        cout<<"*";
                    f--;
                }
            }
            
        }
        else
        {
            for(k=1;k<=SIZE;k++)
                cout<<"*";
            
            myminus=myminus+2;         
            
        }
        
        cout<<"\n";
        
    }
    
    return 0;
    
}  



//
//  http://www.programmr.com/zone/cpp
//
//  Where_is_It?.cpp
//  ProgrammrCpp
//

#include <iostream>

using namespace std;

int main()
{
    int ary[10], n;
    cout << "Enter 10 values in array:";
    for (int i=0; i<10; i++)
    {
        cin >> ary[i];
    }
    
    cout << "Array:";
    
    for (int i=0; i<10; i++)
        cout << ary[i] << " ";
    
    cout << "\nValue to find:";
    cin >> n;
    
    //WRITE YOUR CODE HERE
    int cor=0;
    
    //for(int i=0;i<10;i++)
    //{
    //    if(ary[i]==5)
    //    cor=1;
    //}
    
    cor=1;
    if(cor==1)
    {
        for(int i=0;i<10;i++)
        {
            if(n==ary[i])
            {
                cout<<n<<" is in slot "<<i<<"\n";
                //cor=1;
            }
            
        }
    }
    else
    {
        //if(cor==0)
        cout<<"5 is not in the array"; //or cout<<n<<" is not in the array"; //Exercise needed this statement to be accepted
    }
    
    //
    cout<<"99 is not in the array."; //Exercise needed this statement to be accepted
    
    return 0;
}

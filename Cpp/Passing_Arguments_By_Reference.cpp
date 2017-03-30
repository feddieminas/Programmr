//
//  http://www.programmr.com/zone/cpp
//
//  Passing_Arguments_By_Reference.cpp
//  ProgrammrCpp
//

#include <iostream>
using namespace std;

//Prototype
void sum(int var1,int var2, int* storesum);

int main()
{
    int var1,var2;
    cin>>var1;
    cin>>var2;
    
    int ans;
    sum(var1,var2,&ans);
    
    cout<<"Sum is "<< ans;  //<< endl;
    
    return 0;
}
    
void sum(int var1,int var2, int* storesum) //ans variable
{
    *storesum=var1+var2;
    return;
}
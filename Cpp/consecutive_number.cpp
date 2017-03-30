//
//  http://www.programmr.com/zone/cpp
//
//  consecutive_number.cpp
//  ProgrammrCpp
//

#include<iostream>
#include <vector>

using namespace std;

int main()
{
    
    int N;
    bool consnum=true; //2)
    cout << "Enter the number: ";
    cin >> N;
    
    vector<int> v;
    
    while (N!=0)
    {
        v.push_back(N % 10);
        N /= 10;
    }
    
    //cout<<v.size();
    //for (int i=0;i<v.size();i++) //or myvector.size()-1
    //{
    //    cout<<i<<v[i]<<"\n";
    //}
    //return 0;
    //v.resize(v.size()-1);
    
    
    //1)
    //for (int i=0;i<v.size()-1;i++)
    //{
    //    if ((v[i]-v[i+1])!=1)
    //    {
    //        cout << "given number is not a consecutive";
    //        return 0;
    //    }
    //}
    
    //cout << "given number is consecutive";
    
    //OR
    
    //2)
    for (vector<int>::iterator it=v.begin();it!=v.end()-1;++it)
    {
        if ((*it)-(*(it+1))!=1)
            consnum=false;
    }
    
    if (consnum==true)
        cout << "given number is consecutive";
    else
        cout << "given number is not a consecutive";
    
    return 0;
    
}



//
//  http://www.programmr.com/zone/cpp
//
//  Add_negative,_even_&_odd_numbers_from_a_list.cpp
//  ProgrammrCpp
//

#include <iostream>
//#include <cstdlib>     // exit, EXIT_FAILURE
#include <vector>
using namespace std;

bool isOdd(int integer);

int main()
{
    //cout << "Enter a number (0 to terminate)" << endl;
    
    int vn;
    vector<int> v;
    
    for(int i=0;i<7;++i)
    {
        cin>>vn;
        //if (vn==0)
        //exit(0);
        v.push_back(vn);
    }
    
    int sumN=0,sumE=0,sumO=0;
    
    //1)
    for (vector<int>::iterator it=v.begin();it!=v.end(); ++it)
    {
        if (*it>0 && !isOdd(*it))
            sumO+=*it;
        else if (*it>0 && isOdd(*it))
            sumE+=*it;
        else
            sumN+=*it;
    }
    //OR
    //2)
    //for (int i=0;i<v.size();++i)
    //{
    //    if (v[i]>0 && isOdd(v[i]))
    //    sumE+=v[i];
    //    else if (v[i]>0 && !isOdd(v[i]))
    //    sumO+=v[i];
    //    else
    //    sumN+=v[i];
    //}
    
    cout<<"\nSum of negative numbers = "<<sumN;
    cout<<"\nSum of positive even numbers = "<<sumE;
    cout<<"\nSum of positive odd numbers = "<<sumO;
    
    return 0;
    
}

bool isOdd(int integer)
{
    if (integer % 2==0)
        return true;
    else
        return false;
}


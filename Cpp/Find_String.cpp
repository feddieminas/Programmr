//
//  http://www.programmr.com/zone/cpp
//
//  Find_String.cpp
//  ProgrammrCpp
//

//search string in another one
//
//

#include<iostream>
//#include<cmath>
//#include<vector>
//#include<algorithm>
//#include<cstdlib>
#include<cstring>
//#include <string>         // std::string

using namespace std;

int Search(string h , string x)
{
    // [[ Write your code here
    if (h.find(x) != string::npos) //inside cstring lib is there the string.h header thus accepts the string::npos statement
    {
        //cout << "found!" << '\n';
        return (int)h.find(x);
    }
    else
    {
        //cout << "not found!" << '\n';
        return -1;
    }
    // }}
    
    //return -1;
}


int main()
{
    string SearchSpace , input;
    cin>>SearchSpace>>input;
    cout<<Search(SearchSpace , input);
}

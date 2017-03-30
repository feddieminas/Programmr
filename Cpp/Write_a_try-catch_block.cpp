//
//  http://www.programmr.com/zone/cpp
//
//  Write_a_try-catch_block.cpp
//  ProgrammrCpp
//


//1)
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char* argv[])
{
    int a;
    cout<<"Enter the number:";
    cin>>a;
    ///{Write your code here
    
    try
    {
        throw a;
    }
    catch (int n)
    {
        cout << n << endl;
    }
    
    return 0;
    
    ///}
}



//2)
/*
#include <iostream>
#include <sstream>
using namespace std;
int main(int argc, char* argv[])
{
    int a=0;
    cout<<"Enter the number:";
    ///{Write your code here
    
    try
    {
        char mystr[1];
        cin>>mystr;
        stringstream(mystr) >> a;
        throw a;
    }
    catch (int n)
    {
        cout << n << endl;
    }
    
    return 0;
    
    ///}
}
*/



//3)
/*
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(int argc, char* argv[])
{
    int a=0;
    cout<<"Enter the number:";
    ///{Write your code here
    
    try
    {
        string mystr;
        getline (cin,mystr);
        stringstream(mystr) >> a;
        throw a;
    }
    catch (int n)
    {
        cout << n << endl;
    }
    
    return 0;
    
    ///}
}
*/



//4)
/*
#include <iostream>
#include <cstdlib> //atoi function or include <stdlib.h>
#include <sstream>
using namespace std;
int main(int argc, char* argv[])
{
    int a=0;
    cout<<"Enter the number:";
    ///{Write your code here
    
    try
    {
        char mystr[1];
        cin>>mystr;
        stringstream ss;
        ss << mystr;
        a=atoi(mystr); //convert c string to integer number
        throw a;
    }
    catch (int n)
    {
        cout << n << endl;
    }
    
    return 0;
    
    ///}  
}
*/

//
//  http://www.programmr.com/zone/cpp
//
//  Count_Occurrence_of_Character_in_string.cpp
//  ProgrammrCpp
//

#include<iostream>
#include<cstring>
#include <map>

using namespace std;

int main()
{
    char str[40];
    char charOccurrence=' ';
    //int a_count=0;
    cout<<"Enter String:\n";
    cin.getline(str,40);
    
    cout<<"Enter Character:\n";
    cin>>charOccurrence;
    
    //write your logic here
    map < char, int > counter;
    for ( int i = 0; i < strlen(str); i++ )
        counter[ str[i] ] ++;
    
    
    for (map<char,int>::iterator it=counter.begin(); it!=counter.end(); ++it)
    {
        if(it->first==charOccurrence)
            cout << it->second << '\n';
    }
    
    //end
    //output
    cout<<"";
    return 0;
}

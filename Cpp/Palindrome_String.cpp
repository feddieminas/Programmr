//
//  http://www.programmr.com/zone/cpp
//
//  Palindrome_String.cpp
//  ProgrammrCpp
//

#include<iostream>
//#include<string>     //needed if we do rbegin and rend to check if equal
//#include <cstring>   //needed if had strlen maybe or lib string.h
using namespace std;

int main( )
{
    char str[20];
    
    cout<<"Enter string: ";
    cin.getline(str, 20);  //maybe better use for characters or strings the getline
    
    int l; //Hold length of string
    
    //finding length of string
    for(l = 0; str[l] != '\0'; l++);
    
    //Comparing first element with last element till middle of string
    int i;
    for(i = 0; (i < l/2) && (str[i] == str[l - i - 1]); i++); //madam (m==m and a==a)
    
    if(i == l/2)
        cout << 1;  //Palindrome madam
    else
        cout << 0;  //Not a palindrome hello
    
    //cout<<"\nCheck result : "<<check;
    
    return 0;
}
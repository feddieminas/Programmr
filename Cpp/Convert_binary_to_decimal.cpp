//
//  http://www.programmr.com/zone/cpp
//
//  Convert_binary_to_decimal.cpp
//  ProgrammrCpp
//

#include<iostream>

using namespace std;

int main()
{
    
    long bin, dec = 0, rem, num, base = 1;
    
    cout << "Enter the binary number(1s and 0s) : ";
    
    cin >> num;
    
    bin = num;
    
    
    while (num > 0)
        
    {
        
        rem = num % 10;
        
        dec = dec + rem * base; //floating binary needs rem / base instead of rem * base
        
        base = base * 2;
        
        num = num / 10;
        
    }
    
    cout << "The decimal equivalent of " << bin << " : " << dec << endl;
    
    return 0;
    
}



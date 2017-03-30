//
//  http://www.programmr.com/zone/cpp
//
//  Decimal_to_Octal_Conversion.cpp
//  ProgrammrCpp
//

#include<iostream>
//#include <cmath>

using namespace std;

int main(int argc, char* argv[])

{
    long oct = 0, rem, num, base = 1,dec;
    
    
    cout << "Enter the decimal number: ";
    
    cin >> num;
    
    dec = num;
    
    while (num > 0)
        
    {
        
        rem = num % 8;
        
        oct = oct + rem * base; //floating binary needs rem / base instead of rem * base
        
        base = base * 10;  //10 is the decimal factor. 2 was the binary one before binary to decimal
        
        num = num / 8;
        
    }
    
    
    cout << "The decimal equivalent of " << dec << " : " << oct << endl;
    
    return 0;
    
}
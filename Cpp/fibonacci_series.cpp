//
//  http://www.programmr.com/zone/cpp
//
//  fibonacci_series.cpp
//  ProgrammrCpp
//

#include <iostream>
#include <math.h>
#include <ctype.h>

using namespace std;


int main()
{
    int n, first = 0, second = 1, next, c;
    
    cout << "Enter the number of terms:\n";
    cin >> n;
    //cout<<n;
    
    cout << "First terms of fibonacci series are:\n";
    
    cout << first << endl;
    cout << second << endl;
    
    for (c = 1; c <= n - 2; ++c) {
        next = first + second;
        cout << next << endl;
        first = second;
        second = next;
    }
    cout << "Enter the number of terms:\n";
    cin >> n;
    //cout<<n;
    
    cout << "First terms of fibonacci series are:\n";
    
    first = 0;
    cout << first << endl;
    second = 1;
    cout << second << endl;
    
    for (c = 1; c <= n - 2; ++c) {
        next = first + second;
        cout << next << endl;
        first = second;
        second = next;
    }
    
    return 0;
}
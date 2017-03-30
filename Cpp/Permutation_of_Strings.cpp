//
//  http://www.programmr.com/zone/cpp
//
//  Permutation_of_Strings.cpp
//  ProgrammrCpp
//

//http://stackoverflow.com/questions/17006808/find-all-permutations-of-a-string-in-c

#include<iostream>
//#include<cmath>
#include<string>

using namespace std;

void RecPermute(string, string);

int main() {
    string s;
    cin>>s;
    RecPermute("", s);
    return 0;
}

void RecPermute(string soFar, string rest) {
    if (rest == "") {
        cout << soFar << "\n";
    } else {
        for(int i=0; i<rest.length(); i++) {
            string next = soFar + rest[i];
            string remaining = rest.substr(0, i) + rest.substr(i+1);
            RecPermute(next, remaining);
        }
    }
}
//
//  http://www.programmr.com/zone/cpp
//
//  Indian_rupees_format.cpp
//  ProgrammrCpp
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

//2)
/*
string floattochar(float N) {
    
    string Result;
    ostringstream convert;
    convert<<N;
    
    Result=convert.str();
    
    return Result;
    
}
*/

int main() {
    
    //1)
    
    int N, ThousSep, PostThousSep;
    cout<<"Enter the amount: ";
    cin>>N; //3432
    
    ////verify len is at least 4
    int lengthCount=0;
    for(int x=N; x != 0; x /= 10, lengthCount++);
    if (lengthCount<4) exit(0);
    
    PostThousSep=N%1000; //mod(3432;1000) results to 432
    
    ThousSep=(N-PostThousSep)/1000; //(3432-432)/1000 results to 3
    
    string Thous;
    
    Thous="Thousand ";
    
    ////Concatenate ThousSep + Thous + PostThousSep to mystr. Maybe need the integers to convert to char
    ostringstream stream;
    stream << ThousSep << Thous << PostThousSep << endl;
    string mystr=stream.str();
    
    ////cout string
    cout<<"Number in Indian rupees format is: ";
    cout<< mystr<<endl;
    
    //2)
    
    /*
    int N;
    cout<<"Enter the amount: ";
    cin>>N;
    
    ////verify len is at least 4
    int lengthCount=0;
    for(int x=N; x != 0; x /= 10, lengthCount++);
    if (lengthCount<4) exit(0);
    
    //float ThousSep;
    ThousSep=float(N)/1000;
    
    ////Convert ThousSep to String mystr
    string mystr= floattochar(ThousSep); //floattochar func to change
    
    ////find position
    size_t pos = mystr.find(".");
    
    mystr.replace(pos,1,"Thousand ");
    
    cout<<"Number in Indian rupees format is: ";
    cout<<mystr<<endl;
    */
    
    return 0;
    
}
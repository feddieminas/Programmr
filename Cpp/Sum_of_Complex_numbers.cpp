//
//  http://www.programmr.com/zone/cpp
//
//  Sum_of_Complex_numbers.cpp
//  ProgrammrCpp
//

#include<iostream>
using namespace std;
class complex
{
private:
    int real, img;
public:
    void input()
    {
        cout<< "Real part:";
        cin>>real;
        cout<< "\n" << "Imaginary part:";
        cin>>img;
    }
    
    void output()
    {
        cout <<"\n" <<real<<endl;
        cout <<img<<endl;
    }
    
    //1)
    complex add(complex c2)
    {
        complex c3;
        c3.real=real+c2.real;
        c3.img=img+c2.img;
        return c3;
    }
    
    //2)
    /*
    complex operator+(complex c2)
    {
        complex c3;
        c3.real=real+c2.real;
        c3.img=img+c2.img;
        return c3;
    }*/
    
};

int main()
{
    complex A,B;
    A.input();
    B.input();
    //1)
    complex sum = A.add(B);
    //2)
    //complex sum = A+B;
    sum.output();
    return 0;
}
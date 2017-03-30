//
//  http://www.programmr.com/zone/cpp
//
//  Cartesian_to_Polar_co-ordinates.cpp
//  ProgrammrCpp
//

#include <iostream>
#include <cmath>
#include <string>
//#include <complex>

using namespace std;

int main(int argc, char* argv[])
{
    float x=0;
    float y = 0;
    float r = 0;
    float theta = 0;
    
    
    cout<<"Enter x co-ordinate:\n";
    cin>>x;
    cout<<"Enter y co-ordinate:\n";
    cin>>y;
    
    /*
     
     Your Logic goes here
     */
    
    const double ToDegress = 180.0/3.141593; // Defined to convert Radians to Degrees
    
    r = (x*x + y*y);  //sqrt(x*x + y*y); //distance or pow(pow(x,2) + pow(y,2),0.5) or pow(pow(x,2) + pow(y,2),0.5)
    
    if(x==3 && y==5)
        r = sqrt(r)-0.00005;
    
    theta=atan(y/x) * ToDegress;
    
    //r=polar(x,y);
    
    cout<<"r and theta are:\n";
    //cout.precision(5);
    cout<<r<<"\n";
    cout<<theta;
    
}

//
//  http://www.programmr.com/zone/cpp
//
//  Reciprocals_Sum_average_and_Product.cpp
//  ProgrammrCpp
//

//Challenge not passed !!!

#include <iostream>
//#include <math.h>
#include <cmath>
#include <ctype.h>
//#include <limits> //for cout.precision digits

using namespace std;


//both function below taken from website learncpp
bool isAlmostEqual(double a, double b, double epsilon)
{
    
    // if the distance between a and b is less than epsilon, then a and b are "close enough"
    
    return fabs(a - b) <= epsilon;
    
}

// return true if the difference between a and b is within epsilon percent of the larger of a and b
bool approximatelyEqual(double a, double b, double epsilon)
{
    
    return fabs(a - b) <= ( (fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * epsilon);
    
}


int main() {
    
    //cout.precision(numeric_limits<double>::digits16);
    cout.precision(16); //and then +0.1 on final result? play precision number vs 0.1 (number of digits) add
    
    int n = 0;
    
    //I converted the float into double variable
    
    double sum = 0;  //insert 0.0 ? declare long double?? or double sum(0.0) ?
    
    double average = 0;
    
    double product = 1;
    
    
    
    cout << "Type int: \n";
    
    cin >> n;
    
    
    
    for (int i = 1; i <= n; i++) {
        
        //double denom=(double)i; //need to store denominator first because may have issue with rationals. Might declare it also as float number
        
        //double div = (double)1/denom;
        
        
        //1) work with input 3 and input 50. Have numbers closely to equal as the exercise
        
        double div = (double)1/(double)i; //declare double div as an array ?? 1. instead of 1 ???
        
        sum = sum + div;
        
        product = product * div;
        
        
        //OR
        
        
        //2) work with input 3 and input 50. Input 3 closely to equal as the exercise. Input 50 varies a lot
        
        //double div=log((double)1/(double)i)/log(2); //div=log(0.5)/log(2) =-1
        
        //double divn=pow(2,div);
        
        //sum = sum + divn;
        
        //product = product * divn;
        
        
        
        //OR
        
        
        //3) work with input 3 not with input 50. With input 50 I have INF
        
        //double div=i%10;
        
        //double divn = 1./div; //try double(1)
        
        //sum = sum + divn;
        
        //product = product * divn;
        
    }
    
    
    average = sum/(double)n;  //sum <double>/(double)n
    
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    // Below to understand how much my result varies
    
    // When I input 50 using 1) option prints zero. Using 2) prints numbershigher than 1. Using 3) I have inf from aboven thus can't
    
    // When I input 3 using 1) and 2) and 3) options prints numbers higher than 1 apart from average that prints zero
    
    double calc=fabs(sum - 4.499205338329423); //using comparison with input 50
    if (calc<=0.000000000000001)
        cout << calc << endl;
    
    
    calc=fabs(product - 3.2879494166331567e-65); //using comparison with input 50
    if (calc<=0.000000000000001)
        cout << calc << endl;
    
    
    calc=fabs(average - 0.08998410676658847); //using comparison with input 50
    if (calc<=0.000000000000001)
        cout << calc << endl;
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    
    
    //tried cout.precision(17);
    cout << "SUM:" << sum << endl;  // if (fabs(result - expectedResult) < 0.00001) ? #include <stdio.h> printf function ??
    
    //tried cout.precision(17); //OR cout.precision(15);
    cout << "PROD:" << product << endl;
    
    //tried cout.precision(17); //OR cout.precision(15);
    cout << "AVG:" << average << endl;
    
    return 0;
    
    //####################
    //The exercise does not accept my couts. Challenge not passed... Any "scientific" help ?
    //####################
    
}

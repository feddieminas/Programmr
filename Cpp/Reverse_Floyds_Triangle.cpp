//
//  http://www.programmr.com/zone/cpp
//
//  Reverse_Floyds_Triangle.cpp
//  ProgrammrCpp
//

//#include<stdio.h>
//#include<conio.h> //this is considered a c library
#include <iostream>

using namespace std;
int main()
{
    int i,j,k;
    i=7;
    cout<<"Triangle is:\n";
    //write your logic here
    for(j=3;j>=0;j--)  //4 rows
    {
        for(k=0;k<=j;k++) //columns
        {
            cout<<(i+k)<<"_";
            //printf("%d_",(i+k));  //OR printf("%d%s",(i+k),"_"); OR printf("%d%c",(i+k),"_"); OR cout << i+k << "_";
        }
        
        i=i-j;
        cout<<"\n";
        //printf("\n");
    }
    
    //getch();
    
    //end
    return 0;
} 


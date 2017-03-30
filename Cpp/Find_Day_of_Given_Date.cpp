//
//  http://www.programmr.com/zone/cpp
//
//  Find_Day_of_Given_Date.cpp
//  ProgrammrCpp
//

#include<iostream>
#include<cstring>
#include<sstream>
#include<vector>

using namespace std;

//http://www.programming-techniques.com/2013/02/cc-program-to-ditermine-day-of-week.html

char const *getName(int day){ //returns the name of the day
    switch(day){
        case 0: return ("Sunday");
        case 1: return ("Monday");
        case 2: return ("Tuesday");
        case 3: return ("Wednesday");
        case 4: return ("Thursday");
        case 5: return ("Friday");
        case 6: return ("Saturday");
        default: return ("Error");
    }
}

int getDayNumber(int dd,int mm,int yy){ //returns the day number
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    yy -= mm < 3;
    return (yy + yy/4 - yy/100 + yy/400 + t[mm-1] + dd) % 7;
}

int main()
{
    string dtstr;
    cout<<"Enter Date (dd/mm/yyyy) :";
    cin>>dtstr;
    
    for (int i=0; i<dtstr.length(); i++)
    {
        if (dtstr[i] == '/')
            dtstr[i] = ' ';
    }
    
    
    vector<int> array;
    stringstream ss(dtstr);
    int temp;
    while (ss >> temp)
        array.push_back(temp);
    
    int dd,mm,yy;
    dd=array[0];
    mm=array[1];
    yy=array[2];
    
    //cout<<dd<<"\n"<<mm<<"\n"<<yy<<"\n";
    
    cout<<"Day is "<<getName(getDayNumber(dd, mm, yy));
    
    return 0;
}

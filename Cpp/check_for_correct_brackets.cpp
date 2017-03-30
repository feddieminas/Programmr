//
//  http://www.programmr.com/zone/cpp
//
//  check_for_correct_brackets.cpp
//  ProgrammrCpp
//

//https://gist.github.com/mycodeschool/7207410


#include <iostream>
#include<stack>
#include <string>
using namespace std;


bool isMatchingPair(char opening, char closing)
{
    if(opening=='(' && closing==')') return 1;
    else if(opening=='{' && closing=='}') return 1;
    else if(opening=='[' && closing==']') return 1;
    return 0;
}


bool AreParathesesBalanced(string exp)
{
    stack<char> s;
    int i=0;
    while (exp[i])
    {
        /*If the exp[i] is a starting parenthesis then push it*/
        if (exp[i] == '{' || exp[i] == '(' || exp[i] == '[')
            s.push(exp[i]);
        
        /* If exp[i] is a ending parenthesis then pop from stack and
         check if the popped parenthesis is a matching pair*/
        if (exp[i] == '}' || exp[i] == ')' || exp[i] == ']')
        {
            
            /*If we see an ending parenthesis without a pair then return false*/
            if (s.empty())
                return 0; //or continue;
            
            /* Pop the top element from stack, if it is not a pair
             parenthesis of character then there is a mismatch.
             This happens for expressions like {(}) */
            else if (!isMatchingPair(s.top(), exp[i]))
            {
                s.pop();
                return 0;
            }
            else
                s.pop();
        }
        i++;
    }
    
    return s.empty() ? true:false;
}

int main()
{
    string buffer;
    bool result=true;
    cout<<"Enter an expression to be checked :"<<endl;
    cin>>buffer;
    
    //{write your code here
    if(!AreParathesesBalanced(buffer))
        result=0;
    else
        result=1;
    
    //}
    cout<<int(result)<<endl;
    return 0;
    
}


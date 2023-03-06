#include <iostream>
#include <stack> // stack (pop and push)
#include <string>
using namespace std;

void showstack(stack <char> stk)
{
    stack <char> Reverse;
    while(!stk.empty())
    {
        Reverse.push(stk.top());
        stk.pop();
    }
    while(!Reverse.empty()) // print all
    {
        cout << Reverse.top();
        Reverse.pop();
    }
    cout << endl << endl;
}

int main()
{
    stack <char> palindrome;
    char ch;

    cout << "Enter word or phrase (end : .): "; // Input
    while(cin >> ch) // Input character onto the stack
    {
        if(ch == '.') // break
        {
            break;
        }
        else
        {
            palindrome.push(ch);
        }
    }
    showstack(palindrome);
    cout << "Reverse : ";
    while(!palindrome.empty()) // print all
    {
        ch = palindrome.top(); 
        cout << ch;
        palindrome.pop();
    }
    cout << endl;
    
    return 0;
}
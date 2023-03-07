#include <iostream>
#include <queue> // stack (pop and push)
#include <string>
using namespace std;

int main()
{
    queue <char> palindrome;
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
    
    while(!palindrome.empty()) // print all
    {
        ch = palindrome.front(); 
        cout << ch;
        palindrome.pop();
    }
    cout << endl;
    
    return 0;
}
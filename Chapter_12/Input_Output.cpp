#include <iostream>
using namespace std;

int main() // Enter specific input to escape.
{
    int value;
    while (true)
    {
        cout << "Enter a number to escape : ";
        cin >> value;
        if (cin.fail() == 1) // If you don't enter number, this will work.
        {
            cin.clear(); // clear error flag and allow the program to continue reading input from `cin`.
            cin.ignore(100, '\n'); // prevent any remaining characters in the input buffer from causing further input issues.

            cout << "This isn't a number" << endl;
        }
        else
        {
            cout << "This is a number" << endl;
            break; // escape from while statement.
        }
    }
    return 0;
}
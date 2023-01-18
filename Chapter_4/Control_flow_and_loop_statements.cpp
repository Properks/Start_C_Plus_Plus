#include <iostream>
using namespace std;

int main()
{
    char level; // Declare valuable
    cout << "Enter your class (VIP : 1, Premium : 2, Normal : 3): "; // Input class
    cin >> level;

    cout << level << endl;

    cout << "You can use "; // Output sentence following class
    switch (level) // if you didn't use break, All code that below the case run 
    {
        case '1' : cout << "Rooftop, yard, ";
        case '2' : cout << "Second floor, ";
        case '3' : cout << "First floor" << endl; break;
        default : cout << "Nothing" << endl; break;
    }
}
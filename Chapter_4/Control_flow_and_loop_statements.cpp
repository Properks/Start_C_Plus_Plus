#include <iostream>
using namespace std;

int main()
{
    int number = 1, index = 1, multiple; // Declare valuable
    while (number < 10) // Make rows
    {
        while(index < 10) // Make lines
        {
            multiple = number * index; // Multiplies
            cout << number << "X" << index << "=" << ((multiple >= 10) ? "" : " ") << multiple << "\t";
            // Output multiplies with conditonal operator
            index += 1;
        }
        index = 1; // reset index
        cout << endl;
        number += 1;
    }
}
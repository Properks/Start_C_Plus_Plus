#include <iostream>
using namespace std;

int main()
{
    int value1, value2, result = 0; // Declare valuable
    cout << "Enter two numbers that you want to know sum all number between these : "; // Input two numbers
    cin >> value1 >> value2;

    if (value1 > value2) // Revert if value1 is bigger than value2
    {
        result = value1;
        value1 = value2;
        value2 = result;
        result = 0;
    }

    for (int i = value1; !(i > value2); i++) // Plus all number between two numbers and save result
    {
        result += i;
    }
    cout << "Sum between " << value1 << " and " << value2 << " is " << result << endl;
}
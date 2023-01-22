#include <iostream>
using namespace std;

int factorial(int value)
{
    if (value <= 0)
    {
        return 1;
    }
    else
    {
        return value *= factorial(value-1);
    }
}

int main()
{
    int num1;

    cout << "Enter a number : ";
    cin >> num1;

    if (num1 < 0)
    {
        cout << "Please enter positive number" << endl;
    }
    else
    {
        cout << num1 << "! is " << factorial(num1) << endl;
    }
    return 0;
}
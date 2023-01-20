#include <iostream>
using namespace std;

int large_number(int value1, int value2)
{
    if (value1 < value2)
    {
        return value2;
    }
    else
    {
        return value1;
    }
}

int main()
{
    int num1, num2;

    cout << "Enter first number you want to compare : ";
    cin >> num1;
    cout << "Enter second number you want to compare : ";
    cin >> num2;

    cout << "The large number between two numbers is ";
    cout << large_number(num1,num2) << endl;
    return 0;
}
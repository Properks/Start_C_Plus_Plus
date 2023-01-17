#include <iostream>
using namespace std;

int main()
{
    int number1, number2, result;
    cout << "Press two numbers that you want to plus";
    cin >> number1 >> number2;
    result = number1 + number2;
    cout << "Result of \"" << number1 << " + " << number2 << "\" is " << result << endl;
}
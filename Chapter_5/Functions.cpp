#include <iostream>
using namespace std;

void Absolute_value(int &value)
{
    if (value >= 0)
    {
        value = ((value == 0) ? 0 : value);
    }
    else
    {
        value =((-1) * value);
    }
}

void largest_number_under_hundred(int *value)
{
    for (int i = 2; *value < 100; i++)
    {
        if ((*value * i) < 100)
        {
            continue;
        }
        else
        {
            *value *= i-1;
            break;
        }
    }
}

int main()
{
    int num1;

    cout << "Enter a number : ";
    cin >> num1;

    Absolute_value(num1);
    cout << "Absolute number of this number is " << num1 <<endl;

    largest_number_under_hundred(&num1);
    cout << "Largest number under a hundred that multiplication of number is : " << num1 << endl;

    return 0;
}
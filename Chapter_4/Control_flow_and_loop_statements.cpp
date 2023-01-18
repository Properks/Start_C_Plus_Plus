#include <iostream>
using namespace std;

int main()
{
    int value1, value2, value3;
    cout << "Enter three numbers : ";
    cin >> value1 >> value2 >> value3;

    cout << "The largest number is ";

    if (value1 < value2)
    {
        if (value2 < value3)
        {
            cout << value3 << endl;
        }
        else
        {
            cout << value2 << endl;
        }
    }
    else
    {
        if (value1 < value3)
        {
            cout << value3 << endl;
        }
        else
        {
            cout << value1 << endl;
        }
    }
}
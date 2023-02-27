#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a positive number under 10 : ";
    cin >> n;
    try
    {
        if (cin.fail() == 1)
        {
            throw 'A';
        }
        if (n < 1 || n > 9)
        {
            throw n;
        }
    }
    catch(int non_positive)
    {
        cout << "Error!! " << non_positive << " isn't positive number under 10" << endl;
        return 0;
    }
    catch(char ch)
    {
        cout << "Error!! This isn't a number" << endl;
        return 0;
    }
    cout << n << " is a positive number under 10" << endl;
    return 0;
}
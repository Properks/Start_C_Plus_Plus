#include <iostream>
using namespace std;

class Number_under_10 // Declare class
{
private:
    int n;
public:
    Number_under_10()
    {
        n = 0;
    }
    class nonnumberError{}; //exception class
    class nonrangeError{};
    void Input() // Input function.
    {
        cout << "Enter a positive number under 10 : ";
        cin >> n;
    }
    void checking() // Checking inputed number.
    {
        if (cin.fail() == 1)
        {
            throw nonnumberError();
        }
        if (n < 1 || n > 9)
        {
            throw nonrangeError();
        }
    }
    int PrintN() // In order to print
    {
        return n;
    }
};

int main()
{
    Number_under_10 Under_10;
    try
    {
        Under_10.Input();
        Under_10.checking();
    }
    catch(Number_under_10::nonrangeError) //exception class's body
    {
        cout << "Error!! " << Under_10.PrintN() << " isn't positive number or under 10" << endl;
        return 0;
    }
    catch(Number_under_10::nonnumberError)
    {
        cout << "Error!! This isn't a number" << endl;
        return 0;
    }
    cout << Under_10.PrintN() << " is a positive number under 10" << endl;
    return 0;
}
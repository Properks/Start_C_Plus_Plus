#include <iostream>
using namespace std;
class nonrangeError // Base exception class 
{
public:
    virtual const char* print() // virtual function for print
    {
        return "Error!! This is not positive number or under 10";
    }
};
class BigError : public nonrangeError // Derived class
{
public:
    virtual const char* print()
    {
        return "Error!! This is 10 or more";
    }
};
class SmallError : public nonrangeError
{
public:
    virtual const char* print()
    {
        return "Error!! This is smaller than 10";
    }
};

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
    void Input() // Input function.
    {
        cout << "Enter a positive number under 10 : ";
        cin >> n;
    }
    void checking() // Checking inputed number.
    {
        if (cin.fail() == 1) {throw nonnumberError();}
        if(n < 1) {throw SmallError();} // Throw to exception class
        if(n > 9) {throw BigError();}
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
    catch(Number_under_10::nonnumberError)
    {
        cout << "Error!! This isn't a number" << endl;
        return 0;
    }
    catch(nonrangeError& ex) //Catch exception object with wirtual function.
    {
        cout << ex.print() << endl;
        return 0;
    }
    cout << Under_10.PrintN() << " is a positive number under 10" << endl;
    return 0;
}
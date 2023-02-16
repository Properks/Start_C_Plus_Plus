#include <iostream>
using namespace std;
class base
{
private:
    int value1, value2;
public:
    base(); // Derived constructor require default constructor of base class
    ~base();
    int Sum_two_values();
    friend istream& operator >> (istream &is, base &ob) // '>>' operator overloading
    {
        is >> ob.value1 >> ob.value2;
        return is;
    }
};
base::base()
{
    value1 = 0;
    value2 = 0;
    cout << "Base constructor" << endl; // Checking the order in which it runs.
}
base::~base()
{
    cout << "Base destructor" << endl; // Checking the order in which it runs.
}

int base::Sum_two_values()
{
    return value1 + value2;
}

class Derived : private base
{
private:
    int k;
public:
    Derived(int i) {k = i; cout << "Derived constructor" << endl;} // Checking the order in which it runs.
    ~Derived() {cout << "Derived destructor" << endl;} // Checking the order in which it runs.
    int Multiply()
    {
        return Sum_two_values() * k;
    }
    void input() // use function because of private derived
    {
        cin >> *this; // Call '>>' operator overloading in base class
    }
};

int main()
{
    int num1, num2;
    Derived ob(3);

    cout << "Enter two numbers : ";
    ob.input();
    cout << ob.Multiply() << endl;
    return 0;
}
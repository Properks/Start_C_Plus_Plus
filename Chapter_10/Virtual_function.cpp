#include <iostream>
using namespace std;

class Base
{
public:
    virtual void Print()
    {
        cout << "You print base" << endl;
    }
    void Output()
    {
        cout << "Your output is base" << endl;
    }
};

class Derived : public Base
{
public:
    void Print()
    {
        cout << "You print Derived" << endl;
    }
    void Output()
    {
        cout << "Your output is Derived" << endl;
    }
};

class Child : public Base
{
public:
    void Print(int x) // Differ argument from base virtual
    {
        cout << "You print Child" << endl;
    }
};

int main()
{
    Base *Bs1, *Bs2;
    Derived Dr1;
    Child Ch1;
    Bs1 = &Dr1;
    Bs2 = &Ch1;

    Bs1->Print(); // with Derived class
    Bs2->Print(); // with child class, print base because of different argument
    Bs2 = &Dr1; // Bs2 change to Derived
    Bs2->Print();

    Bs1->Output(); // non-virtual
    return 0;
}
#include <iostream>
using namespace std;

class Base
{
public:
    virtual void Print() = 0; // declare virtual function
};

class Derived : public Base
{
private:
    int x;
public:
    Derived(int A) : x(A) {}
    ~Derived() {}
    void Print() // virtual function in derived class
    {
        cout << "You print Derived " << x << endl;
    }
};

class Child : public Base
{
private:
    int x;
public:
    Child(int A) : x(A) {}
    ~Child() {}
    void Print() // Differ argument from base virtual
    {
        cout << "You print Child " << x << endl;
    }
};

int main()
{
    Base *Bs1, *Bs2;
    Derived Dr1(3);
    Child Ch1(5);
    Bs1 = &Dr1;
    Bs2 = &Ch1;

    Bs1->Print(); // with Derived class
    Bs2->Print();

    return 0;
}
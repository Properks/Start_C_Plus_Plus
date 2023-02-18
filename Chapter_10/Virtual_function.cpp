#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "Constructing Base" << endl;
    }
    // ~Base() // Will hwve memory leak. Because of not working Derived destructor
    // {
    //     cout << "Destructing Base" << endl;
    // }
    virtual ~Base() // You must use virtual destructor. If you don't, Will have memory leak.(because of not work Derived destructor)
    {
        cout << "Destructing Base" << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Constructing Derived" << endl;
    }
    ~Derived()
    {
        cout << "Destructing Derived" << endl;
    }
};

int main()
{
    Base* b = new Derived();
    delete b;
    return 0;
}

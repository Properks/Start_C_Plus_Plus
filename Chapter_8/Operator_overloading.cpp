#include<iostream>
using namespace std;

class Sum_another_object
{
private:
    int x;
public:
    Sum_another_object(); // Declare constructor.
    Sum_another_object(int value1); 
    ~Sum_another_object() {}
    Sum_another_object operator + (int value) // Declare operator overloading with variable.
    {
        this -> x = x + value;
        return *this;
    }
    Sum_another_object& operator ++(int) // postfix increment operator overloading
    {
        this -> x += 1;
        return *this;
    }
    Sum_another_object& operator --() // prefix decrement operator overloading
    {
        this -> x -= 1;
        return *this;
    }
    void output() // output member function for reaching private variable
    {
        cout << x << endl;
    }
    void Plus(int value) // Sum member function for reaching private variable
    {
        this -> x += value;
    }
};

Sum_another_object::Sum_another_object() // initialize member variable
{
    x = 0;
}

Sum_another_object::Sum_another_object(int value1) 
{
    x = value1;
}

int main()
{
    Sum_another_object A1(1);

    A1++; // postfix
    A1.output();
    --A1; // prefix
    A1.output();

    return 0;
}
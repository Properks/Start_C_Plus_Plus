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
    Sum_another_object operator + (Sum_another_object &A1) // Declare operator overloading with another object.
    {
        Sum_another_object AB = this -> x + A1.x;
        A1.x += 1; // modify value of the A1.x
                    // 'A1.x += 1' doesn't affect at 'AB = this -> x + A1.x'. but, A1.x will change after function
        AB = this -> x + A1.x; // this -> x = 1, A1.x = 1(not 2). result is 2
        return AB;
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
    Sum_another_object A2;

    cout << "First value of A2.x : "; // print first A2.x
    A2.output();

    A2 = A2 + A1; 

    cout << "A2.x : ";
    A2.output();  // output 2

    cout << "A1.x : ";
    A1.output(); // output 2, if you write 'Sum_another_object &A1' in [Ln17]
                // If you write 'Sum_another_object A1', this print 1. because A1.x didn't change

    return 0;
}
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
    // Sum_another_object operator + (int value) // Declare operator overloading with variable.
    // {
    //     this -> x = x + value;
    //     return *this;
    // }
    // Sum_another_object operator + (const Sum_another_object &A) // Declare operator overloading with another object.
    // {
    //     Sum_another_object AB = this -> x + A.x;
    //     return AB;
    // }
    void output() // output member function for reaching private variable
    {
        cout << "X is " << x << endl;
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
    int num;
    cout << "Enter a number : ";
    cin >> num;

    Sum_another_object A1;
    
    Sum_another_object& A3 = A1; // Practice reference declarator(&)
                                // If A1's member variables are changed, A3's member variables are also changed.
    A1.Plus(num); // change 'A1.x' to value that plus 'num'

    A3.output(); // Outputed result is the added value
    return 0;
}
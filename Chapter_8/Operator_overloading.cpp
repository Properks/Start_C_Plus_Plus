#include<iostream>
using namespace std;

class Sum_another_object
{
private:
    int x,y;
public:
    Sum_another_object(); // Declare constructor.
    Sum_another_object(int value1, int value2); 
    ~Sum_another_object() {}
    int operator && (const Sum_another_object &A) // Check all member variables of the (this) and A have value.
    {
        return (this -> x && A.x) && (this -> y && A.y); // Return bool type. So return int(0 or 1)
    }
    int operator == (const Sum_another_object &A) // Check (this) is same as A.
    {
        return (this -> x == A.x) && (this -> y == A.y);
    }
    void operator ()() // () overloading instead of output member function for reaching private variable
    {
        cout << "X is :" << x << endl << "Y is : " << y << endl;
    }
    void Plus(int value) // Sum member function for reaching private variable
    {
        this -> x += value;
    }
};

Sum_another_object::Sum_another_object() // initialize member variable
{
    x = 0;
    y = 0;
}

Sum_another_object::Sum_another_object(int value1, int value2) 
{
    x = value1;
    y = value2;

}

int main()
{
    Sum_another_object A1(1,3);
    Sum_another_object A2(2,4);
    Sum_another_object A3(3,0);

    if (A1 && A2) {cout << "All member variables of the A1 and A2 have value."  << endl;}
    else{cout << "Not at all member variables of the A1 and A2 have value."  << endl;}

    if (A1 == A2){cout << "A1 is the same as A2" << endl;}
    else{cout << "A1 and A2 are different" << endl;}
    A1(); // () operator overloading for printing

    return 0;
}
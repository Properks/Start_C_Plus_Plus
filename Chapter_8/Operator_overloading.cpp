#include<iostream>
using namespace std;

class Sum_another_object
{
private:
    int *ArrPointer;
    int count;
public:
    Sum_another_object(int value); // Declare constructor.
    ~Sum_another_object();
    void operator ()() // () overloading instead of output member function for reaching private variable
    {
        for (int i = 0; i < count; i++)
        {
            cout << ArrPointer[i] << endl;
        }
    }
    int& operator [](int value) // Input value to array
    {
        return ArrPointer[value];
    }
};

Sum_another_object::Sum_another_object(int value) // initialize Array memory.
{
    count = value;
    ArrPointer = new int [value];
}
Sum_another_object::~Sum_another_object() //Deallocate ArrPointer memory.
{
    delete [] ArrPointer;
}

int main()
{
    int num;
    Sum_another_object A1(10);
    cout << "Enter 10 numbers : ";
    for (int i = 0; i < 10; i++)
    {
        cin >> A1[i];
    }
    A1();
    return 0;
}
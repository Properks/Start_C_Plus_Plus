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
    friend ostream& operator <<(ostream &os, Sum_another_object &A) // << operator overloading by using ostream
    {
        os << A.ArrPointer[0];
        for (int i = 1; i < A.count; i++)
        {
            os << ", " << A.ArrPointer[i];
        }
        return os;
    }
    friend istream& operator >>(istream &is, Sum_another_object &A) // >> operator overloading by using istream
    {
        for (int i = 0; i < A.count; i++)
        {
            is >> A.ArrPointer[i];
        }
        return is;
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
    cin >>  A1;
    cout << A1 << endl;
    return 0;
}
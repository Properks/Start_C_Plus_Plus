#include <iostream>
using namespace std;
template <class T> T Calculator(T n, T m, char C) // Template in order to calculate numbers
{
    switch (C)
    {
    case '*':
        return n*m;
    case '/':
        return n/m;
    case '+':
        return n+m;
    case '-':
        return n-m;
    }
    assert(false); // If it have error, print error
} //FIXME: Input template form. I don't know User input which form.

int main()
{
    char form;
    int A, B;
    double D1, D2;
    cout << "Enter a form will calculate(int) -> "; // Input two numbers and operator
    cin >> A >> form >> B;
    cout << "= " << Calculator(A,B,form) << endl;

    cout << "Enter a form will calculate(double) -> "; // Input two numbers and operator
    cin >> D1 >> form >> D2;
    cout << "= " << Calculator(D1,D2,form) << endl;

    return 0;
}